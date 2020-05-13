#include <iostream>
#include <fstream>
#include "account.h"
#include "wallet.h"

using namespace std;

int main()
{

    int log;
    while(log!=0)
    cout<<"              _| Welcome to the cryptocurrency stock simulator |_ "<<endl;
    cout<<endl<<" 1.   SIGN IN";
    cout<<endl<<" 2.   CREATE ACCOUNT";
    cout<<endl<<" 0.   EXIT"<<endl<<endl<<"      -------"<<endl;
    cin>>log;

    if(log==1)
    {
    string x, y;
    cout<<endl<<" login: ";
    cin>>x;
    cout<<endl<<" password: ";
    cin>>y;
    Wallet w1(x,y);
    w1.sign_in(x,y);
    Account a1(x,y);

    int choice;
    while(choice!=0)
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
    w1.print_account();
    break;
    }
case 3:
    {
    a1.load_eur();
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
    Wallet w1(login,password,name,surname);
    w1.create_account();
    }
    else if(log!=2 && log!=1 && log!=0)
    {
        cout<<endl<<" error";
    }




    return 0;
}
