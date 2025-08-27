/*
7. Write a C++ program to implement a class
called Employee that has private member
variables for name, employee ID, and salary.
Include member functions to calculate and
set salary based on employee performance.

Input:
Employee Name: John
Employee ID: 4345
Employee Salary: 1500
Input performance rating (0.0-1.5): 1.3
Updated Salary: 1950
*/

#include <bits/stdc++.h>
using namespace std;
class Employee{
private:
    string name, id;
    double salary;
public:
    Employee( string Name, string Id, double Salary )
    {
        name = Name;
        id = Id;
        salary = Salary;
    }
    string get_name()
    {
        return name;
    }
    string get_id()
    {
        return id;
    }
    double get_salary()
    {
        return salary;
    }
    void set_salary()
    {
        double performance;
        cout << "Input performance rating (0.0-1.5): ";
        cin >> performance;
        if( performance >= 0.0 && performance <= 1.5 )
        {
            salary *= performance;
        }
        else
        {
            cout << "Invalid performance rating. Salary remains unchanged" << endl;
        }
    }
};
int main()
{
    string name, id;
    double salary;
    cout << "Employee Name: ";
    getline(cin, name);
    cout << "Employee ID: ";
    cin >> id;
    cout << "Employee Salary: ";
    cin >> salary;
    Employee employee1(name, id, salary);
    employee1.set_salary();
    cout << "Updated Salary: " << employee1.get_salary() << endl;
    return 0;
}

