#include <bits/stdc++.h>

using namespace std;

class Student{

private:
    static int total_students;
    int student_id;
    string full_name;

public:

    void add_student( int, string );
    void view_info( void );

};

void Student::add_student( int x, string y )
{
    student_id = x;
    full_name = y;

    total_students++;
}

void Student::view_info( void )
{
    cout << "Name: " << full_name << endl;
    cout << "Id: " << student_id << endl;

    cout << "Total Students: " << total_students << endl;
}

int Student::total_students = 20;

int main()
{
    Student Imran, Siam, Khan;

    Imran.add_student(12221110, "Md Imran Khan Siam");
    Siam.add_student(12221111, "Md Siam Khan");
    Khan.add_student(12221112, "Md Khan");

    Imran.view_info();
    Siam.view_info();


}
