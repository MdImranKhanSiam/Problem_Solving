/*
9. Write a C++ program to implement a class called
Student that has private member variables for
name, class, roll number, and marks. Include member
functions to calculate the grade based on the marks
and display the student's information.

Input:
Input Name: John
Input Class: 8
Input Roll Number: 47
Input Marks(0-100): 93

*/

#include <bits/stdc++.h>
using namespace std;
class Student{
private:
    string Name, Class;
    int Roll, Marks;
public:
    Student( string t_name, string t_class, int t_roll, int t_marks )
    {
        Name = t_name;
        Class = t_class;
        Roll = t_roll;
        Marks = t_marks;
    }
    string calculate_grade( int value )
    {
        string grade;
        if( value >= 80 )
        {
            grade = "A+";
        }
        else if( value >= 70 )
        {
            grade = "A";
        }
        else if( value >= 60 )
        {
            grade = "A-";
        }
        else if( value >= 50 )
        {
            grade = "B";
        }
        else if( value >= 40 )
        {
            grade = "C";
        }
        else if( value >= 33 )
        {
            grade = "D";
        }
        else
        {
            grade = "F";
        }
        return grade;
    }
    void show_info()
    {
        cout << "Name: " << Name << endl;
        cout << "Class: " << Class << endl;
        cout << "Roll Number: " << Roll << endl;
        cout << "Marks: " << Marks << endl;
        cout << "Grade: " << calculate_grade(Marks) << endl;
    }
};
int main()
{
    string Name, Class;
    int Roll, Marks;
    cout << "Input Name: ";
    getline(cin, Name);
    cout << "Input Class: ";
    cin >> Class;
    cout << "Input Roll Number: ";
    cin >> Roll;
    cout << "Input Marks(0-100): ";
    cin >> Marks;
    Student student1(Name, Class, Roll, Marks);
    cout << endl;
    cout << "Student Info" << endl;
    student1.show_info();
    return 0;
}

