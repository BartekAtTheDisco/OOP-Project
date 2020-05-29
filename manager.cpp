#include "manager.h"
#include <string>
#include <iostream>
#include <fstream>

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

    if((login==loginattempt)&&(password==passwordattempt))
    {

        cout<<endl<<endl<<"                                                  **access approved**";
        file>>word;
        name=word;

        file>>word;
        surname=word;
        cout<<endl<<endl<<" HELLO "<<name<<" "<<surname<<" :)"<<endl;
        check=false;
    }
    }

    if(check==false)
         cout<<endl<<endl<<"                                                  **access denied**";

    file.close();
    return login;
}
