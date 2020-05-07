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
    string x, y, login, password,line;
    cout<<endl<<" login: ";
    cin>>x;
    cout<<endl<<" password: ";
    cin>>y;

    fstream file;
    file.open("profile.txt", ios::in);
    getline(file,line);
    login=line;
    getline(file,line);
    password=line;
    file.close();
    cout<<login;
    cout<<password;
    if((login==x)&&(password==y))
    {
        cout<<endl<<endl<<"                                                        **access approved**";
    }
    else
        cout<<endl<<endl<<"                                                        **access denied**";

    break;
    }

case 2:
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






    }
    return 0;
}
