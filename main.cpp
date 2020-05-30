#include <iostream>
#include <fstream>
#include <vector>
#include "account.h"
#include "manager.h"
#include "Cryptocurrency.hpp"
#include "Functions.hpp"

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
    vector <Account> acc;
    Manager manage;
    
    
     while(true)
        {
        int choice;
        cout << "1. Create account" << endl;
        cout << "2. Sign in" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                manage.create_account();
                break;
                
            case 2:
                acc.emplace_back(manage.sign_in());
                break;
        }
            cout << "brawo mistrzuniu" << endl;
        }
    
        return 0;
    }
    //int log;
    //bool end = false;
    //int i=0;
   /* do
    {
    int log;
    cout<<endl<<"              _| Welcome to the cryptocurrency stock simulator |_ "<<endl;
    cout<<endl<<" 1.   SIGN IN";
    cout<<endl<<" 2.   CREATE ACCOUNT";
    cout<<endl<<" 0.   EXIT"<<endl<<endl<<"      -------"<<endl;                    //case 0: end=false
    cin>>log;


    switch(log)
    {
    case 1:
    {
        manage.log_in();

    int choice;
    cout<<endl<<endl<<"                    ***choose number to pick action***"<<endl;
    cout<<endl<<" 1. show my account data"<<endl;
    cout<<endl<<" 2. show my balance"<<endl;
    cout<<endl<<" 3. load EUR to my account"<<endl;
    cout<<endl<<" 0. log out"<<endl;
    cin>>choice;
        break;
    switch(choice)
    {                                               // tu mają być case'y i trzeba pętle zrobić


    }
    
    }
        case 2:
            manage.create_account();
            cout << "gówno";
    }
        
    }while(end==false);
*/
