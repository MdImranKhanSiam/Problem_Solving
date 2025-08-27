#include <bits/stdc++.h>

using namespace std;

class class1{

private:
    int value;

public:
    class1(){};
    class1(int);
    class1(class1 *);

    void show();

    ~class1()
    {
        value = NULL;
    }

};

class1::class1(int x)
{
    value = x;
}

class1::class1(class1 *temp)
{
    value = temp->value;
}

void class1::show()
{
    cout << value << endl;
}

int main()
{
    class1 oj1(5);

    oj1.show();

    class1 oj2(oj1);

    oj2.show();

    class1 oj3;

    oj3 = oj2;

    oj3.show();

    class1 oj4 = oj3;

    oj4.show();

}

