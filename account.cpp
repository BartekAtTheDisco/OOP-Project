#include <iostream>
#include <fstream>
#include <sstream>
#include "account.h"
#include "wallet.h"

using namespace std;

Account::Account()
:eur_{0.0}
{

}


Account::Account(string l,string p, string n, string s)
:login_{l},password_{p},name_{n},surname_{s}
    {

    }
/*

void Account::load_eur()

{
    double dep,eur;
    string word,word1,x;

    cout<<endl<<"How much money do you want to deposit?"<<endl<<"EUR: ";
    cin>>dep;


    fstream file;
    file.open("profile.txt", ios::in | ios::out);
    while(file>>word)
    {
        file>>word1;
        if(word==_login && word1==_password)
        {
            file>>skipws>>x>>x;
            file>>eur;
            eur+=dep;
            file>>x>>x>>x>>x;
            file<<eur;


        }
    }
    file.close();

}
