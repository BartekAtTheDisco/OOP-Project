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
:name{name}, surname{surname}, EUR{Euro}, BTC{BTC}, ETH{ETH}, LTC{LTC}
{
}

Account::Account()
{
    name = "Error";
}

void Account::load_eur()
{
    double new_eur;
    cout<<endl<<" How much money do you want to deposit?"<<endl<<"EUR: ";
    cin>>new_eur;
    EUR+=new_eur;
    cout<<endl<<" After transaction you have.."<<endl<<" EUR: "<<EUR;
    cout<<endl<<"...press any key to continue...";
    getch();
}

