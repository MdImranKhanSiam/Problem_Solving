#include <iostream>
#include <stdio.h>
#include <fstream>
#include <conio.h>
#include <direct.h>
#include <cstring>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;

void run_program();
void home_page();
void student_login();
void teacher_login();
void admin_login();
void student_page( string );
void teacher_page( string );
void admin_page();
void add_new_student();
void add_new_teacher();
void add_student_info();
void add_teacher_info();
void delete_student_info();
void delete_teacher_info();
void delete_entire_database();
void erase_database();
void loading();
void add_routine();
void edit_routine( string );
void show_routine( string );
void change_password( string, string );
void add_courses();
void edit_course( string );
void show_courses( string, int mode = 2 );
void show_student_profile( string );
void show_teacher_profile( string );
void show_all_student( string );
void show_all_teacher();
void update_semester();
void edit_semester( string );
void change_semester( string, string );
void add_notice();
void show_notice();
void show_all_notice();
void show_date_notice();
string choose_semester();
string choose_course( string );
void publish_result( string, string );
void show_result( string, string );
string grade_letter( string );
void show_attendance( string, string );
void show_date_attendance( string, string );
void take_attendance( string, string );

int main()
{
    run_program();

    return 0;
}

void run_program()
{
    mkdir("all_files");
    mkdir("all_files/student");
    mkdir("all_files/student/users");
    mkdir("all_files/student/user_data");
    mkdir("all_files/teacher");
    mkdir("all_files/teacher/users");
    mkdir("all_files/teacher/user_data");
    mkdir("all_files/admin");
    mkdir("all_files/other");
    mkdir("all_files/other/routine");
    mkdir("all_files/other/course");
    mkdir("all_files/other/course/all_course");
    mkdir("all_files/other/semester_info");
    mkdir("all_files/other/notice");
    mkdir("all_files/other/attendance");
    mkdir("all_files/other/attendance/teacher");
    mkdir("all_files/other/attendance/student");
    mkdir("all_files/other/result");

    home_page();
}

void home_page()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        cout << "1. Student Login" << endl;
        cout << "2. Teacher Login" << endl;
        cout << "3. Admin Login" << endl;
        cout << "0. Exit" << endl << endl;

        int choice;

        cout << "Enter Your Choice: ";

        cin >> choice;

        switch(choice)
        {
        case 1:
            student_login();
            break;
        case 2:
            teacher_login();
            break;
        case 3:
            admin_login();
            break;
        case 0:
            run = false;
            break;
        }
    }
}

void student_login()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        string id, password, check, location;

        cout << "Enter Student ID: ";
        cin >> id;

        ifstream read;

        location = "all_files/student/users/" + id + ".txt";

        read.open(location);

        if( read )
        {
            read >> check;

            read.close();

            cout << "Enter Password: ";
            cin >> password;

            if( password == check )
            {
                student_page( id );
                run = false;
            }
            else
            {
                cout << "\n\nWrong Credentials" << endl << endl;
                cout << "1. Try Again" << endl;
                cout << "0. Go Back" << endl;
                cout << "\nEnter Your Choice: ";

                int choice;

                cin >> choice;

                switch( choice )
                {
                case 0:
                    run = false;
                    break;
                }
            }
        }
        else
        {
            cout << "\n\nNot Found" << endl << endl;
            cout << "1. Try Again" << endl;
            cout << "0. Go Back" << endl;

            int choice;

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
            case 0:
                run = false;
                break;
            }
        }
    }
}

void teacher_login()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        string username, password, check, location;

        cout << "Enter Username: ";

        getchar();
        getline( cin, username );

        ifstream read;

        location = "all_files/teacher/users/" + username + ".txt";

        read.open(location);

        if( read )
        {
            read >> check;

            read.close();

            cout << "Enter Password: ";
            cin >> password;

            if( password == check )
            {
                teacher_page( username );
                run = false;
            }
            else
            {
                cout << "\n\nWrong Credentials" << endl << endl;
                cout << "1. Try Again" << endl;
                cout << "0. Go Back" << endl;
                cout << "\nEnter Your Choice: ";

                int choice;

                cin >> choice;

                switch( choice )
                {
                case 0:
                    run = false;
                    break;
                }
            }
        }
        else
        {
            cout << "\n\nNot Found" << endl << endl;
            cout << "1. Try Again" << endl;
            cout << "0. Go Back" << endl;

            int choice;

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
            case 0:
                run = false;
                break;
            }
        }
    }
}

void admin_login()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        string username, password;

        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if( username == "admin" && password == "admin" )
        {
            admin_page();
            run = false;
        }
        else
        {
            cout << "\nWrong Credentials" << endl << endl;
            cout << "1. Try Again" << endl;
            cout << "0. Return To Homepage" << endl << endl;

            int choice;

            cout << "Enter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
            case 0:
                run = false;
                break;
            }
        }
    }
}

void student_page( string id )
{
    system("cls");

    string location;

    ifstream read;

    location = "all_files/student/user_data/" + id + ".txt";

    read.open(location);

    if( read )
    {
        string garbage, welcome, semester;

        getline( read, garbage );

        getline( read, welcome );
        getline( read, garbage );
        getline( read, garbage );

        getline( read, semester );

        read.close();

        cout << "Welcome " << welcome;
        loading();

        bool run = true;

        while( run == true )
        {
            system("cls");

            cout << "1. Show Profile" << endl;
            cout << "2. Show Attendance" << endl;
            cout << "3. Show Routine" << endl;
            cout << "4. Course Details" << endl;
            cout << "5. Show Result" << endl;
            cout << "6. Show Notice" << endl;
            cout << "7. Show Teacher's Info" << endl;
            cout << "8. Show All Teacher's Info" << endl;
            cout << "9. Change Password" << endl;
            cout << "0. Return To Homepage" << endl;

            int choice;

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            string value, value2;

            switch(choice)
            {
            case 1:
                show_student_profile(id);
                break;
            case 2:
                show_attendance(id, semester);
                break;
            case 3:
                show_routine(semester);
                break;
            case 4:
                show_courses(semester);
                break;
            case 5:
                value2 = choose_semester();
                show_result(id, value2);
                break;
            case 6:
                show_notice();
                break;
            case 7:
                system("cls");
                cout << "Enter Teacher Name: ";
                getchar();
                getline(cin, value);
                show_teacher_profile(value);
                break;
            case 8:
                show_all_teacher();
                break;
            case 9:
                change_password("student", id);
                break;
            case 0:
                run = false;
                break;
            }
        }
    }
    else
    {
        cout << "No Details Added Yet" << endl << endl;

        cout << "Returning";
        loading();
    }
}

