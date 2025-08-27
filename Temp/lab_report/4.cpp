/*
4. Write a C++ program to create a class called
Car that has private member variables for
company, model, and year. Implement member functions
to get and set these variables.

Input: BMW
       M4
       2022
*/

#include <bits/stdc++.h>
using namespace std;
class Car{
private:
    string company, model;
    int year;
public:
    void set_company( string value )
    {
        company = value;
    }
    void set_model( string value )
    {
        model = value;
    }
    void set_year( int value )
    {
        year = value;
    }
    string get_company()
    {
        return company;
    }
    string get_model()
    {
        return model;
    }
    int get_year()
    {
        return year;
    }
};

int main()
{
    Car car1;
    string company, model;
    int year;
    cout << "Company: ";
    getline(cin, company);
    cout << "Model: ";
    getline(cin, model);
    cout << "Year: ";
    cin >> year;
    car1.set_company(company);
    car1.set_model(model);
    car1.set_year(year);
    cout << endl;
    cout << "Company: " << car1.get_company() << endl;
    cout << "Model: " << car1.get_model() << endl;
    cout << "Year: " << car1.get_year() << endl;
    return 0;
}

