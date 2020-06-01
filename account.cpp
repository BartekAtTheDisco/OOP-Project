#include <iostream>
#include <conio.h>
#include <vector>
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

Account::Account(string login_, string password_, string name_, string surname_, double Euro, double BTC_, double ETH_, double LTC_)
:login{login_}, password{password_}, name{name_}, surname{surname_}, EUR{Euro}, BTC{BTC_}, ETH{ETH_}, LTC{LTC_}
{
}

Account::Account()
{
    name = "Error";
}

void Account::show_balance()
{
    cout<<endl<<"       |Your account BALANCE|";
    cout<<endl<<" EUR: "<<EUR;
    cout<<endl<<" BTC: "<<BTC;
    cout<<endl<<" ETH: "<<ETH;
    cout<<endl<<" LTC: "<<LTC;
    cout<<endl<<"...press any key to continue...";
    getch();
}

void Account::load_eur()
{
    double new_eur;
    cout<<endl<<" How much money do you want to deposit?"<<endl<<"EUR: ";
    cin>>new_eur;
    EUR+=new_eur;
    save_data();
    cout<<endl<<" After transaction you have.."<<endl<<" EUR: "<<EUR;
    cout<<endl<<"...press any key to continue...";
    getch();
}

void Account::save_data()
{
    string textline;
    vector <string> data;
    vector <double> currency;
    fstream file;
    file.open("profile_data.txt" , ios::in);
    while(getline(file,textline))
        data.emplace_back(textline);

    for(int i=0; i+8<data.size() ; i+=9)
    {
         if(data[i]==login)
         {
                if(data[i+1]==password)
                {
                    file.close();
                    file.open("profile_data.txt" , ios::out);
                    for(int number=0 ; number+8<data.size() ; number+=9)
                    {
                        if(number==i)
                        {
                        file<<data[number]<<endl;
                        file<<data[number+1]<<endl;
                        file<<data[number+2]<<endl;
                        file<<data[number+3]<<endl;
                        file<<EUR<<endl;
                        file<<BTC<<endl;
                        file<<ETH<<endl;
                        file<<LTC<<endl;
                        file<<data[number+8]<<endl;
                        }
                        else
                        {
                        file<<data[number]<<endl;
                        file<<data[number+1]<<endl;
                        file<<data[number+2]<<endl;
                        file<<data[number+3]<<endl;
                        file<<data[number+4]<<endl;
                        file<<data[number+5]<<endl;
                        file<<data[number+6]<<endl;
                        file<<data[number+7]<<endl;
                        file<<data[number+8]<<endl;
                        }
                    }
                }
         }

    }
    file.close();
}
