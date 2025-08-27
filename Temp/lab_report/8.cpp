/*
8. Write a C++ program to implement a class
called Date that has private member variables
for day, month, and year. Include member functions
to set and get these variables, as well as to
validate if the date is valid.

Input:

Input Day: 10
Input Month: 5
Input Year: 2024
Date: 6/5/2024
The Date Is Valid
*/

#include <bits/stdc++.h>
using namespace std;
class Date
{
private:
    int day, month, year;
public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    void set_day( int value )
    {
        day = value;
    }
    void set_month( int value )
    {
        month = value;
    }
    void set_year( int value )
    {
        year = value;
    }
    int get_day()
    {
        return day;
    }
    int get_month()
    {
        return month;
    }
    int get_year()
    {
        return year;
    }
    void check_validity()
    {
        bool valid = true;

        if( month < 1 || month > 12 )
        {
            valid = false;
        }

        if( day < 1 || day > 31 )
        {
            valid = false;
        }

        if( (month == 4 || month == 6 || month == 9 || month == 11) && day > 30 )
        {
            valid = false;
        }

        if( month == 2 )
        {
            if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
            {
                if ( day > 29 )
                {
                    valid = false;
                }
            }
            else
            {
                if( day > 28 )
                {
                    valid = false;
                }
            }
        }

        if( valid == true )
        {
            cout << "The Date Is Valid" << endl;
        }
        else
        {
            cout << "The Date Is Invalid" << endl;
        }
    }

};

int main()
{
    int day, month, year;
    cout << "Input Day: ";
    cin >> day;
    cout << "Input Month: ";
    cin >> month;
    cout << "Input Year: ";
    cin >> year;
    Date date1;
    date1.set_day(day);
    date1.set_month(month);
    date1.set_year(year);
    cout << "Date: " << date1.get_day() << "/" << date1.get_month() << "/" << date1.get_year() << endl;
    date1.check_validity();
    return 0;
}

