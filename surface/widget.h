#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QListWidget>
#include <QtWidgets/QWidget>
#include <QLabel>
#include <QGraphicsDropShadowEffect>
#include <QStackedWidget>
#include <QtCharts>
#include <QtDataVisualization>
#include "ChromaticsStruct.h"
#include "FLA5000DLLStruct.h"
#include "Inteface.h"
#include "ChromaticsInteface.h"
#include "SqliteOperator.h"


QT_BEGIN_NAMESPACE

namespace Ui {class Widget;}
using namespace QtCharts;
using namespace QtDataVisualization;
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void draw();
    void timeout_Done();


private slots:
    void init();
    void timeEvent01();
    void timerInit();
    void dbinit();

    void on_scanningButton_pressed();

    void on_setChannelNumberButton_clicked();

    void on_pushButton_3_clicked();

    void on_radioButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_radioButton_2_clicked();


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void draw3Dpaint();



    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Widget *ui;
    QListWidget *spectList;
    QComboBox *comboBox;
    QPushButton *scanningButton;
    QPushButton *setChannelNumberButton;
    QLineEdit *numberEdit;
    QLineEdit *channelNumberEdit;
    QRadioButton *normalradioButton;
    QRadioButton *enradioButton;
    QPushButton *softTouchButton;
    QLineEdit *timeEdit;
    QLineEdit *timecountEdit;
    QPushButton *getsignButton;
    QListWidget *dataList;
    QLineEdit *SignLine;
    QtCharts::QChartView *dataSeriesView;
    QLineEdit *intervalTimer;
    QLineEdit *countTimer;
    QLineEdit *remainCountTimer;
    QCheckBox *autoCheckBox;

};
#endif // WIDGET_H
