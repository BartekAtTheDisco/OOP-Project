#include <iostream>
#ifndef WALLET_H_INCLUDED
#define WALLET_H_INCLUDED





using namespace std;

class Wallet{
    string name_;
    string surname_;
    string login_;
    string password_;

public:
    void print_account();
    void create_account();
    Wallet(string name, string surname, string login, string password);
};




#endif // WALLET_H_INCLUDED
