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
            float fStartWave = pcSepctorInf[j].fWaveRange[0];//起始波长
            float fEndWave = pcSepctorInf[j].fWaveRange[1];//结束波长
            std::string sDeviceName = pcSepctorInf[j].DeviceName;//设备名
            QString isSN = QString::fromStdString(sSN+"   "+std::to_string(iChannelNum));
            QString iChannelNum_str = QString::fromStdString(std::to_string(iChannelNum));
            spectList->insertItem(0,isSN);


            comboBox->insertItem(0,iChannelNum_str);
        }
        if (comboBox->count() > 0)
        {
             comboBox->setCurrentIndex(0);
             //radioButton1.Checked = true;
             QString sSN_str = QString::fromStdString((char*)pcSepctorInf[0].Sn);
             QString iChannelNum_str = QString::fromStdString(std::to_string(pcSepctorInf[0].iChannelNum));
             numberEdit->setText(sSN_str);
             channelNumberEdit->setText(iChannelNum_str);
             //groupBox1.Enabled = true; groupBox2.Enabled = true; groupBox4.Enabled = true;
             //panel1.Enabled = true;
         }
}

void Widget::on_setChannelNumberButton_clicked()
{
    char*  ch=numberEdit->text().toLatin1().data();;

    if (JF_USB_SetChannelNum(ch, channelNumberEdit->text().toInt()) == 0)
    {
          QMessageBox::information(NULL,"提示","通道设定失败");
          return;
    }
    on_scanningButton_pressed();
    QMessageBox::information(NULL,"提示","通道设定成功");
}