void teacher_page( string username )
{
    system("cls");

    string welcome, location;

    ifstream read;

    location = "all_files/teacher/user_data/" + username + ".txt";

    read.open(location);

    if( read )
    {
        getline( read, welcome );

        read.close();

        for( int i = 0; username[i] != '\0'; i++ )
        {
            if( i == 0 )
            {
                username.at(i) = toupper(username.at(i));
            }
            else if( isspace( username.at(i-1) ) )
            {
                username.at(i) = toupper(username.at(i));
            }
        }

        welcome = username;

        cout << "Welcome " << welcome;

        loading();

        bool run = true;

        while( run == true )
        {
            system("cls");

            cout << "1.  Show Profile" << endl;
            cout << "2.  Take Attendance" << endl;
            cout << "3.  Publish Result" << endl;
            cout << "4.  Show All Student" << endl;
            cout << "5.  Show Student Info" << endl;
            cout << "6.  Show Student Result" << endl;
            cout << "7.  Show Student Attendance" << endl;
            cout << "8.  Show Attendance History" << endl;
            cout << "9.  Show Routine" << endl;
            cout << "10. Show Course Details" << endl;
            cout << "11. Show Notice" << endl;
            cout << "12. Change Password" << endl;
            cout << "0.  Return To Homepage" << endl;

            int choice;

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            string value, value1, value2;

            switch(choice)
            {
            case 1:
                show_teacher_profile(username);
                break;
            case 2:
                value1 = choose_semester();
                value2 = choose_course( value1 );
                take_attendance( value1, value2 );
                break;
            case 3:
                value1 = choose_semester();
                value2 = choose_course(value1);
                publish_result( value1, value2 );
                break;
            case 4:
                value1 = choose_semester();
                show_all_student(value1);
                break;
            case 5:
                system("cls");
                cout << "Enter Student ID: ";
                cin >> value;
                show_student_profile(value);
                break;
            case 6:
                system("cls");
                cout << "Enter Student ID: ";
                cin >> value2;
                value1 = choose_semester();
                show_result(value2, value1);
                break;
            case 7:
                value1 = choose_semester();
                system("cls");
                cout << "Enter Student ID: ";
                cin >> value2;
                show_attendance(value2, value1);
                break;
            case 8:
                value1 = choose_semester();
                value2 = choose_course(value1);
                show_date_attendance(value1, value2);
                break;
            case 9:
                show_routine( choose_semester() );
                break;
            case 10:
                show_courses( choose_semester() );
                break;
            case 11:
                show_notice();
                break;
            case 12:
                change_password("teacher", username);
                break;
            case 0:
                run = false;
                break;
            }
        }
    }
    else
    {
        cout << "No Details Added Yet" << endl << endl;

        cout << "Returning";
        loading();
    }
}

void admin_page()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        cout << "1.  Add New Student" << endl;
        cout << "2.  Add New Teacher" << endl;
        cout << "3.  Add Student Info" << endl;
        cout << "4.  Add Teacher Info" << endl;
        cout << "5.  Delete Student Info" << endl;
        cout << "6.  Delete Teacher Info" << endl;
        cout << "7.  Delete Entire Database" << endl;
        cout << "8.  Add Routine" << endl;
        cout << "9.  Add Courses" << endl;
        cout << "10. Update Semester" << endl;
        cout << "11. Add Notice" << endl;
        cout << "12. Show Notice" << endl;
        cout << "13. Show All Teacher's Info" << endl;
        cout << "14. Show All Student" << endl;
        cout << "0.  Return To Homepage" << endl << endl;

        int choice;

        cout << "Enter Your Choice: ";

        cin >> choice;

        switch(choice)
        {
        case 1:
            add_new_student();
            break;
        case 2:
            add_new_teacher();
            break;
        case 3:
            add_student_info();
            break;
        case 4:
            add_teacher_info();
            break;
        case 5:
            delete_student_info();
            break;
        case 6:
            delete_teacher_info();
            break;
        case 7:
            delete_entire_database();
            break;
        case 8:
            add_routine();
            break;
        case 9:
            add_courses();
            break;
        case 10:
            update_semester();
            break;
        case 11:
            add_notice();
            break;
        case 12:
            show_notice();
            break;
        case 13:
            show_all_teacher();
            break;
        case 14:
            show_all_student(choose_semester());
            break;
        case 0:
            run = false;
            break;
        }
    }
}

void add_new_student()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        string id, password, location;

        cout << "Enter Student ID: ";
        cin >> id;

        location = "all_files/student/users/" + id + ".txt";

        ifstream read;

        read.open(location);

        if( read )
        {
            cout << "\nID Already Exists" << endl;
            cout << "1. Try Again" << endl;
            cout << "0. Go Back" << endl << endl;

            int choice;

            cout << "Enter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
            case 0:
                run = false;
                break;
            }
        }
        else
        {
            cout << "Enter New Password: ";
            cin >> password;

            ofstream input;

            location = "all_files/student/users/" + id + ".txt";

            input.open(location);

            input << password;

            input.close();

            run = false;

            input.open("all_files/student/users/root.txt", ios::app);

            input << id << endl;

            input.close();

            cout << "\nStudent Added Successfully" << endl << endl;

            cout << "Returning";

            loading();
        }

        read.close();
    }
}

