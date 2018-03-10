#ifndef IT_H
#define IT_H
#include<string>
using namespace std;
class IT
{
public:
    string name;
    string password;
    //static int iter;
    IT();
    IT(string , string );
    void change_name(string);
    void change_password(string);

};

#endif // IT_H
