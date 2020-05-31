#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "manager.h"
#include "account.h"

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
    do
    {
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
    while(getline(file,textline))
        file_data.emplace_back(textline);
    for(int i=0; i<file_data.size(); i+=9)
    {
        if(login == file_data.at(i))
        {
            cout << "This login is already taken. Please choose another one." << endl;
            occupied_login = true;
        }
    }
    file.close();
    }while(occupied_login == true);
    file.open("profile_data.txt", ios::out | ios::app);
    file << login << endl;
    file << password << endl;
    file << name << endl;
    file << surname << endl;
    for(int i=0; i<4; i++)
        file << 0 << endl;
    file << "###" << endl;
    file.close();
}

Account Manager::sign_in()
{
    Account wrong_login;
    bool logged = false;
    string login, password, login_check, password_check, textline;
    do{
    int iterations = 0;
    cout << "Login: ";
    cin >> login;
    cout << "Password: ";
    cin >> password;
    fstream file;
    file.open("profile_data.txt", ios::in);
    vector<string> file_data;
    while(getline(file,textline))
        file_data.emplace_back(textline);
    for(int i=0; i<file_data.size(); i+=9)
    {
        if (file_data.at(i) == login)
        {
            cout << file_data.at(i);
            if(file_data.at(i+1) == password)
            {
                cout << "You have logged in successfully." << endl;
                Account logged_object(file_data.at(i+2), file_data.at(i+3), stod(file_data.at(i+4)), stod(file_data.at(i+5)), stod(file_data.at(i+6)), stod(file_data.at(i+7)));
                return logged_object;
            }
            else
            {
                cout << "Wrong login or password." << endl;
                exit(0);
            }
        }
        else if(iterations == file_data.size()/9-1)
        {
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
    }while(logged == false);
    return wrong_login;
}


void Manager::print_alldata()
{
    string textline;
    vector <string> data;
    fstream file;
    file.open("profile_data.txt" , ios::in);
    while(getline(file,textline))
        data.emplace_back(textline);

    int accnumber=0;
    for(int i=0 ; i+8<data.size() ; i=i+9)
    {
        cout<<endl<<"   account no #"<<accnumber+1;
        cout<<endl<<" login: "<<data[i];
        cout<<endl<<" password: "<<data[i+1];
        cout<<endl<<" name: "<<data[i+2];
        cout<<endl<<" surname: "<<data[i+3];
        cout<<endl<<" eur: "<<data[i+4];
        cout<<endl<<" bitcoin: "<<data[i+5];
        cout<<endl<<" ethereum: "<<data[i+6];
        cout<<endl<<" litecoin: "<<data[i+7]<<endl;
        accnumber++;
    }
    file.close();
}
