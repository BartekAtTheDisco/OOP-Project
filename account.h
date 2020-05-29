#include <iostream>
#include "wallet.h"
#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

using namespace std;

class Account{

    string login_;
    string password_;
    string name_;
    string surname_;
    double eur_;


    public:
        Account();
        Account(string l,string p, string n, string s);
        void show_balance();
        void load_eur();
};





#endif // ACCOUNT_H_INCLUDED
