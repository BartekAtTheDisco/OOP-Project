#include <iostream>
#include "account.h"
#include "wallet.h"

using namespace std;

int main()
{

    cout<<"              _| Welcome to the cryptocurrency stock simulator |_ "<<endl;
    cout<<endl<<"   CREATE ACCOUNT"<<endl<<endl<<"      -------"<<endl;


    string login,password,name,surname;
    cout<<endl<<" enter your login: ";
    cin>>login;
    cout<<endl<<" enter your password: ";
    cin>>password;
    cout<<endl<<" enter your NAME: ";
    cin>>name;
    cout<<endl<<" enter your SURNAME: ";
    cin>>surname;
    Wallet w1(name,surname,login,password);
    w1.create_account();



    int choice;
    cout<<endl<<endl<<"                           ~~~~~~~~~~~~~~~~~~~~";
    cout<<endl<<endl<<"                    ***choose number to pick action***"<<endl;
    cout<<endl<<" 1. show my account data"<<endl;
    cout<<endl<<" 2. show my balance"<<endl;
    cin>>choice;
    switch(choice)
    {

    case 1:
    w1.print_account();
    break;




    }
    return 0;
}
