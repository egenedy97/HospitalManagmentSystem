#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once
#include <QMainWindow>
#include <QObject>
#include <QMessageBox>
#include<string>
#include <vector>
#include"doctor.h"
#include"patient.h"
#include "room.h"
#include "nurse.h"
#include "it.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void hidee();

public slots:
    void setittext();

    void setdoctext();

private slots:
    void on_EnterButton_clicked();

    void on_showcliniclist_clicked();

    void on_OK_clinic_clicked();

    void on_Cancelit_clicked();

    void on_Cancelclinic_clicked();

    void on_Cancledoc_clicked();

    void on_OK_it_clicked();

    void on_OK_doc_clicked();

    void on_showdocbutton_clicked();

    void on_showpatbutton_clicked();

    void on_showrombutton_clicked();

    void on_nurshow_clicked();

    void on_canclenurs_clicked();

private:
    Ui::MainWindow *ui;
    doctor *logindoc;
    IT *loginit;
    employee* loginnurs;

};

#endif // MAINWINDOW_H
