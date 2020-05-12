#include "Cryptocurrency.hpp"
#include <iostream>



void Bitcoin::assign_current_value(float x){
    current_value = x;
}

void Ethereum::assign_current_value(float x){
    current_value = x;
}

void Lisk::assign_current_value(float x){
    current_value = x;
}

float Bitcoin::get_current_value(){
    return current_value;
}

float Ethereum::get_current_value(){
    return current_value;
}

float Lisk::get_current_value(){
    return current_value;
}


Bitcoin::Bitcoin()
    :current_value{0}{cout << "Initialising Bitcoin" << endl;}

Ethereum::Ethereum()
    :current_value{0}{cout << "Initialising Ethereum" << endl;}

Lisk::Lisk()
    :current_value{0}{cout << "Initialising Lisk" << endl;}