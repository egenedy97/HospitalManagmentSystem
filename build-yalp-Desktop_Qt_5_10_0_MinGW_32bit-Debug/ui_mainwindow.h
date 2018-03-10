/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *IT;
    QLabel *label_8;
    QComboBox *itlist;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *OK_it;
    QPushButton *Cancelit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_3;
    QLabel *label1;
    QLineEdit *lineEdit1;
    QLabel *label2;
    QLineEdit *lineEdit2;
    QLabel *label3;
    QLineEdit *lineEdit3;
    QLabel *label4;
    QLineEdit *lineEdit4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *showdocbutton;
    QPushButton *showpatbutton;
    QPushButton *showrombutton;
    QGroupBox *Doctor;
    QLabel *label_9;
    QComboBox *Doclist;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *OK_doc;
    QPushButton *Cancledoc;
    QWidget *layoutWidget_7;
    QFormLayout *formLayout_5;
    QLabel *doclabl1;
    QLineEdit *docline1;
    QLabel *doclabl2;
    QLineEdit *docline2;
    QGroupBox *Logingrpbox;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLineEdit *Usernameline;
    QLabel *label_7;
    QLineEdit *passwordline;
    QPushButton *EnterButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *welcomelabel;
    QComboBox *TypeselectBox;
    QGroupBox *ClinicVisit;
    QLabel *label_10;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *OK_clinic;
    QPushButton *Cancelclinic;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *doclabl1_3;
    QComboBox *Doctorscliniccbox;
    QPushButton *showcliniclist;
    QGridLayout *gridLayout;
    QLineEdit *Hourline;
    QLineEdit *Minline;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *Dayline;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *Nursegrbx;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *canclenurs;
    QWidget *layoutWidget_10;
    QFormLayout *formLayout_6;
    QLabel *doclabl1_2;
    QLabel *doclabl2_2;
    QLabel *roomlabel;
    QPushButton *nurshow;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(956, 680);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        IT = new QGroupBox(centralWidget);
        IT->setObjectName(QStringLiteral("IT"));
        IT->setGeometry(QRect(30, 170, 351, 341));
        label_8 = new QLabel(IT);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 30, 221, 16));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        label_8->setFont(font);
        itlist = new QComboBox(IT);
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->addItem(QString());
        itlist->setObjectName(QStringLiteral("itlist"));
        itlist->setGeometry(QRect(10, 60, 301, 20));
        layoutWidget = new QWidget(IT);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 270, 291, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        OK_it = new QPushButton(layoutWidget);
        OK_it->setObjectName(QStringLiteral("OK_it"));

        horizontalLayout_3->addWidget(OK_it);

        Cancelit = new QPushButton(layoutWidget);
        Cancelit->setObjectName(QStringLiteral("Cancelit"));

        horizontalLayout_3->addWidget(Cancelit);

        layoutWidget1 = new QWidget(IT);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 100, 321, 159));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setHorizontalSpacing(5);
        formLayout_3->setVerticalSpacing(6);
        label1 = new QLabel(layoutWidget1);
        label1->setObjectName(QStringLiteral("label1"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label1);

        lineEdit1 = new QLineEdit(layoutWidget1);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit1);

        label2 = new QLabel(layoutWidget1);
        label2->setObjectName(QStringLiteral("label2"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label2);

        lineEdit2 = new QLineEdit(layoutWidget1);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit2);

        label3 = new QLabel(layoutWidget1);
        label3->setObjectName(QStringLiteral("label3"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label3);

        lineEdit3 = new QLineEdit(layoutWidget1);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit3);

        label4 = new QLabel(layoutWidget1);
        label4->setObjectName(QStringLiteral("label4"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label4);

        lineEdit4 = new QLineEdit(layoutWidget1);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit4);


        verticalLayout_2->addLayout(formLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        showdocbutton = new QPushButton(layoutWidget1);
        showdocbutton->setObjectName(QStringLiteral("showdocbutton"));

        horizontalLayout_2->addWidget(showdocbutton);

        showpatbutton = new QPushButton(layoutWidget1);
        showpatbutton->setObjectName(QStringLiteral("showpatbutton"));

        horizontalLayout_2->addWidget(showpatbutton);

        showrombutton = new QPushButton(layoutWidget1);
        showrombutton->setObjectName(QStringLiteral("showrombutton"));

        horizontalLayout_2->addWidget(showrombutton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        Doctor = new QGroupBox(centralWidget);
        Doctor->setObjectName(QStringLiteral("Doctor"));
        Doctor->setGeometry(QRect(410, 310, 351, 221));
        label_9 = new QLabel(Doctor);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 30, 221, 16));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font);
        Doclist = new QComboBox(Doctor);
        Doclist->addItem(QString());
        Doclist->addItem(QString());
        Doclist->addItem(QString());
        Doclist->addItem(QString());
        Doclist->addItem(QString());
        Doclist->addItem(QString());
        Doclist->addItem(QString());
        Doclist->addItem(QString());
        Doclist->setObjectName(QStringLiteral("Doclist"));
        Doclist->setGeometry(QRect(10, 60, 301, 20));
        layoutWidget_6 = new QWidget(Doctor);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 160, 291, 51));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        OK_doc = new QPushButton(layoutWidget_6);
        OK_doc->setObjectName(QStringLiteral("OK_doc"));

        horizontalLayout_5->addWidget(OK_doc);

        Cancledoc = new QPushButton(layoutWidget_6);
        Cancledoc->setObjectName(QStringLiteral("Cancledoc"));

        horizontalLayout_5->addWidget(Cancledoc);

        layoutWidget_7 = new QWidget(Doctor);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 100, 261, 51));
        formLayout_5 = new QFormLayout(layoutWidget_7);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setHorizontalSpacing(5);
        formLayout_5->setVerticalSpacing(6);
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        doclabl1 = new QLabel(layoutWidget_7);
        doclabl1->setObjectName(QStringLiteral("doclabl1"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, doclabl1);

        docline1 = new QLineEdit(layoutWidget_7);
        docline1->setObjectName(QStringLiteral("docline1"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, docline1);

        doclabl2 = new QLabel(layoutWidget_7);
        doclabl2->setObjectName(QStringLiteral("doclabl2"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, doclabl2);

        docline2 = new QLineEdit(layoutWidget_7);
        docline2->setObjectName(QStringLiteral("docline2"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, docline2);

        Logingrpbox = new QGroupBox(centralWidget);
        Logingrpbox->setObjectName(QStringLiteral("Logingrpbox"));
        Logingrpbox->setGeometry(QRect(20, 0, 341, 171));
        layoutWidget_2 = new QWidget(Logingrpbox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 80, 291, 77));
        formLayout_2 = new QFormLayout(layoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        Usernameline = new QLineEdit(layoutWidget_2);
        Usernameline->setObjectName(QStringLiteral("Usernameline"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, Usernameline);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        passwordline = new QLineEdit(layoutWidget_2);
        passwordline->setObjectName(QStringLiteral("passwordline"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passwordline);

        EnterButton = new QPushButton(layoutWidget_2);
        EnterButton->setObjectName(QStringLiteral("EnterButton"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, EnterButton);

        layoutWidget2 = new QWidget(Logingrpbox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 291, 47));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        welcomelabel = new QLabel(layoutWidget2);
        welcomelabel->setObjectName(QStringLiteral("welcomelabel"));
        QFont font1;
        font1.setPointSize(12);
        welcomelabel->setFont(font1);

        verticalLayout->addWidget(welcomelabel);

        TypeselectBox = new QComboBox(layoutWidget2);
        TypeselectBox->addItem(QString());
        TypeselectBox->addItem(QString());
        TypeselectBox->addItem(QString());
        TypeselectBox->addItem(QString());
        TypeselectBox->setObjectName(QStringLiteral("TypeselectBox"));

        verticalLayout->addWidget(TypeselectBox);

        ClinicVisit = new QGroupBox(centralWidget);
        ClinicVisit->setObjectName(QStringLiteral("ClinicVisit"));
        ClinicVisit->setGeometry(QRect(390, 10, 311, 251));
        label_10 = new QLabel(ClinicVisit);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 30, 281, 16));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(10);
        label_10->setFont(font2);
        layoutWidget_8 = new QWidget(ClinicVisit);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 190, 291, 51));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        OK_clinic = new QPushButton(layoutWidget_8);
        OK_clinic->setObjectName(QStringLiteral("OK_clinic"));

        horizontalLayout_6->addWidget(OK_clinic);

        Cancelclinic = new QPushButton(layoutWidget_8);
        Cancelclinic->setObjectName(QStringLiteral("Cancelclinic"));

        horizontalLayout_6->addWidget(Cancelclinic);

        layoutWidget3 = new QWidget(ClinicVisit);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 60, 291, 126));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        doclabl1_3 = new QLabel(layoutWidget3);
        doclabl1_3->setObjectName(QStringLiteral("doclabl1_3"));

        horizontalLayout_4->addWidget(doclabl1_3);

        Doctorscliniccbox = new QComboBox(layoutWidget3);
        Doctorscliniccbox->setObjectName(QStringLiteral("Doctorscliniccbox"));
        Doctorscliniccbox->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_4->addWidget(Doctorscliniccbox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        showcliniclist = new QPushButton(layoutWidget3);
        showcliniclist->setObjectName(QStringLiteral("showcliniclist"));

        verticalLayout_3->addWidget(showcliniclist);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Hourline = new QLineEdit(layoutWidget3);
        Hourline->setObjectName(QStringLiteral("Hourline"));

        gridLayout->addWidget(Hourline, 2, 2, 1, 1);

        Minline = new QLineEdit(layoutWidget3);
        Minline->setObjectName(QStringLiteral("Minline"));

        gridLayout->addWidget(Minline, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        Dayline = new QLineEdit(layoutWidget3);
        Dayline->setObjectName(QStringLiteral("Dayline"));

        gridLayout->addWidget(Dayline, 2, 1, 1, 1);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        Nursegrbx = new QGroupBox(centralWidget);
        Nursegrbx->setObjectName(QStringLiteral("Nursegrbx"));
        Nursegrbx->setGeometry(QRect(60, 490, 311, 141));
        layoutWidget_9 = new QWidget(Nursegrbx);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 80, 291, 51));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        canclenurs = new QPushButton(layoutWidget_9);
        canclenurs->setObjectName(QStringLiteral("canclenurs"));

        horizontalLayout_7->addWidget(canclenurs);

        layoutWidget_10 = new QWidget(Nursegrbx);
        layoutWidget_10->setObjectName(QStringLiteral("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(30, 20, 261, 51));
        formLayout_6 = new QFormLayout(layoutWidget_10);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setHorizontalSpacing(5);
        formLayout_6->setVerticalSpacing(6);
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        doclabl1_2 = new QLabel(layoutWidget_10);
        doclabl1_2->setObjectName(QStringLiteral("doclabl1_2"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, doclabl1_2);

        doclabl2_2 = new QLabel(layoutWidget_10);
        doclabl2_2->setObjectName(QStringLiteral("doclabl2_2"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, doclabl2_2);

        roomlabel = new QLabel(layoutWidget_10);
        roomlabel->setObjectName(QStringLiteral("roomlabel"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, roomlabel);

        nurshow = new QPushButton(layoutWidget_10);
        nurshow->setObjectName(QStringLiteral("nurshow"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, nurshow);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 956, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        IT->setTitle(QApplication::translate("MainWindow", "IT", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Please select what to do:", nullptr));
        itlist->setItemText(0, QApplication::translate("MainWindow", "...", nullptr));
        itlist->setItemText(1, QApplication::translate("MainWindow", "Add rooms", nullptr));
        itlist->setItemText(2, QApplication::translate("MainWindow", "Add doctor", nullptr));
        itlist->setItemText(3, QApplication::translate("MainWindow", "Set doctors' weekends", nullptr));
        itlist->setItemText(4, QApplication::translate("MainWindow", "Add patient", nullptr));
        itlist->setItemText(5, QApplication::translate("MainWindow", "Assign doctor to patinet", nullptr));
        itlist->setItemText(6, QApplication::translate("MainWindow", "Assign room to patinet", nullptr));
        itlist->setItemText(7, QApplication::translate("MainWindow", "Add nurse", nullptr));
        itlist->setItemText(8, QApplication::translate("MainWindow", "New IT (available for admin ONLY)", nullptr));
        itlist->setItemText(9, QApplication::translate("MainWindow", "Change password", nullptr));
        itlist->setItemText(10, QApplication::translate("MainWindow", "Delete patient", nullptr));
        itlist->setItemText(11, QApplication::translate("MainWindow", "Delete doctor", nullptr));
        itlist->setItemText(12, QApplication::translate("MainWindow", "Delete room", nullptr));
        itlist->setItemText(13, QApplication::translate("MainWindow", "Delete nurse", nullptr));

        OK_it->setText(QApplication::translate("MainWindow", "OK", nullptr));
        Cancelit->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        label1->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label4->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        showdocbutton->setText(QApplication::translate("MainWindow", "Show Doctors", nullptr));
        showpatbutton->setText(QApplication::translate("MainWindow", "Show Patients", nullptr));
        showrombutton->setText(QApplication::translate("MainWindow", "Show Rooms", nullptr));
        Doctor->setTitle(QApplication::translate("MainWindow", "Doctor", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Please select what to do:", nullptr));
        Doclist->setItemText(0, QApplication::translate("MainWindow", "...", nullptr));
        Doclist->setItemText(1, QApplication::translate("MainWindow", "Print patients list", nullptr));
        Doclist->setItemText(2, QApplication::translate("MainWindow", "print patient report", nullptr));
        Doclist->setItemText(3, QApplication::translate("MainWindow", "add diseace to patient", nullptr));
        Doclist->setItemText(4, QApplication::translate("MainWindow", "delete diseace from patient", nullptr));
        Doclist->setItemText(5, QApplication::translate("MainWindow", "Set patient duration", nullptr));
        Doclist->setItemText(6, QApplication::translate("MainWindow", "See appointments", nullptr));
        Doclist->setItemText(7, QApplication::translate("MainWindow", "Change password", nullptr));

        OK_doc->setText(QApplication::translate("MainWindow", "OK", nullptr));
        Cancledoc->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        doclabl1->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        doclabl2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Logingrpbox->setTitle(QApplication::translate("MainWindow", "Login", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "User Name:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        EnterButton->setText(QApplication::translate("MainWindow", "Enter", nullptr));
        welcomelabel->setText(QApplication::translate("MainWindow", "Please select your account type:", nullptr));
        TypeselectBox->setItemText(0, QApplication::translate("MainWindow", "IT", nullptr));
        TypeselectBox->setItemText(1, QApplication::translate("MainWindow", "Doctor", nullptr));
        TypeselectBox->setItemText(2, QApplication::translate("MainWindow", "Clinic Visit (Just click OK)", nullptr));
        TypeselectBox->setItemText(3, QApplication::translate("MainWindow", "Nurse", nullptr));

        ClinicVisit->setTitle(QApplication::translate("MainWindow", "Clinic Visit", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Please select a doctor and an appointment:", nullptr));
        OK_clinic->setText(QApplication::translate("MainWindow", "OK", nullptr));
        Cancelclinic->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        doclabl1_3->setText(QApplication::translate("MainWindow", "Select Doctor:", nullptr));
        showcliniclist->setText(QApplication::translate("MainWindow", "Show doctor appointment", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Appointment:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Day", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Hour", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Minute", nullptr));
        Nursegrbx->setTitle(QApplication::translate("MainWindow", "Nurse", nullptr));
        canclenurs->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        doclabl1_2->setText(QApplication::translate("MainWindow", "Show patients:", nullptr));
        doclabl2_2->setText(QApplication::translate("MainWindow", "Room:", nullptr));
        roomlabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        nurshow->setText(QApplication::translate("MainWindow", "show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
