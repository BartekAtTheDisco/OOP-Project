#include "Functions.hpp"

float check_BTC(){
    float btc_val = 37200;
    return btc_val;
}

float check_ETH(){
    float eth_val = 853;
    return eth_val;
}

float check_LSK(){
    float lsk_val = 5.13;
    return lsk_val;
}

void print_current_value(Cryptocurrency *x){
    cout << x->get_current_value() << endl;
}

