/*
3. Write a C++ program to create a class called
Person that has private member variables for
name, age and country. Implement member functions
to set and get the values of these variables.

Input: Md Imran Khan Siam
       24
       Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;
class Person{
private:
    string name, country;
    int age;
public:
    void set_name( string value )
    {
        name = value;
    }
    void set_age( int value )
    {
        age = value;
    }
    void set_country( string value )
    {
        country = value;
    }
    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
    string get_country()
    {
        return country;
    }
};
int main()
{
    Person person1;
    string name, country;
    int age;
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cout << "Country: ";
    cin >> country;
    person1.set_name(name);
    person1.set_age(age);
    person1.set_country(country);
    cout << endl;
    cout << "Name: " << person1.get_name() << endl;
    cout << "Age: " << person1.get_age() << endl;
    cout << "Country: " << person1.get_country() << endl;
    return 0;
}