void add_new_teacher()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        string username, password, location;

        cout << "Enter Full Name: ";
        getchar();
        getline(cin, username);

        location = "all_files/teacher/users/" + username + ".txt";

        ifstream read;

        read.open(location);

        if( read )
        {
            cout << "\nUsername Already Exists" << endl;
            cout << "1. Try Again" << endl;
            cout << "0. Go Back" << endl << endl;

            int choice;

            cout << "Enter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
            case 0:
                run = false;
                break;
            }
        }
        else
        {
            cout << "Enter New Password: ";
            cin >> password;

            ofstream input;

            location = "all_files/teacher/users/" + username + ".txt";

            input.open(location);

            input << password;

            input.close();

            run = false;

            input.open("all_files/teacher/users/root.txt", ios::app);

            input << username << endl;

            input.close();

            cout << "\nTeacher Added Successfully" << endl << endl;

            cout << "Returning";

            loading();
        }

        read.close();
    }
}

void add_student_info()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        string id, location;

        cout << "Enter Student ID: ";
        cin >> id;

        ifstream read1, read2, read3;
        ofstream write;

        location = "all_files/student/users/" + id + ".txt";

        read1.open(location);

        if( read1 )
        {
            location = "all_files/student/user_data/" + id + ".txt";

            read2.open(location);

            if( !read2 )
            {
                write.open(location);

                string info[12], store[12];

                info[0] = "Add Full Name: ";
                info[1] = "Add Father's Name: ";
                info[2] = "Add Mother's Name: ";
                info[3] = "Add Semester: ";
                info[4] = "Add Section: ";
                info[5] = "Add Group: ";
                info[6] = "Add Admission Session: ";
                info[7] = "Add Phone Number: ";
                info[8] = "Add Email: ";
                info[9] = "Add Date Of Birth(Day/Month/Year): ";
                info[10] = "Add Gender: ";
                info[11] = "Add Religion: ";

                getchar();

                for( int i = 0; i < 12; i++ )
                {
                    system("cls");

                    cout << info[i];

                    getline( cin, store[i] );
                }

                write << id << endl;

                for( int i = 0; i < 12; i++ )
                {
                    write << store[i] << endl;
                }

                write.close();

                system("cls");

                cout << "Info Added Succesfully" << endl;
                cout << "\nReturning";
                loading();

                run = false;
            }
            else
            {
                bool loop = true;

                location = "all_files/student/user_data/" + id + ".txt";

                read3.open(location);

                string info[13], value;

                int index = 0;

                while( getline(read3, value) )
                {
                    info[index] = value;

                    index++;
                }

                read3.close();

                while( loop == true )
                {
                    system("cls");

                    cout << "1.  Edit Full Name" << endl;
                    cout << "2.  Edit Father's Name" << endl;
                    cout << "3.  Edit Mother's Name" << endl;
                    cout << "4.  Edit Semester" << endl;
                    cout << "5.  Edit Section" << endl;
                    cout << "6.  Edit Group" << endl;
                    cout << "7.  Edit Admission Session" << endl;
                    cout << "8.  Edit Phone Number" << endl;
                    cout << "9.  Edit Email" << endl;
                    cout << "10. Edit Date Of Birth" << endl;
                    cout << "11. Edit Gender" << endl;
                    cout << "12. Edit Religion" << endl;
                    cout << "0.  Save Changes & Go Back" << endl;

                    int choice;

                    cout << "\nEnter Your Choice: ";
                    cin >> choice;

                    getchar();

                    cout << endl;

                    switch( choice )
                    {
                    case 1:
                        cout << "Enter Full Name: ";
                        getline( cin, info[1] );
                        break;
                    case 2:
                        cout << "Enter Father's Name: ";
                        getline( cin, info[2] );
                        break;
                    case 3:
                        cout << "Enter Mother's Name: ";
                        getline( cin, info[3] );
                        break;
                    case 4:
                        cout << "Enter Semester: ";
                        getline( cin, info[4] );
                        break;
                    case 5:
                        cout << "Enter Section: ";
                        getline( cin, info[5] );
                        break;
                    case 6:
                        cout << "Enter Group: ";
                        getline( cin, info[6] );
                        break;
                    case 7:
                        cout << "Enter Admission Session: ";
                        getline( cin, info[7] );
                        break;
                    case 8:
                        cout << "Enter Phone Number: ";
                        getline( cin, info[8] );
                        break;
                    case 9:
                        cout << "Enter Email: ";
                        getline( cin, info[9] );
                        break;
                    case 10:
                        cout << "Enter Date Of Birth(Day/Month/Year): ";
                        getline( cin, info[10] );
                        break;
                    case 11:
                        cout << "Enter Gender: ";
                        getline( cin, info[11] );
                        break;
                    case 12:
                        cout << "Enter Religion: ";
                        getline( cin, info[12] );
                        break;
                    case 0:
                        loop = false;
                        break;
                    }

                    if( loop == false )
                    {
                        ofstream write2;

                        location = "all_files/student/user_data/" + id + ".txt";

                        write2.open(location);

                        for( int i = 0; i < 13; i++ )
                        {
                            write2 << info[i] << endl;
                        }

                        write2.close();

                        cout << "\nChanges Saved Successfully" << endl;
                        cout << "Returning";
                        loading();
                    }
                }

                run = false;
            }

            read2.close();
        }
        else
        {
            cout << "\n\nNot Found" << endl << endl;
            cout << "1. Try Again" << endl;
            cout << "0. Go Back" << endl;


            int choice;

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
            case 0:
                run = false;
                break;
            }
        }

        read1.close();
    }
}

