#include <iostream>
#include <conio.h>
#include <fstream>
#include <sstream>
#include "account.h"


using namespace std;



void Account::show_accdata()
{
    cout<<endl<<"       |Informations about your account|";
    cout<<endl<<"name: "<<name;
    cout<<endl<<"surname: "<<surname;
    cout<<endl<<"EUR: YOU R POOR AS FUCK";
    cout<<endl<<"...press any key to continue...";
    getch();
}

Account::Account(string name, string surname, double Euro, double BTC, double ETH, double LTC)
:name{name}, surname{surname}, Eur{Euro}, BTC{BTC}, ETH{ETH}, LTC{LTC}
{
}

Account::Account()
{
    name = "Error";
}


/*
void Account::load_eur()
{
    double dep,eur;
    string word,word1,x;
    cout<<endl<<"How much money do you want to deposit?"<<endl<<"EUR: ";
    cin>>dep;
    fstream file;
    file.open("profile.txt", ios::in | ios::out);
    while(file>>word)
    {
        file>>word1;
        if(word==_login && word1==_password)
        {
            file>>skipws>>x>>x;
            file>>eur;
            eur+=dep;
            file>>x>>x>>x>>x;
            file<<eur;
        }
    }
    file.close();
}
*/
