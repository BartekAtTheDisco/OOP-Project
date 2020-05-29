#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include "account.h"
#include "wallet.h"
#include "manager.h"

using namespace std;

int main()
{
    int log;
    bool end = true;
    vector <Account> acc;
    int i=0;
    Manager manage;
    do
    {
    int log;
    cout<<endl<<"              _| Welcome to the cryptocurrency stock simulator |_ "<<endl;
    cout<<endl<<" 1.   SIGN IN";
    cout<<endl<<" 2.   CREATE ACCOUNT";
    cout<<endl<<" 0.   EXIT"<<endl<<endl<<"      -------"<<endl;                    //case 0: end=false
    cin>>log;


    switch(log)
    case 1:
    {
    string login;
    login = manage.log_in();
    Account acc[i].emplace_back{Account()};

    {
    int choice;
    cout<<endl<<endl<<"                    ***choose number to pick action***"<<endl;
    cout<<endl<<" 1. show my account data"<<endl;
    cout<<endl<<" 2. show my balance"<<endl;
    cout<<endl<<" 3. load EUR to my account"<<endl;
    cout<<endl<<" 0. log out"<<endl;
    cin>>choice;

    switch(choice)
    {                                               // tu mają być case'y i trzeba pętle zrobić


    }
    }
    }
    }
    while(end==true);








    return 0;
}

