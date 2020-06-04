#include "Functions.hpp"

double check_BTC(){
    double btc_val = 8500;
    return btc_val;
}

double check_ETH(){
    double eth_val = 215;
    return eth_val;
}

double check_LTC(){
    double ltc_val = 40;
    return ltc_val;
}

void print_current_value(Cryptocurrency *x){
    cout << x->get_current_value() << endl;
}


