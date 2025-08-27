#include <bits/stdc++.h>

using namespace std;

class print{

public:
    void show()
    {
        cout << "Print" << endl;
    }
};

int main()
{
    print *oj1 = new print();

    oj1->show();

    cout << oj1 << endl;

    print *oj2;

    print oj3;

    oj2 = &oj3;

    oj2->show();
}

