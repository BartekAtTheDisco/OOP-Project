#include <iostream>
#ifndef WALLET_H_INCLUDED
#define WALLET_H_INCLUDED





using namespace std;

class Wallet{
    string name_;
    string surname_;
    string login_;
    string password_;
    float BTC;
    float ETH;
    float LSK;

public:
    void print_account(string login, string password);
    void create_account();
    void sign_in(string login, string password);
    Wallet(string login, string password, string name, string surname);
    Wallet(string login, string password);
};




#endif // WALLET_H_INCLUDED
