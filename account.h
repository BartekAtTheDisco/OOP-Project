#include <iostream>
#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

using namespace std;

class Account{

    string name;
    string surname;
    double Eur;
    double BTC;
    double ETH;
    double LTC;


    public:
        Account();
        Account(string name, string surname, double Euro, double BTC, double ETH, double LTC);
        void show_balance();
        void load_eur();
        void show_accdata();
};





#endif // ACCOUNT_H_INCLUDED
