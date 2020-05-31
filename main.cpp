#include <iostream>
#include <fstream>
#include <vector>
#include "account.h"
#include "manager.h"
#include "cryptocurrency.h"
#include "functions.h"

using namespace std;

int main()
{
    Bitcoin BTC;
    Ethereum ETH;
    Litecoin LTC;
    Cryptocurrency* ptr;
    ptr = &BTC;
    ptr->assign_current_value(check_BTC());
    ptr = &ETH;
    ptr->assign_current_value(check_ETH());
    ptr = &LTC;
    ptr->assign_current_value(check_LTC());


    int log;
    bool end = false;
    vector <Account> acc;
    Manager manage;


    do
    {
    cout<<endl<<"              _| Welcome to the cryptocurrency stock simulator |_ "<<endl;
    cout<<endl<<" 1.   SIGN IN";
    cout<<endl<<" 2.   CREATE ACCOUNT";
    cout<<endl<<" 0.   EXIT"<<endl<<endl<<"      -------"<<endl;                    //case 0: end=false
    cin>>log;
    switch(log)
    {
    case 1:
        {
        acc.emplace_back(manage.sign_in());
        bool menu = false;
    do
    {
    int choice;
    cout<<endl<<endl<<"                    ***choose number to pick action***"<<endl;
    cout<<endl<<" 1. show my account data"<<endl;
    cout<<endl<<" 2. show my balance"<<endl;
    cout<<endl<<" 3. load EUR to my account"<<endl;
    cout<<endl<<" 0. log out"<<endl;
    cout<<endl<<" click 9 to hack server and print data of all accounts"<<endl;
    cin>>choice;

    switch(choice)
    {
         case 9:
                manage.print_alldata();
                break;

         case 0:
            menu=true;
            break;

    }

    }while(menu==false);
    break;
        }

    case 2:
        {
        manage.create_account();
        break;
        }

    case 0:
        {
        cout<<endl<<endl<<"   you successfully have closed STOCK SIMULATION (version 6.9.9.)";
        end=true;
        break;
        }

    }

    }while(end==false);


 return 0;
    }
