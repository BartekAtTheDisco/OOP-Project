#include <iostream>
#include "wallet.h"
#include <fstream>

using namespace std;


void Wallet::print_account()
{
    fstream file;
    file.open("profile.txt", ios::in);
    string line;
    do
    {
    getline(file,line);
    cout<<line<<endl;
    }
    while(line!="");

    file.close();
}

void Wallet::create_account()
{

    fstream file;
    file.open("profile.txt", ios::out);
    if(file.good()==true)
    {
        cout<<endl<<" *access approved*"<<endl;
        file<<login_<<endl;
        file<<password_<<endl;
        file<<name_<<endl;
        file<<surname_<<endl;
    }
    else
        cout<<endl<<" *access denied*";


    file.close();

}

Wallet::Wallet(string name, string surname, string login, string password)
:name_{name},surname_{surname},login_{login},password_{password}
{

    cout<<endl<<"constructor";
}
