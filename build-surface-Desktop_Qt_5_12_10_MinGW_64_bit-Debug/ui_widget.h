/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *setting;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QLineEdit *lineEdit_4;
    QListWidget *listWidget;
    QGroupBox *groupBox_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_17;
    QLineEdit *lineEdit;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *scanningButton;
    QListWidget *spectList;
    QPushButton *setChannelNumberButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *numberEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QLineEdit *channelNumbeEdit;
    QtCharts::QChartView *graphicsView;
    QWidget *params;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QTextBrowser *textBrowser_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QTextBrowser *textBrowser_4;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_9;
    QTextBrowser *textBrowser_9;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_11;
    QTextBrowser *textBrowser_11;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_25;
    QLabel *label_13;
    QTextBrowser *textBrowser_13;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_5;
    QTextBrowser *textBrowser_5;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_7;
    QTextBrowser *textBrowser_7;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_8;
    QTextBrowser *textBrowser_8;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_10;
    QTextBrowser *textBrowser_10;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_23;
    QLabel *label_12;
    QTextBrowser *textBrowser_12;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_14;
    QTextBrowser *textBrowser_14;
    QWidget *tab;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1428, 867);
        Widget->setMinimumSize(QSize(500, 500));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{width:200px; height:30px}"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        setting = new QWidget();
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setEnabled(true);
        groupBox = new QGroupBox(setting);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 20, 451, 101));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"}"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 50, 251, 31));
        comboBox->setEditable(false);
        groupBox_2 = new QGroupBox(setting);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(290, 140, 451, 101));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"}"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 411, 61));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_13->addWidget(radioButton_2);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_13->addWidget(radioButton);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(250, 16777215));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 40px;\n"
"	width: 80px;\n"
"}"));

        horizontalLayout_13->addWidget(pushButton_3);

        groupBox_3 = new QGroupBox(setting);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(290, 260, 451, 511));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"}"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 30, 311, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"}"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 220, 311, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"}"));
        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(60, 300, 311, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size: 20px;\n"
"}"));
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 390, 311, 91));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Agency FB\";"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 110, 311, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_14->addWidget(label_6);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	max-height: 50px;\n"
"	max-width: 200px;\n"
"}"));

        horizontalLayout_14->addWidget(lineEdit_3);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_15->addWidget(label_16);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	max-height: 50px;\n"
"	max-width: 200px;\n"
"}"));

        horizontalLayout_15->addWidget(lineEdit_4);


        verticalLayout_5->addLayout(horizontalLayout_15);

        listWidget = new QListWidget(setting);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(760, 30, 251, 381));
        groupBox_4 = new QGroupBox(setting);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(760, 440, 611, 331));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"}"));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 50, 121, 41));
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 50, 121, 41));
        pushButton_7 = new QPushButton(groupBox_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(210, 100, 121, 41));
        pushButton_8 = new QPushButton(groupBox_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(350, 100, 121, 41));
        pushButton_9 = new QPushButton(groupBox_4);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(50, 160, 111, 41));
        pushButton_10 = new QPushButton(groupBox_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(190, 160, 111, 41));
        pushButton_11 = new QPushButton(groupBox_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(330, 160, 111, 41));
        pushButton_12 = new QPushButton(groupBox_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(460, 160, 111, 41));
        pushButton_13 = new QPushButton(groupBox_4);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(50, 220, 271, 81));
        layoutWidget2 = new QWidget(groupBox_4);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 50, 141, 77));
        verticalLayout_6 = new QVBoxLayout(layoutWidget2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";"));

        verticalLayout_6->addWidget(label_17);

        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 35));

        verticalLayout_6->addWidget(lineEdit);

        layoutWidget3 = new QWidget(setting);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 26, 271, 738));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scanningButton = new QPushButton(layoutWidget3);
        scanningButton->setObjectName(QString::fromUtf8("scanningButton"));
        scanningButton->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferDefault);
        scanningButton->setFont(font);
        scanningButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 80px;\n"
"}"));
        scanningButton->setIconSize(QSize(20, 20));
        scanningButton->setAutoDefault(true);
        scanningButton->setFlat(false);

        verticalLayout_4->addWidget(scanningButton);

        spectList = new QListWidget(layoutWidget3);
        spectList->setObjectName(QString::fromUtf8("spectList"));
        spectList->setMinimumSize(QSize(0, 400));
        spectList->setStyleSheet(QString::fromUtf8(""));
        spectList->setResizeMode(QListView::Adjust);

        verticalLayout_4->addWidget(spectList);

        setChannelNumberButton = new QPushButton(layoutWidget3);
        setChannelNumberButton->setObjectName(QString::fromUtf8("setChannelNumberButton"));
        setChannelNumberButton->setMinimumSize(QSize(0, 0));
        setChannelNumberButton->setFont(font);
        setChannelNumberButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 80px;\n"
