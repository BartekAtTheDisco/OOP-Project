#include <iostream>
#include <fstream>
#include "account.h"
#include "wallet.h"

using namespace std;

int main()
{

    int log;
    cout<<"              _| Welcome to the cryptocurrency stock simulator |_ "<<endl;
    cout<<endl<<"1.   SIGN IN";
    cout<<endl<<"2.   CREATE ACCOUNT"<<endl<<endl<<"      -------"<<endl;
    cin>>log;

    switch(log)
{


case 1:
{
    string x, y;

    cout<<endl<<" login: ";
    cin>>x;
    cout<<endl<<" password: ";
    cin>>y;
    Wallet w1(x,y);
    w1.sign_in(x,y);
    w1.print_account(x,y);

}
    break;


case 2:
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
    break;
}
     int choice;
    cout<<endl<<endl<<"                           ~~~~~~~~~~~~~~~~~~~~";
    cout<<endl<<endl<<"                    ***choose number to pick action***"<<endl;
    cout<<endl<<" 1. show my account data"<<endl;
    cout<<endl<<" 2. show my balance"<<endl;
    cin>>choice;










    return 0;
}
