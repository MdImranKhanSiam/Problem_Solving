#include <bits/stdc++.h>

using namespace std;

class sum{

private:
    int a, b;

public:
    sum();

    void show();
    void set_value(int x, int y);
};

sum::sum()
{
    a = 1;
    b = 2;
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
    sum oj;

    oj.show();
}

