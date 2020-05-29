#include <iostream>
#include "wallet.h"
#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

using namespace std;

class Account{

    string _name;
    string _surname;
    double eur_;


    public:
        Account();
        void show_balance();
        void load_eur();
};





#endif // ACCOUNT_H_INCLUDED