void add_teacher_info()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        string username, location;

        cout << "Enter Username: ";

        getchar();
        getline(cin, username);

        ifstream read1, read2, read3;
        ofstream write;

        location = "all_files/teacher/users/" + username + ".txt";

        read1.open(location);

        if( read1 )
        {
            location = "all_files/teacher/user_data/" + username + ".txt";

            read2.open(location);

            if( !read2 )
            {
                write.open(location);

                int length;

                length = 5;

                string info[length], store[length]; //Change Needed

                info[0] = "Add Educational Qualification: ";
                info[1] = "Add Phone Number: ";
                info[2] = "Add Email: ";
                info[3] = "Add Gender: ";
                info[4] = "Add Religion: ";

                for( int i = 0; i < length; i++ )
                {
                    system("cls");

                    cout << info[i];

                    getline( cin, store[i] );
                }

                for( int i = 0; i < length; i++ )
                {
                    write << store[i] << endl;
                }

                write.close();

                system("cls");

                cout << "Info Added Succesfully" << endl;
                cout << "\nReturning";
                loading();

                run = false;
            }
            else
            {
                bool loop = true;

                location = "all_files/teacher/user_data/" + username + ".txt";

                read3.open(location);

                int length;

                length = 5;

                string info[length], value;

                int index = 0;

                while( getline(read3, value) )
                {
                    info[index] = value;

                    index++;
                }

                read3.close();

                while( loop == true )
                {
                    system("cls");

                    cout << "1.  Edit Educational Qualification" << endl;
                    cout << "2.  Edit Phone Number" << endl;
                    cout << "3.  Edit Email" << endl;
                    cout << "4.  Edit Gender" << endl;
                    cout << "5.  Edit Religion" << endl;
                    cout << "0.  Save Changes & Go Back" << endl;

                    int choice;

                    cout << "\nEnter Your Choice: ";
                    cin >> choice;

                    getchar();

                    cout << endl;

                    switch( choice )
                    {
                    case 1:
                        cout << "Enter Educational Qualification: ";
                        getline( cin, info[0] );
                        break;
                    case 2:
                        cout << "Enter Phone Number: ";
                        getline( cin, info[1] );
                        break;
                    case 3:
                        cout << "Enter Email: ";
                        getline( cin, info[2] );
                        break;
                    case 4:
                        cout << "Enter Gender: ";
                        getline( cin, info[3] );
                        break;
                    case 5:
                        cout << "Enter Religion: ";
                        getline( cin, info[4] );
                        break;
                    case 0:
                        loop = false;
                        break;
                    }

                    if( loop == false )
                    {
                        ofstream write2;

                        location = "all_files/teacher/user_data/" + username + ".txt";

                        write2.open(location);

                        for( int i = 0; i < length; i++ )
                        {
                            write2 << info[i] << endl;
                        }

                        write2.close();

                        cout << "\nChanges Saved Successfully" << endl;
                        cout << "Returning";
                        loading();
                    }
                }

                run = false;
            }

            read2.close();
        }
        else
        {
            cout << "\n\nNot Found" << endl << endl;
            cout << "1. Try Again" << endl;
            cout << "0. Go Back" << endl;


            int choice;

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
            case 0:
                run = false;
                break;
            }
        }

        read1.close();
    }
}

void delete_student_info()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        string id, location;

        cout << "Enter Student ID: ";
        cin >> id;

        location = "all_files/student/users/" + id + ".txt";

        ifstream read;

        read.open(location);

        if( read )
        {
            read.close();

            const char* relock;

            relock = location.c_str();

            remove(relock);

            location = "all_files/student/user_data/" + id + ".txt";

            relock = location.c_str();

            remove(relock);

            cout << "\n\nInfo Removed Successfully" << endl;
            cout << "Returning";
            loading();

            run = false;
        }
        else
        {
            cout << "\n\nNot Found" << endl << endl;
            cout << "1. Try Again" << endl;
            cout << "0. Go Back" << endl;

            int choice;

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
            case 0:
                run = false;
                break;
            }
        }

    }
}

void delete_teacher_info()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        string username, location;

        cout << "Enter Username: ";
        cin >> username;

        location = "all_files/teacher/users/" + username + ".txt";

        ifstream read;

        read.open(location);

        if( read )
        {
            read.close();

            const char* relock;

            relock = location.c_str();

            remove(relock);

            location = "all_files/teacher/user_data/" + username + ".txt";

            relock = location.c_str();

            remove(relock);

            cout << "\n\nInfo Removed Successfully" << endl;
            cout << "Returning";
            loading();

            run = false;
        }
        else
        {
            cout << "\n\nNot Found" << endl << endl;
            cout << "1. Try Again" << endl;
            cout << "0. Go Back" << endl;

            int choice;

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
            case 0:
                run = false;
                break;
            }
        }

    }
}

void delete_entire_database()
{
    system("cls");

    string text;

    text = "Please Proceed With Cautions";

    for( auto i : text )
    {
        cout << i;
        Sleep(50);
    }

    cout << "\n\nDelete Entire Database" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;

    int choice;

    cout << "\nEnter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        erase_database();
        cout << "\nDatabase Deleted" << endl;
        cout << "\nReturning To Homepage";
        loading();
        break;
    case 2:
        cout << "\nCancelling Operation";
        loading();
        break;
    }
}

void erase_database()
{
    ifstream read;

    read.open("all_files/student/users/root.txt");

    string info, location;

    const char *c_string;

    while( getline(read, info) )
    {
        location = "all_files/student/users/" + info + ".txt";

        c_string = location.c_str();

        remove(c_string);
    }

    read.close();

    remove("all_files/student/users/root.txt");

    read.open("all_files/teacher/users/root.txt");

    while( getline(read, info) )
    {
        location = "all_files/teacher/users/" + info + ".txt";

        c_string = location.c_str();

        remove(c_string);
    }

    read.close();

    remove("all_files/teacher/users/root.txt");
}

void loading()
{
    for( int i = 0; i < 5; i++ )
    {
        cout << ".";
        Sleep(300);
    }
}

void add_routine()
{
    system("cls");

    cout << "Choose Semester" << endl << endl;

    cout << "1. 1st Semester" << endl;
    cout << "2. 2nd Semester" << endl;
    cout << "3. 3rd Semester" << endl;
    cout << "4. 4th Semester" << endl;
    cout << "5. 5th Semester" << endl;
    cout << "6. 6th Semester" << endl;
    cout << "7. 7th Semester" << endl;
    cout << "8. 8th Semester" << endl;

    int choice;

    cout << "\nEnter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        edit_routine("1st");
        break;
    case 2:
        edit_routine("2nd");
        break;
    case 3:
        edit_routine("3rd");
        break;
    case 4:
        edit_routine("4th");
        break;
    case 5:
        edit_routine("5th");
        break;
    case 6:
        edit_routine("6th");
        break;
    case 7:
        edit_routine("7th");
        break;
    case 8:
        edit_routine("8th");
        break;
    }

    cout << "Routine Added Successfully" << endl;
    cout << "Returning";
    loading();
}

