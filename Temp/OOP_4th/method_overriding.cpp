#include <bits/stdc++.h>

using namespace std;

class Grandfather{

public:
    virtual void fun() = 0;

    void view()
    {
        cout << "Grandfather Success" << endl;
    }

    void show()
    {
        cout << "Grandfather" << endl;
    }
};

class Father1:public Grandfather{

public:
    void fun()
    {
        cout << "Fun1" << endl;
    }

    void show()
    {
        cout << "Father1" << endl;
    }
};

class Father2:public Grandfather{

public:
    void fun()
    {
        cout << "Fun2" << endl;
    }

    void show()
    {
        cout << "Father2" << endl;
    }
};

int main()
{
    Grandfather *oj1;

    Father1 oj2;

    oj1 = &oj2;

    oj1->fun();

}

