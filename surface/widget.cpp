#include "widget.h"
#include "ui_widget.h"
#include <QtWidgets/qtwidgetsglobal.h>
#include <QtGui/qwindowdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qmargins.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qpalette.h>
#include <QtGui/qfont.h>
#include <QtGui/qfontmetrics.h>
#include <QtGui/qfontinfo.h>
#include <QtWidgets/qsizepolicy.h>
#include <QtGui/qregion.h>
#include <QtGui/qbrush.h>
#include <QtGui/qcursor.h>
#include <QtGui/qkeysequence.h>
#include <string.h>
#include <stdio.h>
#include <QDebug>
#include <QtCharts/QtCharts>
// 构造函数
Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    init();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::init(){ 
    spectList = ui->spectList;
    comboBox = ui->comboBox;
    scanningButton = ui->scanningButton;
    setChannelNumberButton = ui->setChannelNumberButton;
    numberEdit = ui->numberEdit;
    channelNumberEdit = ui->channelNumbeEdit;
    normalradioButton = ui->radioButton;
    enradioButton = ui->radioButton_2;
    softTouchButton = ui->pushButton_3;
    timeEdit = ui->lineEdit_3;
    timeEdit->setText("10");
    timecountEdit = ui->lineEdit_4;
    timecountEdit->setText("1");
    getsignButton = ui->pushButton_6;
    getsignButton->setEnabled(false);
    dataList = ui->listWidget;
    SignLine = ui->lineEdit_2;
    dataSeriesView = ui->graphicsView;
}
// string to qstring
QString str2Qstr(std::string str){
    QString res = QString::fromStdString(str);
    return res;
}
// qstring to str
std::string Qstr2str(QString qstr){
    std::string str = qstr.toStdString();
    return str;
}
// qstring to char*
char* Qstr2charArray(QString qstr){
    char *ch;
    QByteArray ba = qstr.toLatin1();
    ch=ba.data();
    return ch;
}
// string to char*
char* str2charArray(std::string str){
    char * strc = new char[strlen(str.c_str())+1];
    strcpy(strc, str.c_str());
    return strc;
}
// qstring to int
int qstr2int(QString qstr){
    return qstr.toInt();
}
// int to qstring
QString int2qstr(int x){
    return QString::number(x);
}
// qstring to float
float qstr2float(QString x){
    return x.toFloat();
}

//扫描光谱仪列表
void Widget::on_scanningButton_pressed()
{

    SPECTRO_INF* pcSepctorInf = new SPECTRO_INF[64];

       SPECTRO_INF* pt = new SPECTRO_INF[64];

       int iSpectorCount = 0;
       if (JF_USB_GetSpectorMeterList( iSpectorCount, pt) == 0)
       {
           QMessageBox::information(NULL, "提示", "获取失败");
           return;
        }
        spectList->clear();
        comboBox->clear();
        for (int j = 0; j < iSpectorCount; j++)
        {

            pcSepctorInf[j] = (SPECTRO_INF)*(pt+sizeof(SPECTRO_INF)*j);
            //pcSepctorInf[j] = (SPECTRO_INF)Marshal.PtrToStructure((IntPtr)((UInt32)pt + j * Marshal.SizeOf(typeof(SPECTRO_INF))), typeof(SPECTRO_INF));
            std::string sSN = (char*)pcSepctorInf[j].Sn;//光谱仪编号
            int iChannelNum = pcSepctorInf[j].iChannelNum;//通道号
            std::string sMode = (char*)pcSepctorInf[j].Mode;//型号
//            float fStartWave = pcSepctorInf[j].fWaveRange[0];//起始波长
//            float fEndWave = pcSepctorInf[j].fWaveRange[1];//结束波长
            std::string sDeviceName = pcSepctorInf[j].DeviceName;//设备名
            QString isSN = QString::fromStdString(sSN+"   "+std::to_string(iChannelNum));
            QString iChannelNum_str = QString::fromStdString(std::to_string(iChannelNum));
            spectList->insertItem(0,isSN);


            comboBox->insertItem(0,iChannelNum_str);
        }
        if (comboBox->count() > 0)
        {
             comboBox->setCurrentIndex(0);

             normalradioButton->setChecked(true);
             QString sSN_str = QString::fromStdString((char*)pcSepctorInf[0].Sn);
             QString iChannelNum_str = QString::fromStdString(std::to_string(pcSepctorInf[0].iChannelNum));
             numberEdit->setText(sSN_str);
             channelNumberEdit->setText(iChannelNum_str);
             //groupBox1.Enabled = true; groupBox2.Enabled = true; groupBox4.Enabled = true;
             //panel1.Enabled = true;
         }
}