void edit_routine( string semester )
{
    string location;

    const char* lock;

    location = "all_files/other/routine/" + semester;

    lock = location.c_str();

    mkdir(lock);

    ofstream write;

    string week[7];

    week[0] = "Saturday";
    week[1] = "Sunday";
    week[2] = "Monday";
    week[3] = "Tuesday";
    week[4] = "Wednesday";
    week[5] = "Thursday";
    week[6] = "Friday";

    for( int i = 0; i < 7; i++ )
    {
        bool run = true;

        location = "all_files/other/routine/" + semester + "/" + week[i] + ".txt";

        write.open(location);

        while( run == true )
        {
            string course, time;

            system("cls");

            cout << "Add Classes For " << week[i] << endl << endl;

            cout << "1. Add Class" << endl;
            cout << "0. Next" << endl;

            int choice;

            cout << "Enter Your Choice: ";
            cin >> choice;

            cout << endl;

            switch(choice)
            {
            case 1:
                cout << "Course Code: ";
                cin >> course;
                cout << "Time(00:00am - 00:00pm): ";
                getchar();
                getline(cin, time);
                write << course << endl << time << endl;
                break;
            case 0:
                run = false;
                write.close();
                break;
            }
        }
    }

    system("cls");
}

void show_routine( string semester )
{
    system("cls");

    string location, week[7];

    week[0] = "Saturday";
    week[1] = "Sunday";
    week[2] = "Monday";
    week[3] = "Tuesday";
    week[4] = "Wednesday";
    week[5] = "Thursday";
    week[6] = "Friday";

    ifstream read;

    for( int i = 0; i < 7; i++ )
    {
        location = "all_files/other/routine/" + semester + "/" + week[i] + ".txt";

        read.open(location);

        cout << "----------" << week[i] << "----------" << endl;

        string classes;

        int turn = 0;
        bool enter = false;

        while( getline(read, classes) )
        {
            enter = true;

            cout << classes;

            if( turn % 2 == 0 )
            {
                cout << " -> ";
            }
            else
            {
                cout << endl;
            }

            turn++;
        }

        if( enter == false )
        {
            cout << "No Classes" << endl;
        }

        cout << endl;

        read.close();
    }

    cout << "\nPress Any Key To Return";

    getch();
}

void change_password( string type, string user )
{
    system("cls");

    string location, password;

    location = "all_files/" + type + "/users/" + user + ".txt";

    ofstream write;

    write.open(location);

    cout << "Enter New Password: ";
    cin >> password;

    write << password;

    write.close();

    cout << "\nPassword Changed Successfully\n\nReturning";
    loading();
}

void add_courses()
{
    system("cls");

    cout << "Choose Semester" << endl << endl;

    cout << "1. 1st Semester" << endl;
    cout << "2. 2nd Semester" << endl;
    cout << "3. 3rd Semester" << endl;
    cout << "4. 4th Semester" << endl;
    cout << "5. 5th Semester" << endl;
    cout << "6. 6th Semester" << endl;
    cout << "7. 7th Semester" << endl;
    cout << "8. 8th Semester" << endl;

    int choice;

    cout << "\nEnter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        edit_course("1st");
        break;
    case 2:
        edit_course("2nd");
        break;
    case 3:
        edit_course("3rd");
        break;
    case 4:
        edit_course("4th");
        break;
    case 5:
        edit_course("5th");
        break;
    case 6:
        edit_course("6th");
        break;
    case 7:
        edit_course("7th");
        break;
    case 8:
        edit_course("8th");
        break;
    }

    cout << "Courses Added Successfully" << endl;
    cout << "Returning";
    loading();
}

void edit_course( string semester )
{
    string location, location2, location3;

    location = "all_files/other/course/" + semester + ".txt";

    ofstream write, write2, write3;
    ifstream read1;

    write.open(location);

    bool run = true;

    while( run == true )
    {
        system("cls");

        cout << "Add Courses For " << semester << " Semester" << endl << endl;

        cout << "1. Add Course" << endl;
        cout << "0. Save & Return" << endl;

        int choice;

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        string subject, code, credit;

        cout << endl;

        switch(choice)
        {
        case 1:
            cout << "Subject Code: ";
            cin >> code;
            cout << "Subject Name: ";
            getchar();
            getline(cin, subject);
            cout << "Credit: ";
            cin >> credit;
            write << code << endl << subject << endl;
            location2 = "all_files/other/course/all_course/" + code + ".txt";
            read1.open(location2);
            if( !read1 )
            {
                write2.open(location2);
                write2 << subject << endl << credit << endl;
                write2.close();

                location3 = "all_files/other/course/all_course/root.txt";

                write3.open(location3, ios::app);

                write3 << code << endl;

                write3.close();
            }
            read1.close();
            break;
        case 0:
            run = false;
            write.close();
            break;
        }
    }
}

