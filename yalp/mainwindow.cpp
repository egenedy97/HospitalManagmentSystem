#include "mainwindow.h"
#include "ui_mainwindow.h"

vector<room>roomss;
vector<employee*>nursess;
vector<doctor>doctorss;
vector<patient>patientss;
vector<IT> itss;

void MainWindow::hidee(){
    ui->Doctor->hide();
    ui->IT->hide();
    ui->ClinicVisit->hide();
    ui->Nursegrbx->hide();
   ui->doclabl1->hide();
    ui->doclabl2->hide();
    ui->docline1->hide();
    ui->docline2->hide();
    ui->label1->hide();
    ui->label2->hide();
    ui->label3->hide();
    ui->label4->hide();
    ui->lineEdit1->hide();
    ui->lineEdit2->hide();
    ui->lineEdit3->hide();
    ui->lineEdit4->hide();
}


int get_index(QString n , char c){
    switch(c){
    case 'd':
        for(unsigned int i = 0 ; i < doctorss.size() ; i++){
            if(doctorss[i].get_name() == n.toStdString() )return i;

        }
        return -1; //haven't found anything
        break;
    case 'n':
        for(unsigned int i=0 ; i < nursess.size() ; i++){
            if(nursess[i]->get_name() == n.toStdString() )return i;
        }
        return -1; //haven't found anything
        break;
    case 'p':
        for(unsigned int i=0 ; i < patientss.size() ; i++){
            if(patientss[i].get_name() == n.toStdString() )return i;
        }
        return -1; //haven't found anything
        break;
    case 'r':
        for(unsigned int i=0 ; i < roomss.size() ; i++){
            if(roomss[i].get_number()== n.toInt() )return i;
        }
        return -1; //haven't found anything
        break;
    default:
        return -1;
}
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    itss.push_back(IT("admin","admin"));
    connect(ui->Doclist , SIGNAL(currentIndexChanged(int)),this,SLOT(setdoctext()));
    connect(ui->itlist , SIGNAL(currentIndexChanged(int)),this,SLOT(setittext()));
    hidee();


}

MainWindow::~MainWindow()
{
    delete ui;
    delete logindoc;
    delete loginit;

}

void MainWindow::setdoctext(){
    ui->Doctor->show();
    ui->doclabl1->hide();
    ui->doclabl2->hide();
    ui->docline1->hide();
    ui->docline2->hide();
    switch(ui->Doclist->currentIndex()){
        case 2:
        ui->doclabl1->show();
        ui->docline1->show();
        ui->doclabl2->hide();
        ui->docline2->hide();
        ui->doclabl1->setText("patient number:");
        break;

        case 3:
        case 4:
        ui->doclabl1->show();
        ui->docline1->show();
        ui->doclabl2->show();
        ui->docline2->show();
        ui->doclabl1->setText("patient number:");
        ui->doclabl2->setText("disease:");
        break;
    case 5:
    ui->doclabl1->show();
    ui->docline1->show();
    ui->doclabl2->show();
    ui->docline2->show();
    ui->doclabl1->setText("patient number:");
    ui->doclabl2->setText("duration(days):");
    break;
    case 7:
        ui->label1->show();
        ui->lineEdit1->show();
        ui->label2->setText("New Password:");
            break;

    default:
        break;



    }
}

