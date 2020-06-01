#include <iostream>
#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

using namespace std;

class Account
{
    string login;
    string password;
    string name;
    string surname;
    double EUR;
    double BTC;
    double ETH;
    double LTC;


    public:
        Account();
        Account(string login_, string password_, string name_, string surname_, double Euro, double BTC_, double ETH_, double LTC_);
        void show_balance();
        void load_eur();
        void show_accdata();
        void save_data();
};





#endif // ACCOUNT_H_INCLUDED

