#include "it.h"
IT::IT(){}
IT::IT(string name , string pass ):name(name) , password(pass)   //should be improved to add more than one it
{

}

void IT::change_password(string newpassword){
    this->password = newpassword;
    }