void MainWindow::setittext(){
    ui->IT->show();
    ui->label1->hide();
    ui->label2->hide();
    ui->label3->hide();
    ui->label4->hide();
    ui->lineEdit1->hide();
    ui->lineEdit2->hide();
    ui->lineEdit3->hide();
    ui->lineEdit4->hide();
    switch(ui->itlist->currentIndex()){
        case 1:
                ui->label1->show();
                ui->label2->show();
                ui->lineEdit1->show();
                ui->lineEdit2->show();
                ui->label1->setText("Room Number:");
                ui->label2->setText("Maximum Capacity:");
            break;
        case 2:
               ui->label1->show();
               ui->label2->show();
               ui->label3->show();
               ui->label4->show();
               ui->lineEdit1->show();
               ui->lineEdit2->show();
               ui->lineEdit3->show();
               ui->lineEdit4->show();
               ui->label1->setText("Name:");
               ui->label2->setText("Login password:");
               ui->label3->setText("Department:");
               ui->label4->setText("age:");
            break;
        case 3:
               ui->label1->show();
               ui->label2->show();
               ui->lineEdit1->show();
               ui->lineEdit2->show();
               ui->label1->setText("Doctor Name:");
               ui->label2->setText("Weekend");
            break;
        case 4:
        ui->label1->show();
        ui->label2->show();
        ui->lineEdit1->show();
        ui->lineEdit2->show();
        ui->label1->setText("Patient Name:");
        ui->label2->setText("Age");
            break;
        case 5:
        ui->label1->show();
        ui->label2->show();
        ui->lineEdit1->show();
        ui->lineEdit2->show();
        ui->label1->setText("Doctor Name:");
        ui->label2->setText("Patient Name:");
            break;
      case 6:
        ui->label1->show();
        ui->label2->show();
        ui->lineEdit1->show();
        ui->lineEdit2->show();
        ui->label1->setText("Patient Name:");
        ui->label2->setText("Room Number:");
            break;
    case 7:
        ui->label1->show();
        ui->label2->show();
        ui->label3->show();
        ui->lineEdit1->show();
        ui->lineEdit2->show();
        ui->lineEdit3->show();
        ui->label1->setText("Name:");
        ui->label2->setText("Password:");
        ui->label3->setText("Age:");
        break;

    case 8:
        ui->label1->show();
        ui->label2->show();
        ui->lineEdit1->show();
        ui->lineEdit2->show();
        ui->label1->setText("Name:");
        ui->label2->setText("Password:");
            break;

    case 9:
        ui->label1->show();
        ui->lineEdit1->show();
        ui->label1->setText("New Password:");
            break;

    case 10:
    case 11:
    case 13:
        ui->label1->show();
        ui->lineEdit1->show();
        ui->label1->setText("Name:");
            break;
    case 12:
        ui->label1->show();
        ui->lineEdit1->show();
        ui->label1->setText("Number:");
            break;

    default:
        break;

    }
}

void MainWindow::on_EnterButton_clicked()
{
    int index=-1;
    switch(ui->TypeselectBox->currentIndex()){
        case 0://case it
        for(int i=0 ; i<itss.size(); i++){
            if(ui->Usernameline->text().toStdString() == itss[i].name && ui->passwordline->text().toStdString()== itss[i].password){
                ui->IT->show();
                ui->Logingrpbox->hide();
                loginit= &itss[i];
                break;
            }
        }
        ui->Usernameline->setText("");ui->passwordline->setText("");
            break;

        case 1:
                index= get_index(ui->Usernameline->text(),'d');
               if(index >= 0 ){
                   if(doctorss[index].get_password() == ui->passwordline->text().toStdString()){
                       ui->Doctor->show();
                       ui->Logingrpbox->hide(); }
                   else{ui->Usernameline->setText("");ui->passwordline->setText("");}
               }
               ui->Usernameline->setText("");ui->passwordline->setText("");
               logindoc = &doctorss[index];
               break;
        case 2:
               ui->Logingrpbox->hide();
               ui->ClinicVisit->show();
               break;

        case 3:
                    index= get_index(ui->Usernameline->text(),'n');
                   if(index >= 0 ){
                       if(nursess[index]->get_password() == ui->passwordline->text().toStdString()){
                           ui->Nursegrbx->show();    //change to be for nurse grpbx
                           ui->Logingrpbox->hide(); }
                       else{ui->Usernameline->setText("");ui->passwordline->setText("");}
                   }
                   else{ui->Usernameline->setText("");ui->passwordline->setText("");}
                   loginnurs= nursess[index];
                   ui->roomlabel->setText(QString::fromStdString("room "+ to_string(loginnurs->get_room())));

                   break;
        default:
            break;

    }
}


void MainWindow::on_showcliniclist_clicked()
{
       int index = ui->Doctorscliniccbox->currentIndex();
       if(doctorss.size()>0){
       QMessageBox msg(QMessageBox::Information,"Appointments for Dr."+QString::fromStdString(doctorss[index].get_name()),QString::fromStdString(doctorss[index].get_appoints()), QMessageBox::Cancel);
       msg.exec();}
}



void MainWindow::on_OK_clinic_clicked()
{
    QString day,hour,min;
    day=ui->Dayline->text();
    hour=ui->Hourline->text();
    min=ui->Minline->text();
    appointment app(day.toStdString(),hour.toInt(),min.toInt(),30);
    if(appointment::daytonum(day.toStdString())!=-1 && doctorss[ui->Doctorscliniccbox->currentIndex()].add_appointment(app)){return;}
    //add appoint return a true if it added appoint or false if it didnt, so if 1 the clicked fun return if not shows msgbox
    QMessageBox msg(QMessageBox::Warning,QString("Overlapping!!!"),QString("Given date intersected with other date or invalid, please revise revresed dates and select another date or another doctor" ), QMessageBox::Cancel);

    msg.exec();
}

