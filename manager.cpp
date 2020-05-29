#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "manager.h"
#include "account.h"

using namespace std;

Manager::manager()
{
    //ctor
}


string Manager::log_in()
{
    string loginattempt, passwordattempt, login, password,word, name, surname;
    cout<<endl<<" login: ";
    cin>>loginattempt;
    cout<<endl<<" password: ";
    cin>>passwordattempt;

    bool check=true;
    fstream file;
    file.open("profile.txt", ios::in);
    while(file>>word)
    {
    login=word;
    file>>word;
    password=word;

    if((login==loginattempt)&&(password==passwordattempt))                                  // logowanie "na pałe" wszystko po kolei sprawdzamu
    {

        cout<<endl<<endl<<"                                                  **access approved**";
        file>>word;
        name=word;

        file>>word;
        surname=word;
        cout<<endl<<endl<<" HELLO "<<name<<" "<<surname<<" :)"<<endl;                       //przywitanie użytkownika
        Account acc[i].emplace_back{Account(login, password, name, surname)};               //wywołanie konstruktora account po zalogowaniu
        check=false;
    }
    }

    if(check==false)
         cout<<endl<<endl<<"                                                  **access denied**";

    file.close();
    return login;
}


void Manager::create_account()
{
    double zero = 0.0;
    string login, password,name,surname;
    cout<<endl<<" enter your new login: ";
    cin>>login;
    cout<<endl<<" enter your new password: ";
    cin>>password;
    cout<<endl<<" enter your name: ";
    cin>>name;
    cout<<endl<<" enter your surname: ";
    cin>>surname;                           //pobieranie danych do tworzenia konta

    fstream file;
    file.open("profile.txt", ios::out );
    if(file.good()==true)
    {

        file<<login<<" ";
        file<<password<<" ";
        file<<name<<" ";
        file<<surname<<" ";
        file<<zero<<" ";
        file<<zero<<" ";
        file<<zero<<" ";
        file<<zero<<" "<<endl;           //tworzenie konta ale tylko w pliku txt, ustawianie atrybutów jest dopiero w logowaniu
                                         //ponieważ po stworzeniu konta znowu wyświetli się menu *login/create_account/exit* i użytkownik i tak będzie musiał się zalogować
        cout<<endl<<"   *succes*";
    }
    else
        cout<<endl<<"   *error*";


    file.close();

}

