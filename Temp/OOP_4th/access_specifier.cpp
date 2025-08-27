#include <bits/stdc++.h>

using namespace std;

class base{

private:
    int a = 90;

public:
    void show()
    {
        cout << "A: " << a << endl;
    }

protected:
    void add()
    {
        cout << "A: " << ++a << endl;
    }
};

class derived:protected base{

public:
    void print()
    {
        show();
    }

};

int main()
{
    derived oj;

    oj.print();


}

