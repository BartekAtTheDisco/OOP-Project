#include <conio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "manager.h"
#include "account.h"
#include "cryptocurrency.h"
#include "functions.h"

using namespace std;

Manager::Manager()
{
    //ctor
}

void Manager::create_account()
{
    bool occupied_login;
    string login, password, name, surname, textline;
    fstream file;
    do {
        occupied_login = false;
        cout << "Enter login: ";
        cin >> login;
        cout << "Enter password: ";
        cin >> password;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your surname: ";
        cin >> surname;

        file.open("profile_data.txt", ios::in);
        vector<string> file_data;
        while (getline(file, textline))
            file_data.emplace_back(textline);

        for (int i = 0; i < file_data.size(); i += 9) {
            if (login == file_data.at(i)) {
                cout << "This login is already taken. Please choose another one." << endl;
                occupied_login = true;
            }
        }
        file.close();
    } while (occupied_login == true);
    file.open("profile_data.txt", ios::out | ios::app);
    file << login << endl;
    file << password << endl;
    file << name << endl;
    file << surname << endl;
    for (int i = 0; i < 4; i++)
        file << 0 << endl;
    file << "###" << endl;
    file.close();
}

Account Manager::sign_in()
{
    Account wrong_login;
    bool logged = false;
    string login, password, login_check, password_check, textline;
    do {
        int iterations = 0;
        cout << "Login: ";
        cin >> login;
        cout << "Password: ";
        cin >> password;
        fstream file;
        file.open("profile_data.txt", ios::in);
        vector<string> file_data;
        while (getline(file, textline))
            file_data.emplace_back(textline);
        for (int i = 0; i < file_data.size(); i += 9) {
            if (file_data.at(i) == login) {
                cout << file_data.at(i + 2) << " ";
                if (file_data.at(i + 1) == password) {
                    cout << "you have logged in successfully." << endl;
                    Account logged_object(file_data.at(i), file_data.at(i + 1), file_data.at(i + 2), file_data.at(i + 3), stod(file_data.at(i + 4)), stod(file_data.at(i + 5)), stod(file_data.at(i + 6)), stod(file_data.at(i + 7)));
                    return logged_object;
                }
                else {
                    cout << "Wrong login or password." << endl;
                    exit(0);
                }
            }
            else if (iterations == file_data.size() / 9 - 1) {
                cout << "Wrong login or password." << endl;
                cout << "1. Try again." << endl;
                cout << "2. Give up." << endl;
                int choice;
                cin >> choice;
                switch (choice) {
                case 1:
                    logged = false;
                    break;

                case 2:
                    logged = true;
                    break;
                }
            }
            iterations++;
        }
        file.close();
    } while (logged == false);
    return wrong_login;
}

void Manager::show_alldata()
{
    string textline;
    vector<string> data;
    fstream file;
    file.open("profile_data.txt", ios::in);
    while (getline(file, textline))
        data.emplace_back(textline);

    int accnumber = 0;
    for (int i = 0; i + 8 < data.size(); i += 9) {
        cout << endl
             << "   account no #" << accnumber + 1;
        cout << endl
             << " login: " << data[i];
        cout << endl
             << " password: " << data[i + 1];
        cout << endl
             << " name: " << data[i + 2];
        cout << endl
             << " surname: " << data[i + 3];
        cout << endl
             << " eur: " << data[i + 4];
        cout << endl
             << " bitcoin: " << data[i + 5];
        cout << endl
             << " ethereum: " << data[i + 6];
        cout << endl
             << " litecoin: " << data[i + 7] << endl;
        accnumber++;
    }
    file.close();
    cout << endl
         << "...press any key to continue...";
    getch();
}

void Manager::run()
{
    Bitcoin BTC;
    Ethereum ETH;
    Litecoin LTC;
    Cryptocurrency* ptr;
    ptr = &BTC;
    ptr->assign_current_value(check_BTC());
    ptr = &ETH;
    ptr->assign_current_value(check_ETH());
    ptr = &LTC;
    ptr->assign_current_value(check_LTC());

    int log, i = -1;
    bool end = false;
    vector<Account> acc;
    Manager manage;

    do {
        cout << endl
             << "              _| Welcome to the cryptocurrency stock simulator |_ " << endl;
        cout << endl
             << " 1.   SIGN IN";
        cout << endl
             << " 2.   CREATE ACCOUNT";
        cout << endl
             << " 0.   EXIT" << endl
             << endl
             << "      -------" << endl; //case 0: end=false
        cin >> log;
        switch (log) {
        case 1: {
            acc.emplace_back(manage.sign_in());
            i++;
            bool menu = false;
            do {
                int choice;
                cout << endl
                     << endl
                     << "                    ***choose number to pick action***" << endl;
                cout << endl
                     << " 1. show my account data" << endl;
                cout << endl
                     << " 2. show my balance" << endl;
                cout << endl
                     << " 3. load EUR to my account" << endl;
                cout << endl
                     << " 0. log out" << endl;
                cout << endl
                     << " click 9 to hack server and print data of all accounts" << endl;
                cin >> choice;

                switch (choice) {
                case 1:
                    acc[i].show_accdata();
                    break;

                case 2:
                    acc[i].show_balance();
                    break;

                case 3:
                    acc[i].load_eur();
                    break;

                case 9:
                    manage.show_alldata();
                    break;

                case 0:
                    menu = true;
                    break;
                }
            } while (menu == false);
            break;
        }

        case 2: {
            manage.create_account();
            break;
        }

        case 0: {
            cout << endl
                 << endl
                 << "   you have successfully closed STOCK SIMULATION (version 6.9.9.)";
            end = true;
            break;
        }
        }

    } while (end == false);
}