"}"));
        setChannelNumberButton->setIconSize(QSize(20, 20));
        setChannelNumberButton->setAutoDefault(true);
        setChannelNumberButton->setFlat(false);

        verticalLayout_4->addWidget(setChannelNumberButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"	\n"
"}"));
        label_2->setWordWrap(false);
        label_2->setMargin(20);

        horizontalLayout_2->addWidget(label_2);

        numberEdit = new QLineEdit(layoutWidget3);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	max-height: 30px;\n"
"	max-width: 150px;\n"
"}"));
        numberEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(numberEdit);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_15 = new QLabel(layoutWidget3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 20px;\n"
"	font-weight: bold;\n"
"}"));
        label_15->setWordWrap(false);
        label_15->setMargin(20);

        horizontalLayout_6->addWidget(label_15);

        channelNumbeEdit = new QLineEdit(layoutWidget3);
        channelNumbeEdit->setObjectName(QString::fromUtf8("channelNumbeEdit"));
        channelNumbeEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	max-height: 30px;\n"
"	max-width: 150px;\n"
"}"));
        channelNumbeEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(channelNumbeEdit);


        verticalLayout_4->addLayout(horizontalLayout_6);

        graphicsView = new QtCharts::QChartView(setting);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(1025, 30, 341, 381));
        tabWidget->addTab(setting, QString());
        params = new QWidget();
        params->setObjectName(QString::fromUtf8("params"));
        layoutWidget4 = new QWidget(params);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(-40, 30, 891, 561));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout->addWidget(label);

        textBrowser = new QTextBrowser(layoutWidget4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMaximumSize(QSize(200, 30));
        textBrowser->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout->addWidget(textBrowser);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_3->addWidget(label_3);

        textBrowser_3 = new QTextBrowser(layoutWidget4);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setMaximumSize(QSize(200, 30));
        textBrowser_3->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_3->addWidget(textBrowser_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_4->addWidget(label_4);

        textBrowser_4 = new QTextBrowser(layoutWidget4);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setMaximumSize(QSize(200, 30));
        textBrowser_4->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_4->addWidget(textBrowser_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_9->addWidget(label_9);

        textBrowser_9 = new QTextBrowser(layoutWidget4);
        textBrowser_9->setObjectName(QString::fromUtf8("textBrowser_9"));
        textBrowser_9->setMaximumSize(QSize(200, 30));
        textBrowser_9->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_9->addWidget(textBrowser_9);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);

        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_11->addWidget(label_11);

        textBrowser_11 = new QTextBrowser(layoutWidget4);
        textBrowser_11->setObjectName(QString::fromUtf8("textBrowser_11"));
        textBrowser_11->setMaximumSize(QSize(200, 30));
        textBrowser_11->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_11->addWidget(textBrowser_11);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_25);

        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_20->addWidget(label_13);

        textBrowser_13 = new QTextBrowser(layoutWidget4);
        textBrowser_13->setObjectName(QString::fromUtf8("textBrowser_13"));
        textBrowser_13->setMaximumSize(QSize(200, 30));
        textBrowser_13->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_20->addWidget(textBrowser_13);


        verticalLayout_2->addLayout(horizontalLayout_20);


        horizontalLayout_12->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_5->addWidget(label_5);

        textBrowser_5 = new QTextBrowser(layoutWidget4);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setMaximumSize(QSize(200, 30));
        textBrowser_5->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_5->addWidget(textBrowser_5);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_7->addWidget(label_7);

        textBrowser_7 = new QTextBrowser(layoutWidget4);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setMaximumSize(QSize(200, 30));
        textBrowser_7->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_7->addWidget(textBrowser_7);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_8->addWidget(label_8);

        textBrowser_8 = new QTextBrowser(layoutWidget4);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));
        textBrowser_8->setMaximumSize(QSize(200, 30));
        textBrowser_8->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_8->addWidget(textBrowser_8);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_19);

        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_10->addWidget(label_10);

        textBrowser_10 = new QTextBrowser(layoutWidget4);
        textBrowser_10->setObjectName(QString::fromUtf8("textBrowser_10"));
        textBrowser_10->setMaximumSize(QSize(200, 30));
        textBrowser_10->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_10->addWidget(textBrowser_10);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_23);

        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_18->addWidget(label_12);

        textBrowser_12 = new QTextBrowser(layoutWidget4);
        textBrowser_12->setObjectName(QString::fromUtf8("textBrowser_12"));
        textBrowser_12->setMaximumSize(QSize(200, 30));
        textBrowser_12->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_18->addWidget(textBrowser_12);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_27);

        label_14 = new QLabel(layoutWidget4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMaximumSize(QSize(16777215, 16777196));

        horizontalLayout_21->addWidget(label_14);

        textBrowser_14 = new QTextBrowser(layoutWidget4);
        textBrowser_14->setObjectName(QString::fromUtf8("textBrowser_14"));
        textBrowser_14->setMaximumSize(QSize(200, 30));
        textBrowser_14->setAutoFormatting(QTextEdit::AutoNone);

        horizontalLayout_21->addWidget(textBrowser_14);


        verticalLayout_3->addLayout(horizontalLayout_21);


        horizontalLayout_12->addLayout(verticalLayout_3);

        tabWidget->addTab(params, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(330, 80, 120, 87));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 85));
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);
        comboBox->setCurrentIndex(-1);
        scanningButton->setDefault(false);
        setChannelNumberButton->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\351\200\211\346\213\251\351\200\232\351\201\223", nullptr));
        comboBox->setCurrentText(QString());
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\265\213\350\257\225\346\250\241\345\274\217(\345\244\226\350\247\246\345\217\221\346\250\241\345\274\217\351\234\200\350\246\201\347\241\254\344\273\266\346\224\257\346\214\201)", nullptr));
        radioButton_2->setText(QApplication::translate("Widget", "\345\244\226\350\247\246\345\217\221\346\250\241\345\274\217", nullptr));
        radioButton->setText(QApplication::translate("Widget", "\345\270\270\350\247\204\346\250\241\345\274\217 ", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\350\275\257\350\247\246\345\217\221\344\270\200\346\254\241", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "\351\207\207\346\240\267", nullptr));
        pushButton_4->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\347\247\257\345\210\206\346\227\266\351\227\264\345\222\214\351\207\207\346\240\267\346\254\241\346\225\260", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "\351\207\207\351\233\206\346\263\242\351\225\277\346\225\260\346\215\256", nullptr));
        pushButton_6->setText(QApplication::translate("Widget", "\350\216\267\345\217\226\345\244\226\350\247\246\345\217\221\344\277\241\345\217\267", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        label_6->setText(QApplication::translate("Widget", "\347\247\257\345\210\206\346\227\266\351\227\264", nullptr));
        label_16->setText(QApplication::translate("Widget", "\351\207\207\346\240\267\346\254\241\346\225\260", nullptr));
        groupBox_4->setTitle(QApplication::translate("Widget", "\345\244\232\345\217\260\350\277\236\346\265\213", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\350\277\236\347\273\255\351\207\207\346\240\2671", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\350\277\236\347\273\255\351\207\207\346\240\2672", nullptr));
        pushButton_7->setText(QApplication::translate("Widget", "\350\277\236\347\273\255\351\207\207\346\240\2673", nullptr));
        pushButton_8->setText(QApplication::translate("Widget", "\350\277\236\347\273\255\351\207\207\346\240\2674", nullptr));
        pushButton_9->setText(QApplication::translate("Widget", "\351\224\200\346\257\201\347\256\241\351\201\2231", nullptr));
        pushButton_10->setText(QApplication::translate("Widget", "\351\224\200\346\257\201\347\256\241\351\201\2232", nullptr));
        pushButton_11->setText(QApplication::translate("Widget", "\351\224\200\346\257\201\347\256\241\351\201\2233", nullptr));
        pushButton_12->setText(QApplication::translate("Widget", "\351\224\200\346\257\201\347\256\241\351\201\2234", nullptr));
        pushButton_13->setText(QApplication::translate("Widget", "\351\207\207\351\233\206\344\270\244\345\217\260\346\263\242\351\225\277\346\225\260\346\215\256", nullptr));
        label_17->setText(QApplication::translate("Widget", "\350\266\205\346\227\266\346\227\266\351\227\264", nullptr));
        scanningButton->setText(QApplication::translate("Widget", "\346\211\253\346\217\217\345\205\211\350\260\261\344\273\252\345\210\227\350\241\250", nullptr));
        setChannelNumberButton->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\351\200\232\351\201\223\345\217\267", nullptr));
        label_2->setText(QApplication::translate("Widget", "\347\274\226\345\217\267", nullptr));
        label_15->setText(QApplication::translate("Widget", "\351\200\232\351\201\223\345\217\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(setting), QApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("Widget", "\346\265\212\345\272\246\357\274\232", nullptr));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Widget", "COD\357\274\232", nullptr));
        textBrowser_3->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Widget", "TOC\357\274\232", nullptr));
        textBrowser_4->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_9->setText(QApplication::translate("Widget", "TP\357\274\232", nullptr));
        textBrowser_9->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_11->setText(QApplication::translate("Widget", "NH3-N\357\274\232", nullptr));
        textBrowser_11->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_13->setText(QApplication::translate("Widget", "TN\357\274\232", nullptr));
        textBrowser_13->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Widget", "\347\241\253\351\205\270\347\233\220\357\274\232", nullptr));
        textBrowser_5->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_7->setText(QApplication::translate("Widget", "\346\260\257\345\214\226\347\211\251\357\274\232", nullptr));
        textBrowser_7->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_8->setText(QApplication::translate("Widget", "\346\260\237\345\214\226\347\211\251\357\274\232", nullptr));
        textBrowser_8->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_10->setText(QApplication::translate("Widget", "\346\260\257\344\273\277\357\274\232", nullptr));
        textBrowser_10->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_12->setText(QApplication::translate("Widget", "\345\233\233\346\260\257\345\214\226\347\242\263\357\274\232", nullptr));
        textBrowser_12->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        label_14->setText(QApplication::translate("Widget", "666\357\274\232", nullptr));
        textBrowser_14->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">12</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(params), QApplication::translate("Widget", "\345\217\202\346\225\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\345\233\276\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
