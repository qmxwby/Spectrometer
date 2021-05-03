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

private slots:
    void init();
    void on_pushButton_clicked();

    void on_pushButton_pressed();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::Widget *ui;
    QListWidget *spectList;
    QComboBox *comboBox;
    QPushButton *scanningButton;
    QPushButton *setChannelNumberButton;
    QLineEdit *numberEdit;
    QLineEdit *channelNumberEdit;

};
#endif // WIDGET_H