void MainWindow::on_Cancelit_clicked()
{
    ui->IT->hide();
    ui->Doctor->hide();
    ui->ClinicVisit->hide();
    ui->Nursegrbx->hide();
    ui->Logingrpbox->show();

}

void MainWindow::on_Cancelclinic_clicked()
{
    ui->IT->hide();
    ui->Doctor->hide();
    ui->Nursegrbx->hide();
    ui->ClinicVisit->hide();
    ui->Logingrpbox->show();

}

void MainWindow::on_Cancledoc_clicked()
{
    ui->IT->hide();
    ui->Doctor->hide();
    ui->ClinicVisit->hide();
    ui->Nursegrbx->hide();
    ui->Logingrpbox->show();
    delete logindoc;

}

void MainWindow::on_OK_it_clicked()
{
    QString line1,line2,line3,line4 ;
    int ind1,ind2;
    switch(ui->itlist->currentIndex()){
        case 1:
               line1= ui->lineEdit1->text();
               line2= ui->lineEdit2->text();
               line3= ui->lineEdit3->text();
               roomss.push_back(room(line1.toInt(),line2.toInt()));
            break;
        case 2:
                line1= ui->lineEdit1->text();
                line2= ui->lineEdit2->text();
                line3= ui->lineEdit3->text();
                line4= ui->lineEdit4->text();
                doctorss.push_back(doctor(line1.toStdString(),line2.toStdString(),line3.toStdString(),line4.toInt()));
                ui->Doctorscliniccbox->addItem(QString::fromStdString( "Dr."+doctorss.back().get_name()+"\tdepartment:"+doctorss.back().get_department())) ; //add it to doctors avaiable for
            break;
        case 3:
            line1= ui->lineEdit1->text();
            line2= ui->lineEdit2->text();
            ind1= get_index(line1,'d');
            if(ind1>-1 && appointment::daytonum(line2.toStdString()) != -1)
                   doctorss[ind1].set_weekend(line2.toStdString());
            else{ui->lineEdit1->setText("");ui->lineEdit2->setText("");}
            break;
       case 4:
            line1= ui->lineEdit1->text();
            line2= ui->lineEdit2->text();
            patientss.push_back(patient(line1.toStdString(),line2.toInt()));
            break;
        case 5:
            line1= ui->lineEdit1->text();
            line2= ui->lineEdit2->text();
            ind1=get_index(line1,'d') ;
            ind2 = get_index(line2,'p');

            if( ind1 >= 0 && ind2 >= 0 && !patientss[ind2].hasdoc ){
                doctorss[ind1].add_patient(& patientss[ind2]); patientss[ind2].hasdoc=1;
            }
            else{  ui->lineEdit1->setText("");ui->lineEdit2->setText("");
                QMessageBox msg(QMessageBox::Warning,QString("Invalid!!!"),QString("Couldn't add patient" ), QMessageBox::Cancel);
                msg.exec();}

            break;
        case 6:
            line1= ui->lineEdit1->text();
            line2= ui->lineEdit2->text();
            ind1=get_index(line1,'p') ;
            ind2 = get_index(line2,'r');
            if( ind1 >= 0 && ind2 >= 0 &&  roomss[ind2].add_patient(&patientss[ind1]) && patientss[ind1].get_room()<0 ){
            }
            else{
                QMessageBox msg(QMessageBox::Warning,QString("Invalid!!!"),QString("Couldn't add patient" ), QMessageBox::Cancel);
                msg.exec();}
            break;
        case 7:
            break;
            case 8:
        line1=ui->lineEdit1->text();
        line2=ui->lineEdit2->text();
        if(loginit == &itss[0]){
             itss.push_back(IT(line1.toStdString(),line2.toStdString()));}
        else{    QMessageBox msg(QMessageBox::Warning,QString("Not allowed!!!"),QString("Only the admin can create new IT accounts" ), QMessageBox::Cancel);
                msg.exec();}

        break;
     case 9:
        line1=ui->lineEdit1->text();
        loginit->change_password(line1.toStdString());
        break;
     default:
        break;
     case 10:
        line1=ui->lineEdit1->text();
        patientss.erase(patientss.begin()+get_index(line1,'p'));
                 break;
     case 11:
           line1=ui->lineEdit1->text();
           doctorss.erase(doctorss.begin()+get_index(line1,'d'));
                break;
     case 12:
            line1=ui->lineEdit1->text();
            roomss.erase(roomss.begin()+get_index(line1,'r'));
               break;
     case 13:
           line1=ui->lineEdit1->text();
           nursess.erase(nursess.begin()+get_index(line1,'n'));
              break;
    }
}



