#include <bits/stdc++.h>

using namespace std;

class items;



class items{

private:
    int safe;

public:
    int box, chair;

    void set_value( int, int, int );

    friend int count_total( items );

};


class neighbourhood{

private:


public:
    friend void items::set_value( int, int, int );

};

void items::set_value( int x, int y, int z )
{
    safe = x;
    box = y;
    chair = z;
}

int count_total( items temp )
{
    int total = temp.safe+temp.box+temp.chair;

    return total;
}

int main()
{
    items house1;

    house1.set_value(2, 14, 35);

    cout << count_total( house1 ) << endl;
}
