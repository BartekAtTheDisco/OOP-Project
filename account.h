#include <iostream>
#include "wallet.h"
#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

using namespace std;

class Account
:public Wallet
{



    public:
        void sign_in();
        void show_balance();
};





#endif // ACCOUNT_H_INCLUDED
