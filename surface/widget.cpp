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
    QChart * chart = new QChart();
    QLineSeries * series = new QLineSeries();
    for(int32_t i = 0; i < 100; i++){
        series->append(i, sin(0.6f*i));
    }
    chart->addSeries(series);
    chart->createDefaultAxes();
    spectList = ui->spectList;
    comboBox = ui->comboBox;
    scanningButton = ui->scanningButton;
    setChannelNumberButton = ui->setChannelNumberButton;
    numberEdit = ui->numberEdit;
    channelNumberEdit = ui->channelNumbeEdit;
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

void Widget::on_pushButton_pressed()
{

        SPECTRO_INF* pcSepctorInf = new SPECTRO_INF[64];

        SPECTRO_INF* pt = new SPECTRO_INF[64];

        int iSpectorCount = 0;
        if (JF_USB_GetSpectorMeterList( iSpectorCount, pt) == 0)
        {
            printf("获取失败!\n");
            return;
         }


         spectList->clear();
         comboBox->clear();
         for (int j = 0; j < iSpectorCount; j++)
         {

             pcSepctorInf[j] = (SPECTRO_INF)*(pt+sizeof(SPECTRO_INF)*j);
             //pcSepctorInf[j] = (SPECTRO_INF)Marshal.PtrToStructure((IntPtr)((UInt32)pt + j * Marshal.SizeOf(typeof(SPECTRO_INF))), typeof(SPECTRO_INF));
             std::string sSN = (char *)pcSepctorInf[j].Sn; //光谱仪编号
             int iChannelNum = pcSepctorInf[j].iChannelNum; //通道号
             std::string sMode = (char *)pcSepctorInf[j].Mode; //型号
             float fStartWave = pcSepctorInf[j].fWaveRange[0]; //起始波长
             float fEndWave = pcSepctorInf[j].fWaveRange[1]; //结束波长
             std::string sDeviceName = pcSepctorInf[j].DeviceName; //设备名
             std::string num = std::to_string(iChannelNum);
             QString str = QString::fromStdString(num + '\t' + sSN);
             spectList->insertItem(0,str);
             //comboBox1.Items.Add(iChannelNum);
         }
    //     if (comboBox1.Items.Count > 0)
    //     {
    //          comboBox1.SelectedIndex = 0;
    //          radioButton1.Checked = true;
    //          textBox3.Text = pcSepctorInf[0].Sn;

    //          groupBox1.Enabled = true; groupBox2.Enabled = true; groupBox4.Enabled = true;
    //          panel1.Enabled = true;
    //      }

}
// 光谱仪列表中每一个item的click事件
void Widget::on_listWidget_itemClicked(QListWidgetItem *item)
{
    printf("%s\n", item->text().toStdString().data());
}
