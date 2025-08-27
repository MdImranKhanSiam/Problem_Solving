#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <direct.h>


using namespace std;

map<string,int>users;

void run();
void login_page();
void map_loading();

int main()
{
    run();

    return 0;
}


void run()
{
    //if( )

    mkdir("all_files");

    map_loading();

    login_page();
}

void login_page()
{
    ofstream set_info;

    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    mkdir("users");

    set_info.open("all_files/users/username.txt");


}

void map_loading()
{
    ifstream get_info;

    get_info.open("all_files/users.txt");
}
