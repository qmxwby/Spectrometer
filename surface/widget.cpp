#include "widget.h"
#include "ui_widget.h"
#include "surfacegraph.h"
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
#include <Q3DSurface>
#include <QtDataVisualization>
#include <q3dsurface.h>
#include <QTimer>
#include<SqliteOperator.h>

// 构造函数
Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    init();
    timerInit();
    dbinit();
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
    intervalTimer = ui->lineEdit;
    intervalTimer->setText("3000");
    countTimer = ui->lineEdit_6;
    countTimer->setText("-");
    countTimer->setEnabled(false);
    remainCountTimer = ui->lineEdit_7;
    remainCountTimer->setEnabled(false);
    remainCountTimer->setStyleSheet(QLatin1String("color: rgb(255, 0, 0)"));
    autoCheckBox = ui->checkBox;
    autoCheckBox->setChecked(true);
    remainCountTimer->setText("0");
    draw3Dpaint();
}
int TimerNum;
QTimer *timer;
void timeEvent01();

void Widget::timerInit(){
    TimerNum = 0;
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeEvent01()));
}

SqliteOperator sqlTest;
void Widget::dbinit(){
    //创建并打开SQLite数据库
        sqlTest.openDb();
    //如果数据表不存在创建数据表
        QString str1 = QString("specdata");
        if(!sqlTest.isTableExist(str1)){
            sqlTest.createTable();
        }

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
// draw data visualization paint
void Widget::draw3Dpaint(){
    //! [0]
    Q3DSurface *graph = new Q3DSurface();
    QWidget *container = QWidget::createWindowContainer(graph);
    //! [0]

    if (!graph->hasContext()) {
        QMessageBox msgBox;
        msgBox.setText("Couldn't initialize the OpenGL context.");
        msgBox.exec();
        return;
    }

    QSize screenSize = graph->screen()->size();
    container->setMinimumSize(QSize(screenSize.width() / 2, screenSize.height() / 1.6));
    container->setMaximumSize(screenSize);
    container->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    container->setFocusPolicy(Qt::StrongFocus);

    //! [1]
    QWidget *widget = new QWidget;
    QHBoxLayout *hLayout = new QHBoxLayout(widget);
    QVBoxLayout *vLayout = new QVBoxLayout();
    hLayout->addWidget(container, 1);
    hLayout->addLayout(vLayout);
    vLayout->setAlignment(Qt::AlignTop);
    //! [1]

    widget->setWindowTitle(QStringLiteral("Surface example"));

    QGroupBox *modelGroupBox = new QGroupBox(QStringLiteral("Model"));

    QRadioButton *sqrtSinModelRB = new QRadioButton(widget);
    sqrtSinModelRB->setText(QStringLiteral("Sqrt && Sin"));
    sqrtSinModelRB->setChecked(false);

    QRadioButton *heightMapModelRB = new QRadioButton(widget);
    heightMapModelRB->setText(QStringLiteral("Height Map"));
    heightMapModelRB->setChecked(false);

    QVBoxLayout *modelVBox = new QVBoxLayout;
    modelVBox->addWidget(sqrtSinModelRB);
    modelVBox->addWidget(heightMapModelRB);
    modelGroupBox->setLayout(modelVBox);

    QGroupBox *selectionGroupBox = new QGroupBox(QStringLiteral("Selection Mode"));

    QRadioButton *modeNoneRB = new QRadioButton(widget);
    modeNoneRB->setText(QStringLiteral("No selection"));
    modeNoneRB->setChecked(false);

    QRadioButton *modeItemRB = new QRadioButton(widget);
    modeItemRB->setText(QStringLiteral("Item"));
    modeItemRB->setChecked(false);

    QRadioButton *modeSliceRowRB = new QRadioButton(widget);
    modeSliceRowRB->setText(QStringLiteral("Row Slice"));
    modeSliceRowRB->setChecked(false);

    QRadioButton *modeSliceColumnRB = new QRadioButton(widget);
    modeSliceColumnRB->setText(QStringLiteral("Column Slice"));
    modeSliceColumnRB->setChecked(false);

    QVBoxLayout *selectionVBox = new QVBoxLayout;
    selectionVBox->addWidget(modeNoneRB);
    selectionVBox->addWidget(modeItemRB);
    selectionVBox->addWidget(modeSliceRowRB);
    selectionVBox->addWidget(modeSliceColumnRB);
    selectionGroupBox->setLayout(selectionVBox);

    QSlider *axisMinSliderX = new QSlider(Qt::Horizontal, widget);
    axisMinSliderX->setMinimum(0);
    axisMinSliderX->setTickInterval(1);
    axisMinSliderX->setEnabled(true);
    QSlider *axisMaxSliderX = new QSlider(Qt::Horizontal, widget);
    axisMaxSliderX->setMinimum(1);
    axisMaxSliderX->setTickInterval(1);
    axisMaxSliderX->setEnabled(true);
    QSlider *axisMinSliderZ = new QSlider(Qt::Horizontal, widget);
    axisMinSliderZ->setMinimum(0);
    axisMinSliderZ->setTickInterval(1);
    axisMinSliderZ->setEnabled(true);
    QSlider *axisMaxSliderZ = new QSlider(Qt::Horizontal, widget);
    axisMaxSliderZ->setMinimum(1);
    axisMaxSliderZ->setTickInterval(1);
    axisMaxSliderZ->setEnabled(true);

    QComboBox *themeList = new QComboBox(widget);
    themeList->addItem(QStringLiteral("Qt"));
    themeList->addItem(QStringLiteral("Primary Colors"));
    themeList->addItem(QStringLiteral("Digia"));
    themeList->addItem(QStringLiteral("Stone Moss"));
    themeList->addItem(QStringLiteral("Army Blue"));
    themeList->addItem(QStringLiteral("Retro"));
    themeList->addItem(QStringLiteral("Ebony"));
    themeList->addItem(QStringLiteral("Isabelle"));

    QGroupBox *colorGroupBox = new QGroupBox(QStringLiteral("Custom gradient"));

    QLinearGradient grBtoY(0, 0, 1, 100);
    grBtoY.setColorAt(1.0, Qt::black);
    grBtoY.setColorAt(0.67, Qt::blue);
    grBtoY.setColorAt(0.33, Qt::red);
    grBtoY.setColorAt(0.0, Qt::yellow);
    QPixmap pm(24, 100);
    QPainter pmp(&pm);
    pmp.setBrush(QBrush(grBtoY));
    pmp.setPen(Qt::NoPen);
    pmp.drawRect(0, 0, 24, 100);
    QPushButton *gradientBtoYPB = new QPushButton(widget);
    gradientBtoYPB->setIcon(QIcon(pm));
    gradientBtoYPB->setIconSize(QSize(24, 100));

    QLinearGradient grGtoR(0, 0, 1, 100);
    grGtoR.setColorAt(1.0, Qt::darkGreen);
    grGtoR.setColorAt(0.5, Qt::yellow);
    grGtoR.setColorAt(0.2, Qt::red);
    grGtoR.setColorAt(0.0, Qt::darkRed);
    pmp.setBrush(QBrush(grGtoR));
    pmp.drawRect(0, 0, 24, 100);
    QPushButton *gradientGtoRPB = new QPushButton(widget);
    gradientGtoRPB->setIcon(QIcon(pm));
    gradientGtoRPB->setIconSize(QSize(24, 100));

    QHBoxLayout *colorHBox = new QHBoxLayout;
    colorHBox->addWidget(gradientBtoYPB);
    colorHBox->addWidget(gradientGtoRPB);
    colorGroupBox->setLayout(colorHBox);

    vLayout->addWidget(modelGroupBox);
    vLayout->addWidget(selectionGroupBox);
    vLayout->addWidget(new QLabel(QStringLiteral("Column range")));
    vLayout->addWidget(axisMinSliderX);
    vLayout->addWidget(axisMaxSliderX);
    vLayout->addWidget(new QLabel(QStringLiteral("Row range")));
    vLayout->addWidget(axisMinSliderZ);
    vLayout->addWidget(axisMaxSliderZ);
    vLayout->addWidget(new QLabel(QStringLiteral("Theme")));
    vLayout->addWidget(themeList);
    vLayout->addWidget(colorGroupBox);

    QTimer *fTimer=new QTimer(widget);

    fTimer->stop();
    fTimer->setInterval (1000) ;//设置定时周期，单位：毫秒


    ui->myArea->setWidget(widget);


    SurfaceGraph *modifier = new SurfaceGraph(graph);

    QObject::connect(heightMapModelRB, &QRadioButton::toggled,
                     modifier, &SurfaceGraph::enableHeightMapModel);
    QObject::connect(sqrtSinModelRB, &QRadioButton::toggled,
                     modifier, &SurfaceGraph::enableSqrtSinModel);
    QObject::connect(modeNoneRB, &QRadioButton::toggled,
                     modifier, &SurfaceGraph::toggleModeNone);
    QObject::connect(modeItemRB,  &QRadioButton::toggled,
                     modifier, &SurfaceGraph::toggleModeItem);
    QObject::connect(modeSliceRowRB,  &QRadioButton::toggled,
                     modifier, &SurfaceGraph::toggleModeSliceRow);
    QObject::connect(modeSliceColumnRB,  &QRadioButton::toggled,
                     modifier, &SurfaceGraph::toggleModeSliceColumn);
    QObject::connect(axisMinSliderX, &QSlider::valueChanged,
                     modifier, &SurfaceGraph::adjustXMin);
    QObject::connect(axisMaxSliderX, &QSlider::valueChanged,
                     modifier, &SurfaceGraph::adjustXMax);
    QObject::connect(axisMinSliderZ, &QSlider::valueChanged,
                     modifier, &SurfaceGraph::adjustZMin);
    QObject::connect(axisMaxSliderZ, &QSlider::valueChanged,
                     modifier, &SurfaceGraph::adjustZMax);
    QObject::connect(themeList, SIGNAL(currentIndexChanged(int)),
                     modifier, SLOT(changeTheme(int)));
    QObject::connect(gradientBtoYPB, &QPushButton::pressed,
                     modifier, &SurfaceGraph::setBlackToYellowGradient);
    QObject::connect(gradientGtoRPB, &QPushButton::pressed,
                     modifier, &SurfaceGraph::setGreenToRedGradient);


    QObject::connect(fTimer,SIGNAL(timeout()),modifier, SLOT(RefreshData()));
    fTimer->start(2000);


    modifier->setAxisMinSliderX(axisMinSliderX);
    modifier->setAxisMaxSliderX(axisMaxSliderX);
    modifier->setAxisMinSliderZ(axisMinSliderZ);
    modifier->setAxisMaxSliderZ(axisMaxSliderZ);

    sqrtSinModelRB->setChecked(true);
    modeItemRB->setChecked(true);
    themeList->setCurrentIndex(2);
    return;
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

//光谱数据（能量值）
float fwaveData[650];

//绘图
void Widget::draw(){
    QLineSeries *series = new QLineSeries();
    int len = 650;
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

//获取光谱数据（能量值）
void Widget::on_pushButton_5_clicked()
{
    if (JF_USB_GetWaveDataMux(qstr2int(channelNumberEdit->text()), 200, 850, 1, fwaveData) == 0)
    {
          QMessageBox::information(NULL,"提示","采集1失败！");
          return;
    }

    SpecData spdata;
    spdata.address="湖北省宜昌市西陵区";
    spdata.date= QDateTime::currentDateTime();
    dataList->clear();
    for (int i = 0; i <= 650; i++)
    {
        dataList->addItem(int2qstr(200 + i)+"\t" +  QString::number(fwaveData[i], 'f', 2));
        spdata.wareData[i]=fwaveData[i];
     }
    sqlTest.singleInsertData(spdata);
    qDebug() << sqlTest.queryTablelimit(1).back().address<<" "<<sqlTest.queryTablelimit(1).back().id<<endl;
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
         float fwaveData[650];
         JF_USB_GetWaveDataMux(qstr2int(channelNumberEdit->text()), 380, 780, 1, fwaveData);
         softTouchButton->setEnabled(false);
         getsignButton->setEnabled(true);
         QMessageBox::information(NULL,"提示","已切换到外触发模式，请在触发信号发送后务必采样取走数据！");
     }
}


void Widget::timeEvent01(){
    on_pushButton_5_clicked();

    if(TimerNum>0)
        TimerNum--;
    if(TimerNum == 0){
        timer->stop();
    }


    if(TimerNum<0){
        remainCountTimer->setText("-");
    }
    else remainCountTimer->setText(int2qstr(TimerNum));

}

void Widget::timeout_Done(){



}

void Widget::on_pushButton_clicked()
{

    if(countTimer->text()=="-"){
        TimerNum = -1;
        remainCountTimer->setText("-");
    }else{
        TimerNum = qstr2int(countTimer->text());
    }
    remainCountTimer->setText(int2qstr(TimerNum));
    timer->start(qstr2int(intervalTimer->text()));

}

void Widget::on_pushButton_2_clicked()
{
    TimerNum=0;
    remainCountTimer->setText(int2qstr(TimerNum));
}



void Widget::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked){
        countTimer->setText("-");
        countTimer->setEnabled(false);
        remainCountTimer->setText("-");
    }else{
        countTimer->setText("0");
        countTimer->setEnabled(true);
        remainCountTimer->setText("0");
    }
}
