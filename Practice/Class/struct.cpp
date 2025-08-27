#include <iostream>

using namespace std;

struct student{
    int id;
    string name;

    int new_id()
    {
        return id+1000;
    }
};

int main()
{
    student imran;

    imran.id = 110;
    imran.name = "Imran Khan";

    cout << imran.id << endl;
    cout << imran.name << endl;
    cout << imran.new_id() << endl;
}