void show_courses( string semester, int mode )
{
    system("cls");

    string location, value;

    location = "all_files/other/course/" + semester + ".txt";

    ifstream read;

    read.open(location);

    int turn = 0, serial = 1;

    cout << semester << " Semester" << endl << endl;

    while( getline(read, value) )
    {
        if( turn % 2 == 0 )
        {
            if(serial < 10)
            {
                cout << " ";
            }

            cout << serial++ << ". ";

            int length;

            length = value.size();

            for( int i = 0; i < 14; i++ )
            {
                if( i < length )
                {
                    cout << value.at(i);
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            cout << value;

            cout << endl << endl;
        }

        turn++;
    }

    if( mode == 2 )
    {
        cout << "\nPress Any Key To Return";
        getch();
    }
}

void show_student_profile( string id )
{
    system("cls");

    string location, info[13], value;

    location = "all_files/student/user_data/" + id + ".txt";

    ifstream read;

    read.open(location);

    if( read )
    {
        info[0] = "Student ID";
        info[1] = "Name";
        info[2] = "Father's Name";
        info[3] = "Mother's Name";
        info[4] = "Semester";
        info[5] = "Section";
        info[6] = "Group";
        info[7] = "Admission Session";
        info[8] = "Phone Number";
        info[9] = "Email";
        info[10] = "Date Of Birth";
        info[11] = "Gender";
        info[12] = "Religion";

        for( int i = 0; i < 13; i++ )
        {
            int length;

            length = info[i].size();

            for( int j = 0; j < 20; j++ )
            {
                if( j < length )
                {
                    cout << info[i].at(j);
                }
                else
                {
                    cout << " ";
                }
            }

            getline( read, value );

            cout << ": " << value << endl;
        }

        read.close();

        cout << "\nPress Any Key To Return";
        getch();
    }
    else
    {
        cout << "Not Found" << endl;
        cout << "\nPress Any Key To Return";
        getch();
    }
}

void show_teacher_profile( string username )
{
    system("cls");

    int total;

    total = 6;

    string location, info[total], value;

    for( int i = 0; username[i] != '\0'; i++ )
    {
        if( i == 0 )
        {
            username.at(i) = toupper(username.at(i));
        }
        else if( isspace( username.at(i-1) ) )
        {
            username.at(i) = toupper(username.at(i));
        }
    }

    location = "all_files/teacher/user_data/" + username + ".txt";

    ifstream read;

    read.open(location);

    if( read )
    {
        info[0] = "Name";
        info[1] = "Educational Qualification";
        info[2] = "Phone Number";
        info[3] = "Email";
        info[4] = "Gender";
        info[5] = "Religion";

        for( int i = 0; i < total; i++ )
        {
            int length;

            length = info[i].size();

            for( int j = 0; j < 30; j++ )
            {
                if( j < length )
                {
                    cout << info[i].at(j);
                }
                else
                {
                    cout << " ";
                }
            }

            if( i == 0 )
            {
                value = username;
            }
            else
            {
                getline( read, value );
            }

            cout << ": " << value << endl;
        }

        read.close();

        cout << "\nPress Any Key To Return";
        getch();

    }
    else
    {
        cout << "Not Found" << endl;
        cout << "\nPress Any Key To Return";
        getch();
    }
}

void show_all_student( string semester )
{
    system("cls");

    string location1, location2;

    string value1;

    string name;

    ifstream read1, read2;

    location1 = "all_files/other/semester_info/" + semester + ".txt";

    read1.open(location1);

    while( getline(read1, value1) )
    {
        cout << "ID: " << value1 << " __ ";

        location2 = "all_files/student/user_data/" + value1 + ".txt";

        read2.open(location2);

        if( read2 )
        {
            getline(read2, name);
            getline(read2, name);

            if( name == "" )
            {
                cout << "No Details Added Yet" << endl << endl;
            }
            else
            {
                cout << name << endl << endl;
            }
        }
        else
        {
            cout << "No Details Added Yet" << endl << endl;
        }

        read2.close();
    }

    read1.close();

    cout << "\n\nPress Any Key To Return";

    getch();
}

void show_all_teacher()
{
    system("cls");

    string location1, location2;

    string value1;

    string education, number, email;

    ifstream read1, read2;

    location1 = "all_files/teacher/users/root.txt";

    read1.open(location1);

    while( getline(read1, value1) )
    {
        cout << value1 << " __ ";

        location2 = "all_files/teacher/user_data/" + value1 + ".txt";

        read2.open(location2);

        if( read2 )
        {
            getline(read2, education);
            getline(read2, number);
            getline(read2, email);

            cout << education << " __ " << number << " __ " << email << endl << endl;
        }
        else
        {
            cout << "No Details Added Yet" << endl << endl;
        }

        read2.close();
    }

    read1.close();

    cout << "\n\nPress Any Key To Return";

    getch();
}

void update_semester()
{
    system("cls");

    cout << "Choose Semester" << endl << endl;

    cout << "1. 1st Semester" << endl;
    cout << "2. 2nd Semester" << endl;
    cout << "3. 3rd Semester" << endl;
    cout << "4. 4th Semester" << endl;
    cout << "5. 5th Semester" << endl;
    cout << "6. 6th Semester" << endl;
    cout << "7. 7th Semester" << endl;
    cout << "8. 8th Semester" << endl;

    int choice;

    cout << "\nEnter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        edit_semester("1st");
        break;
    case 2:
        edit_semester("2nd");
        break;
    case 3:
        edit_semester("3rd");
        break;
    case 4:
        edit_semester("4th");
        break;
    case 5:
        edit_semester("5th");
        break;
    case 6:
        edit_semester("6th");
        break;
    case 7:
        edit_semester("7th");
        break;
    case 8:
        edit_semester("8th");
        break;
    }

    cout << "Semester Updated Successfully" << endl;
    cout << "Returning";
    loading();
}

void edit_semester( string semester )
{
    string location, value;

    location = "all_files/other/semester_info/" + semester + ".txt";

    ofstream write;

    bool run = true;

    while( run == true )
    {
        system("cls");

        cout << "1. Reset Semester" << endl;
        cout << "2. Add Student" << endl;
        cout << "0. Return" << endl;

        int choice;

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            system("cls");
            write.open(location);
            int total;
            cout << "Number Of Student: ";
            cin >> total;
            for( int i = 1; i <= total; i++ )
            {
                system("cls");
                cout << total-i+1 << " Left" << endl << endl;
                cout << "Enter ID: ";
                cin >> value;
                write << value << endl;
                change_semester( value, semester );
            }
            write.close();
            break;
        case 2:
            write.open(location, ios::app);
            cout << "\nEnter ID: ";
            cin >> value;
            write << value << endl;
            change_semester( value, semester );
            write.close();
            break;
        case 0:
            run = false;
            break;
        }
    }
}

void change_semester( string id, string semester )
{
    string location, value, info[13];

    int index = 0;

    location = "all_files/student/user_data/" + id + ".txt";

    ifstream read;
    ofstream write;

    read.open(location);

    while( getline(read, value) )
    {
        info[index] = value;

        index++;
    }

    read.close();

    info[4] = semester;

    write.open(location);

    for( int i = 0; i < 13; i++ )
    {
        write << info[i] << endl;
    }

    write.close();
}