//设置通道号
void Widget::on_setChannelNumberButton_clicked()
{
    char*  ch=numberEdit->text().toLatin1().data();

    if (JF_USB_SetChannelNum(ch, channelNumberEdit->text().toInt()) == 0)
    {
          QMessageBox::information(NULL,"提示","通道设定失败");
          return;
    }
    on_scanningButton_pressed();
    QMessageBox::information(NULL,"提示","通道设定成功");
}

//软触发一次
void Widget::on_pushButton_3_clicked()
{
    if (JF_USB_SoftTriggerStartSampleMux(qstr2int(channelNumberEdit->text())) == 0)
    {
          QMessageBox::information(NULL,"提示","开启失败！");
          return;
     }
     QMessageBox::information(NULL,"提示","已触发，请采样取走数据！");
}

//设置软触发
void Widget::on_radioButton_clicked()
{
    if (normalradioButton->isChecked())
    {
         if (JF_USB_ExternalTriggerSetModeMux(qstr2int(channelNumberEdit->text()), 0) == 0)
         {
              QMessageBox::information(NULL,"提示","设置失败");
              return;
          }
           softTouchButton->setEnabled(true);
           getsignButton->setEnabled(false);
          QMessageBox::information(NULL,"提示","设置成功");
      }
}

//设置积分时间
void Widget::on_pushButton_4_clicked()
{
    if (JF_USB_SetIntegrationTimeFMux(qstr2int(channelNumberEdit->text()), qstr2float(timeEdit->text())) == 0)
    {
          QMessageBox::information(NULL,"提示","设定失败！");
          return;
     }

     JF_USB_SetSampleAveMux(qstr2int(channelNumberEdit->text()), qstr2int(timecountEdit->text()));
     QMessageBox::information(NULL,"提示","设定成功！");
}

//获取光谱数据（能量值）
float fwaveData[420];


void Widget::draw(){
    QLineSeries *series = new QLineSeries();
    int len = 400;
    for(int i = 1; i <= len; i++){
        series->append(i,fwaveData[i-1]);
    }
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Simple line chart example");
    dataSeriesView->setChart(chart);
}

void Widget::on_pushButton_5_clicked()
{
    if (JF_USB_GetWaveDataMux(qstr2int(channelNumberEdit->text()), 380, 780, 1, fwaveData) == 0)
    {
          QMessageBox::information(NULL,"提示","采集1失败！");
          return;
    }

    dataList->clear();
    for (int i = 0; i <= 400; i++)
    {
//          listBox1.Items.Add((380 + i) + "\t" + fwaveData[i].ToString("0"));
        dataList->addItem(str2Qstr(std::to_string(fwaveData[i])));
     }
//     pictureBox1.Refresh();
    draw();
}



//获取外部触发信号
void Widget::on_pushButton_6_clicked()
{
    int iState = 0;
    JF_USB_ExternalTriggerGetDataReadyStateMux(qstr2int(channelNumberEdit->text()), &iState);
    if (iState == 0)
    {
          SignLine->setText("未触发");
          //label1.BackColor = Color.Red;
    }
    else
    {
          SignLine->setText("收到触发信号");
          //label1.BackColor = Color.Transparent;
    }
}


//设置外部触发模式
void Widget::on_radioButton_2_clicked()
{
    if (enradioButton->isChecked())
    {
         if (JF_USB_ExternalTriggerSetModeMux(qstr2int(channelNumberEdit->text()), 1) == 0)
         {
                QMessageBox::information(NULL,"提示","设置失败！");
                return;
         }
         float fwaveData[420];
         JF_USB_GetWaveDataMux(qstr2int(channelNumberEdit->text()), 380, 780, 1, fwaveData);
         softTouchButton->setEnabled(false);
         getsignButton->setEnabled(true);
         QMessageBox::information(NULL,"提示","已切换到外触发模式，请在触发信号发送后务必采样取走数据！");
     }
}


