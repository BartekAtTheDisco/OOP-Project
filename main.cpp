#include <iostream>
#include <fstream>
#include "account.h"
#include "wallet.h"
#include "manager.h"
#include <vector>
#include <windows.h>

using namespace std;

int main()
{
    int log;
    bool end = true;
    vector <Account> acc;
    int i=0;
    Manager manage();
    do
    {
    int log;
    cout<<endl<<"              _| Welcome to the cryptocurrency stock simulator |_ "<<endl;
    cout<<endl<<" 1.   SIGN IN";
    cout<<endl<<" 2.   CREATE ACCOUNT";
    cout<<endl<<" 0.   EXIT"<<endl<<endl<<"      -------"<<endl;
    cin>>log;


    switch(log)
    case 1:
    {
    string login;
    login = manage.log_in();
    Account acc[i].emplace_back{Account()}
    while(end==true)
    {
    cout<<endl<<endl<<"                    ***choose number to pick action***"<<endl;
    cout<<endl<<" 1. show my account data"<<endl;
    cout<<endl<<" 2. show my balance"<<endl;
    cout<<endl<<" 3. load EUR to my account"<<endl;
    cout<<endl<<" 0. log out"<<endl;
    cin>>choice;

    switch(choice)
    {

case 1:
    {
    Wallet wall[i]();
    wall[i].print_account();
    break;
    }
case 3:
    {
    acc[i].load_eur();
    }


}
    }
    }
    else if(log==2)
    {
    string login,password,name,surname;
    cout<<endl<<" enter your login: ";
    cin>>login;
    cout<<endl<<" enter your password: ";
    cin>>password;
    cout<<endl<<" enter your NAME: ";
    cin>>name;
    cout<<endl<<" enter your SURNAME: ";
    cin>>surname;
    Wallet wall[i](login,password,name,surname);
    wall[i].create_account();
    i++;
    }
    else if(log!=2 && log!=1 && log!=0)
    {
        cout<<endl<<" error";
    }


    }
    while(end==true);








    return 0;
}
