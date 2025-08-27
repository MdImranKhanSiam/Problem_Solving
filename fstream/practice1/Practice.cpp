#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <direct.h>

using namespace std;

int studentlogin();
int adminlogin();
int adminpage();
int loading();
int register_student();
int student_list();
int student_attendance();
int student_list_attendance();
int delete_all_student_record();
int delete_student_record();
int reset_admin();
int erase_database();

int main()
{
    while( 1 )
    {
        system("cls");
        int choice;

        cout << "\n\n Attendance Management System\n";
        cout << "--------------------------------\n\n";
        cout << "1. Student Login\n";
        cout << "2. Admin Login\n";
        cout << "0. Exit\n";
        cout << "\n\nEnter Your Choice: ";

        cin >> choice;

        switch( choice )
        {
        case 1:
            studentlogin();
            break;
        case 2:
            adminlogin();
            break;
        case 0:
            while( 1 )
            {
                system("cls");

                cout << "Are You Sure You Want To Exit?\n" << endl;
                cout << "If Yes, Type: y\nIf No, Type: n\n\nType: ";

                char yn;

                cin >> yn;

                if( yn == 'y' )
                    return 0;
                else if( yn == 'n' )
                    break;
                else
                {
                    cout << "Invalid! Try Again" << endl;
                    getch();
                }

            }

        }

    }

}


int studentlogin()
{

}

int adminlogin()
{
    system("cls");

    ofstream input;
    ifstream read;

    string username, pass;
    char check;

    read.open("Files/admin.txt");

    int success = 0;

    if( read )
    {
        read.close();

        while( success != 1 && success != 2 )
        {
            string ch_user, ch_pass;

            cout << "Enter Username: ";
            cin >> username;
            cout << "Enter Password: ";
            cin >> pass;

            read.open("Files/admin.txt");

            read >> ch_user >> ch_pass;

            read.close();

            if( ch_user == username && ch_pass == pass )
            {
                success = 1;
                break;
            }
            else if( ch_user == username && ch_pass != pass )
            {
                cout << "\nWrong Password";
            }
            else if( ch_user != username && ch_pass == pass )
            {
                cout << "\nWrong Username";
            }
            else if( ch_user != username && ch_pass != pass )
            {
                cout << "\nWrong Credentials";
            }

            cout << "\n\n1. Try Again";
            cout << "\n0. Return To Homepage";
            cout << "\n\nEnter Your Choice: ";

            int choice;

            cin >> choice;

            switch( choice )
            {
            case 1:
                break;
            case 0:
                success = 2;
                break;
            }

            system("cls");
        }
    }
    else
    {
        cout << "Set New Username: ";
        cin >> username;
        cout << "Set New Password: ";
        cin >> pass;
        cout << "\n...Successfully Saved...\nReturning To Homepage";

        mkdir("Files");

        input.open("Files/admin.txt");

        input << username << "\n" << pass;

        input.close();

        loading();
    }


    if( success == 1 )
    {
        cout << "\nLogging In";
        loading();
        adminpage();
    }


}


int adminpage()
{
    while( 1 )
    {
        system("cls");

        cout << "1. Register A Student" << endl;
        cout << "2. List Of Registered Students" << endl;
        cout << "3. Attendance Count Of A Student By ID" << endl;
        cout << "4. List Of Students With Attendance Count" << endl;
        cout << "5. Delete All Students Record" << endl;
        cout << "6. Delete Students Record By ID" << endl;
        cout << "7. Reset Admin Username & Password" << endl;
        cout << "8. Erase Total Database" << endl;

        cout << "\n\nEnter Your Choice: ";

        int choice;

        cin >> choice;

        switch( choice )
        {
        case 1:
            register_student();
            break;
        case 2:
            student_list();
            break;
        case 3:
            student_attendance();
            break;
        case 4:
            student_list_attendance();
            break;
        case 5:
            delete_all_student_record();
            break;
        case 6:
            delete_student_record();
            break;
        case 7:
            reset_admin();
            break;
        case 8:
            erase_database();
            break;
        }

    }


}

int loading()
{
    for( int i = 0; i < 5; i++ )
    {
        Sleep(150);
        cout << ".";
    }

    return 1;
}


int register_student()
{

}

int student_list()
{

}

int student_attendance()
{

}


int student_list_attendance()
{

}

int delete_all_student_record()
{

}

int delete_student_record()
{

}
int reset_admin()
{

}

int erase_database()
{

}


