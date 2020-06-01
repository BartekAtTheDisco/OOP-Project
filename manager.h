#include <iostream>
#include <string>
#include "account.h"
#ifndef MANAGER_H
#define MANAGER_H

using namespace std;

class Manager
{
    public:
    Manager();
    Account sign_in();
    void create_account();
    void show_alldata();

};

#endif // MANAGER_H
