#include <iostream>
#include "wallet.h"
#include <fstream>
#include <string>

using namespace std;




void Wallet::sign_in(string x, string y)
{
    string login, password,line,line1;
    int check=0;
    fstream file;
    file.open("profile.txt", ios::in);
    string search_str =x;
    while(getline(file,line))
    {
    login=line;
    if(line.find(search_str) != string::npos)
    {
    getline(file,line);
    password=line;

    if((login==x)&&(password==y))
    {

        cout<<endl<<endl<<"                                                  **access approved**";
        getline(file,line);

        getline(file,line1);
        cout<<endl<<endl<<" HELLO "<<line<<" "<<line1<<" :)"<<endl;
        check=1;
    }




    }
    }
    if(check==0)
         cout<<endl<<endl<<"                                                  **access denied**";

    file.close();
}

void Wallet::print_account(string login, string password)
{
    fstream file;
    file.open("profile.txt", ios::in);
    string search_str = login;
    string line,line1,line2;

    while(getline(file,line))
    {
        line1=line;
        if(line.find(search_str)!=string::npos)
        {
            getline(file,line);
            line2=line;
            if(line1==login && line2==password)
            {
                getline(file,line);
                cout<<endl<<line;
                getline(file,line);
                cout<<endl<<line;
            }


        }
    }





    file.close();
}

void Wallet::create_account()
{

    fstream file;
    file.open("profile.txt", ios::out | ios::app);
    if(file.good()==true)
    {

        file<<login_<<endl;
        file<<password_<<endl;
        file<<name_<<endl;
        file<<surname_<<endl;
        file<<'+'<<endl;
    }
    else
        cout<<endl<<" *error*";


    file.close();

}

Wallet::Wallet(string login, string password,string name, string surname)
:login_{login},password_{password},name_{name},surname_{surname}
{

    cout<<endl<<"constructor W";
}

Wallet::Wallet(string login, string password)
:login_{login},password_{password},name_{""},surname_{""}
{
    cout<<"sign in constructor W";
}
