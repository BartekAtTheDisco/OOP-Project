#include <iostream>
#include "wallet.h"
#include <fstream>
#include <string>

using namespace std;




void Wallet::sign_in(string x, string y)
{
    string login, password,word;
    int check=0;
    fstream file;
    file.open("profile.txt", ios::in);

    while(file>>word)
    {
    login=word;
    file>>word;
    password=word;

    if((login==x)&&(password==y))
    {

        cout<<endl<<endl<<"                                                  **access approved**";
        file>>word;
        name_=word;

        file>>word;
        surname_=word;
        cout<<endl<<endl<<" HELLO "<<name_<<" "<<surname_<<" :)"<<endl;
        login_=login;
        password_=password;
        check=1;
    }




    }

    if(check==0)
         cout<<endl<<endl<<"                                                  **access denied**";

    file.close();

}

void Wallet::print_account()
{
    cout<<endl<<"==========ACCOUNT DATA==========";
    cout<<endl<<" NAME: "<<name_;
    cout<<endl<<" SURNAME: "<<surname_;
}

void Wallet::create_account()
{
    double zero = 0.0;
    fstream file;
    file.open("profile.txt", ios::out | ios::app);
    if(file.good()==true)
    {

        file<<login_<<" ";
        file<<password_<<" ";
        file<<name_<<" ";
        file<<surname_<<" ";
        file<<zero<<" "<<endl;

    }
    else
        cout<<endl<<" *error*";


    file.close();

}

Wallet::Wallet(string login, string password,string name, string surname)
:login_{login},password_{password},name_{name},surname_{surname}
{


}

Wallet::Wallet(string login, string password)
:login_{login},password_{password},name_{""},surname_{""}
{

}