void add_notice()
{
    system("cls");

    string date, notice, location, location2;

    cout << "Enter Date(Day-Month-Year): ";
    cin >> date;

    system("cls");

    cout << "Start Typing The Notice" << endl << endl;
    getchar();
    getline( cin, notice );

    ofstream write;

    ifstream write2;

    location2 = "all_files/other/notice/" + date + ".txt";

    write2.open(location2);

    if( !write2 )
    {
        location = "all_files/other/notice/root.txt";

        write.open(location, ios::app);

        write << date << endl;

        write.close();
    }

    write2.close();

    location = "all_files/other/notice/" + date + ".txt";

    write.open(location, ios::app);

    write << notice << endl << "NEXT NOTICE" << endl;

    system("cls");

    cout << "Notice Added Successfully\n\nReturning";

    loading();

}

void show_notice()
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        cout << "1. Show All Notice" << endl;
        cout << "2. Show Notice By Date" << endl;
        cout << "0. Go Back" << endl;

        int choice;

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            show_all_notice();
            break;
        case 2:
            show_date_notice();
            break;
        case 0:
            run = false;
            break;
        }
    }
}

void show_all_notice()
{
    system("cls");

    string location, value1, value2;

    location = "all_files/other/notice/root.txt";

    ifstream read1, read2;

    read1.open(location);

    while( getline(read1, value1) )
    {
        location = "all_files/other/notice/" + value1 + ".txt";

        read2.open(location);

        cout << value1 << endl << "________________" << endl << endl;

        while( getline(read2, value2) )
        {
            if( value2 == "NEXT NOTICE" )
            {
                cout << endl << endl;
            }
            else
            {
                cout << value2;
            }
        }

        cout << endl;

        read2.close();
    }

    cout << "Press Any Key To Return";

    getch();

    read1.close();
}

void show_date_notice()
{
    system("cls");

    string date, location, value;

    cout << "Enter Date(Day-Month-Year): ";
    cin >> date;

    system("cls");

    location = "all_files/other/notice/" + date + ".txt";

    ifstream read;

    read.open(location);

    bool found = false;

    while( getline(read, value) )
    {
        found = true;

        if( value == "NEXT NOTICE" )
        {
            cout << endl << endl;
        }
        else
        {
            cout << value;
        }
    }

    if( found == false )
    {
        cout << "No Notice" << endl;
    }

    cout << "\nPress Any Key To Return";

    getch();
}

string choose_semester()
{
    system("cls");

    cout << "Choose Semester" << endl << endl;

    cout << "1. 1st Semester" << endl;
    cout << "2. 2nd Semester" << endl;
    cout << "3. 3rd Semester" << endl;
    cout << "4. 4th Semester" << endl;
    cout << "5. 5th Semester" << endl;
    cout << "6. 6th Semester" << endl;
    cout << "7. 7th Semester" << endl;
    cout << "8. 8th Semester" << endl;

    int choice;

    cout << "\nEnter Your Choice: ";
    cin >> choice;

    string value;

    switch(choice)
    {
    case 1:
        value = "1st";
        break;
    case 2:
        value = "2nd";
        break;
    case 3:
        value = "3rd";
        break;
    case 4:
        value = "4th";
        break;
    case 5:
        value = "5th";
        break;
    case 6:
        value = "6th";
        break;
    case 7:
        value = "7th";
        break;
    case 8:
        value = "8th";
        break;
    }

    return value;
}

string choose_course( string semester )
{
    system("cls");

    show_courses( semester, 1 );

    int choice;

    cout << "\nChoose Course: ";
    cin >> choice;

    string location1, value1, ans;

    location1 = "all_files/other/course/" + semester + ".txt";

    ifstream read1;

    read1.open(location1);

    int turn = -1, loop = 1;

    while( getline(read1, value1) )
    {
        turn++;

        if( turn % 2 != 0 )
        {
            continue;
        }

        if( loop == choice )
        {
            ans = value1;
            break;
        }

        loop++;
    }

    read1.close();

    return ans;
}

void take_attendance( string semester, string course )
{
    system("cls");

    string date, location1, location2, value1, value2;

    const char* lock;

    cout << "Enter Date(Day-Month-Year): ";
    cin >> date;

    location2 = "all_files/other/attendance/teacher/" + semester;

    lock = location2.c_str();

    mkdir(lock);

    location2 = "all_files/other/attendance/teacher/" + semester + "/" + course;

    lock = location2.c_str();

    mkdir(lock);

    location1 = "all_files/other/semester_info/" + semester + ".txt";

    ifstream read1;
    ofstream write1, write2;

    read1.open(location1);

    location2 = "all_files/other/attendance/teacher/" + semester + "/" + course + "/" + date + ".txt";

    write1.open(location2);

    while( getline(read1, value1) )
    {
        system("cls");

        cout << value1 << endl << endl;

        cout << "1. Present" << endl;
        cout << "2. Absent" << endl;

        int choice;

        cout << "\nEnter: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            value2 = "Present";
            break;
        case 2:
            value2 = "Absent";
            break;
        }

        write1 << value1 << endl << value2 << endl;


        string location4;

        const char* lock3;

        location4 = "all_files/other/attendance/student/" + value1;

        lock3 = location4.c_str();

        mkdir(lock3);

        location4 = "all_files/other/attendance/student/" + value1 + "/" + semester;

        lock3 = location4.c_str();

        mkdir(lock3);

        location4 = "all_files/other/attendance/student/" + value1 + "/" + semester + "/" + course + ".txt";

        write2.open(location4, ios::app);

        write2 << value2 << endl;

        write2.close();
    }

    write1.close();

    read1.close();
}

