#include <bits/stdc++.h>

using namespace std;

class sum{

private:
    int a, b;

public:
    sum();
    sum(int x, int y);

    void show();
    void set_value(int x, int y);
};

sum::sum()
{
    a = 1;
    b = 2;
}

sum::sum(int x, int y)
{
    a = x;
    b = y;
}

void sum::show()
{
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
}

void sum::set_value(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    sum oj, oj1(4,5);

    oj.show();
    oj1.show();
}


