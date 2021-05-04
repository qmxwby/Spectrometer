#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QListWidget>
#include <QtWidgets/QWidget>
#include <QLabel>
#include <QGraphicsDropShadowEffect>
#include <QStackedWidget>
#include <QtCharts>
#include "ChromaticsStruct.h"
#include "FLA5000DLLStruct.h"
#include "Inteface.h"
#include "ChromaticsInteface.h"


QT_BEGIN_NAMESPACE

namespace Ui {class Widget;}
using namespace QtCharts;
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void draw();
private slots:
    void init();

    void on_scanningButton_pressed();

    void on_setChannelNumberButton_clicked();

    void on_pushButton_3_clicked();

    void on_radioButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_radioButton_2_clicked();


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

};
#endif // WIDGET_H