void show_attendance( string id, string semester )
{
    system("cls");

    string location1, location2, location3;
    string value1, value2, value3;

    location1 = "all_files/other/course/all_course/root.txt";

    ifstream read1, read2, read3;

    read1.open(location1);

    int countt = 0;

    while( getline(read1, value1) )
    {
        location2 = "all_files/other/attendance/student/" + id + "/" + semester + "/" + value1 + ".txt";

        read2.open(location2);

        bool found = false;

        double percent, total = 0, present = 0, absent = 0;

        while( getline(read2, value2) )
        {
            found = true;

            if( value2 == "Present" )
            {
                present++;
            }
            else if( value2 == "Absent" )
            {
                absent++;
            }

            total++;
        }

        read2.close();

        if( found == true )
        {
            countt++;

            percent = (100/total) * present;

            cout << countt << ". ";

            int length;

            length = value1.size();

            for( int i = 0; i < 11; i++ )
            {
                if( i < length )
                {
                    cout << value1.at(i);
                }
                else
                {
                    cout << " ";
                }
            }

            location3 = "all_files/other/course/all_course/" + value1 + ".txt";

            read3.open(location3);

            getline(read3, value3);

            read3.close();

            length = value3.size();

            for( int i = 0; i < 36; i++ )
            {
                if( i < length )
                {
                    cout << value3.at(i);
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "| Present - ";

            if( present < 10.0 )
            {
                cout << "0";
            }

            cout << present << " | Absent - ";

            if( absent < 10.0 )
            {
                cout << "0";
            }

            cout << absent << " | Attendance - ";

            printf("%.2lf", percent);

            cout << "%" << endl;
        }
    }

    read1.close();

    cout << "\n\nPress Any Key To Return";
    getch();
}

void show_date_attendance( string semester, string course )
{
    system("cls");

    string date;

    cout << "Enter Date(Day-Month-Year): ";
    cin >> date;

    system("cls");

    cout << "Semester        : " << semester << endl;
    cout << "Course Code     : " << course << endl;
    cout << "Attendance Date : " << date << endl << endl;

    string location1;

    string value1;

    ifstream read1;

    location1 = "all_files/other/attendance/teacher/" + semester + "/" + course + "/" + date + ".txt";

    read1.open(location1);

    int turn = 0;

    while( getline(read1, value1) )
    {
        if( turn % 2 == 0 )
        {
            cout << value1 << " - ";
        }
        else
        {
            cout << value1 << endl << endl;
        }

        turn++;
    }

    read1.close();

    cout << "\n\nPress Any Key To Return";

    getch();
}

void publish_result( string semester, string course )
{
    bool run = true;

    while( run == true )
    {
        system("cls");

        cout << "1. Add Result" << endl;
        cout << "0. Go Back" << endl;

        int choice;

        bool edit = false;

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            edit = true;
            break;
        case 0:
            run = false;
            break;
        }

        if( edit == true )
        {
            system("cls");

            string id, grade;

            cout << "Enter Student ID: ";
            cin >> id;

            string location1;

            const char* lock1;

            ofstream write1;

            location1 = "all_files/other/result/" + id;

            lock1 = location1.c_str();

            mkdir(lock1);

            location1 = "all_files/other/result/" + id + "/" + semester;

            lock1 = location1.c_str();

            mkdir(lock1);

            location1 = "all_files/other/result/" + id + "/" + semester + "/" + course + ".txt";

            write1.open(location1);

            cout << "\n\nEnter Grade Point: ";
            cin >> grade;

            write1 << grade << endl;

            write1.close();
        }
    }
}

string grade_letter( string point )
{
    string letter;

    if( point == "4.00" )
    {
        letter = "A+";
    }
    else if( point == "3.75" )
    {
        letter = "A";
    }
    else if( point == "3.50" )
    {
        letter = "A-";
    }
    else if( point == "3.25" )
    {
        letter = "B+";
    }
    else if( point == "3.00" )
    {
        letter = "B";
    }
    else if( point == "2.75" )
    {
        letter = "B-";
    }
    else if( point == "2.50" )
    {
        letter = "C+";
    }
    else if( point == "2.25" )
    {
        letter = "C";
    }
    else if( point == "2.00" )
    {
        letter = "D";
    }
    else if( point == "0.00" )
    {
        letter = "F";
    }

    return letter;
}

void show_result( string id, string semester )
{
    system("cls");

    string location1, location2, location3, location4;

    string value1, value2, value3, value4, credit;

    ifstream read1, read2, read3, read4;

    location3 = "all_files/student/user_data/" + id + ".txt";

    read3.open(location3);

    getline(read3, value3);
    getline(read3, value3);

    read3.close();

    cout << "Student Name   : " << value3 << endl;
    cout << "Student ID     : " << id << endl;
    cout << "Semester       : " << semester << endl << endl;

    location1 = "all_files/other/course/all_course/root.txt";

    read1.open(location1);

    int countt = 0;

    double total_credit = 0, number = 0, point, credit1, quality_point = 0, cgpa;

    while( getline(read1, value1) )
    {
        location2 = "all_files/other/result/" + id + "/" + semester + "/" + value1 + ".txt";

        read2.open(location2);

        if( read2 )
        {
            countt++;
            number++;

            if( countt < 10 )
            {
                cout << " ";
            }

            cout << countt << ". ";

            int length;

            length = value1.size();

            for( int i = 0; i < 17; i++ )
            {
                if( i < length )
                {
                    cout << value1.at(i);
                }
                else
                {
                    cout << " ";
                }
            }

            location4 = "all_files/other/course/all_course/" + value1 + ".txt";

            read4.open(location4);

            getline(read4, value4);
            getline(read4, credit);

            read4.close();

            length = value4.size();

            for( int i = 0; i < 42; i++ )
            {
                if( i < length )
                {
                    cout << value4.at(i);
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "| Grade Point - ";

            getline(read2, value2);

            cout << value2;

            point = stod(value2);
            credit1 = stod(credit);

            total_credit += credit1;

            quality_point += credit1 * point;

            cout << " | Grade Letter - " << grade_letter(value2) << endl;
        }

        read2.close();
    }

    cout << endl;

    if( countt == 0 )
    {
        cout << "Not Published Yet" << endl;
    }
    else
    {
        cgpa = quality_point / total_credit;

        cout << "CGPA : ";

        printf("%0.2lf", cgpa);

        cout << endl;
    }

    read1.close();

    cout << "\n\nPress Any Key To Return";

    getch();
}


