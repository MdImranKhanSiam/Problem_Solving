#include <bits/stdc++.h>

using namespace std;

class store2;

class store1{

private:
    int value;

public:
    void set_value( int );
    void show( void );
    friend void swap_store( store1 &, store2 & );

};

class store2{

private:
    int value;

public:
    void set_value( int );
    void show( void );
    friend void swap_store( store1 &, store2 & );

};

void store1::set_value( int x )
{
    value = x;
}

void store1::show( void )
{
    cout << "Store1: " << value << endl;
}

void store2::set_value( int x )
{
    value = x;
}

void store2::show( void )
{
    cout << "Store2: " << value << endl;
}

void swap_store( store1 &a, store2 &b )
{
    int temp;

    temp = a.value;
    a.value = b.value;
    b.value = temp;
}

int main()
{
    store1 st1;

    store2 st2;

    st1.set_value(10);
    st2.set_value(20);

    st1.show();
    st2.show();

    swap_store(st1, st2);

    st1.show();
    st2.show();
}