void MainWindow::on_showdocbutton_clicked()
{
    string docs;
    if(doctorss.size()>0){
    for(int i=0 ; i< doctorss.size();i++){
        docs += "Dr."+doctorss[i].get_name()+"\tDepartment: "+doctorss[i].get_department()+"\t#Patient: "+ to_string(doctorss[i].get_patient_num())+"\n\n";
    }
    QMessageBox msg(QMessageBox::Information,QString("Doctors"),QString::fromStdString(docs), QMessageBox::Cancel);
    msg.exec();
    }
}

void MainWindow::on_showpatbutton_clicked()
{
    string pat;
    if(patientss.size()>0){
    for(int i=0 ; i< patientss.size();i++){
        pat += patientss[i].report_print(0)+"\n\n";
    }
    QMessageBox msg(QMessageBox::Information,QString("Patients"),QString::fromStdString(pat), QMessageBox::Cancel);
    msg.exec();
    }
}

void MainWindow::on_showrombutton_clicked()
{
    string rom;
    if(roomss.size()>0){
    for(int i=0 ; i< roomss.size();i++){
        rom += "Room: "+to_string(roomss[i].get_number())+"\t capacity:"+to_string(roomss[i].get_capacity())+"\t#of patients: "+to_string(roomss[i].get_size())+"\n\n";
    }
    QMessageBox msg(QMessageBox::Information,QString("Rooms"),QString::fromStdString(rom), QMessageBox::Cancel);
    msg.exec();
    }

}

void MainWindow::on_OK_doc_clicked()
{
   int index=ui->Doclist->currentIndex();
   QString ind1=ui->docline1->text(),ind2=ui->docline2->text();
   QMessageBox msg;
   switch(index){
   case 1:
       msg.setText(QString::fromStdString(logindoc->print_patients_all()));
       msg.addButton(QMessageBox::Cancel);
       msg.exec();
       break;
   case 2:
       if(ind1.toInt()-1 > logindoc->get_patient_num() || ind1.toInt()-1<0){
           msg.setText(QString::fromStdString("wrong patient number"));
           msg.setIcon(QMessageBox::Warning);
           msg.addButton(QMessageBox::Cancel);
           msg.exec();}
       else{
       msg.setText(QString::fromStdString(logindoc->get_pat_ptr(ind1.toInt()-1)->report_print(1)));
       msg.addButton(QMessageBox::Cancel);
       msg.exec();}
       break;
   case 3:
       if(ind1.toInt()-1 > logindoc->get_patient_num() || ind1.toInt()-1<0){
           msg.setText(QString::fromStdString("wrong patient number"));
           msg.setIcon(QMessageBox::Warning);
           msg.addButton(QMessageBox::Cancel);
           msg.exec();}
        else    logindoc->get_pat_ptr(ind1.toInt()-1)->add_disease(ind2.toStdString());
       break;
   case 4:
       if(ind1.toInt()-1>logindoc->get_patient_num() || ind1.toInt()-1<0){
           msg.setText(QString::fromStdString("wrong patient number"));
           msg.setIcon(QMessageBox::Warning);
           msg.addButton(QMessageBox::Cancel);
           msg.exec();}
         else   logindoc->get_pat_ptr(ind1.toInt()-1)->delete_diseace(ind2.toInt());
       break;
   case 5:
       if(ind1.toInt()-1>logindoc->get_patient_num() || ind1.toInt()-1<0){
           msg.setText(QString::fromStdString("wrong patient number"));
           msg.setIcon(QMessageBox::Warning);
           msg.addButton(QMessageBox::Cancel);
           msg.exec();}
         else   logindoc->get_pat_ptr(ind1.toInt()-1)->set_duration(ind2.toInt());
       break;
   case 6:
       msg.setText(QString::fromStdString(logindoc->get_appoints()));
       msg.addButton(QMessageBox::Cancel);
       msg.exec();
       break;
   case 7:
      ui->docline1->text()=ui->lineEdit1->text();
      logindoc->password_changer(ui->docline1->text().toStdString());
      break;
   }

}

void MainWindow::on_nurshow_clicked()
{
    int ind = get_index(QString::fromStdString(to_string(loginnurs->get_room())),'r');
    string s=roomss[ind].print_patients_data();
    QMessageBox msg(QMessageBox::Information ,QString("patients in room") ,QString::fromStdString(s) , QMessageBox::Cancel);
    msg.exec();
}

void MainWindow::on_canclenurs_clicked()
{

    ui->IT->hide();
    ui->Doctor->hide();
    ui->Nursegrbx->hide();
    ui->ClinicVisit->hide();
    ui->Logingrpbox->show();

}
