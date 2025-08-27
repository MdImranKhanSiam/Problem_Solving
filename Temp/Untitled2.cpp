/*

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter Three Integers" << endl;

    cin >> a >> b >> c;

    if( a > b && a < c || a > c && a < b )
        cout << "Median: " << a << endl;
    else if( b > a && b < c || b > c && b < a )
        cout << "Median: " << b << endl;
    else if( c > a && c < b || c > b && c < a )
        cout << "Median: " << c << endl;

    return 0;
}

*/


/*

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter Three Integers" << endl;

    cin >> a >> b >> c;

    if( a > b && a > c )
        cout << "Largest Integer: " << a << endl;
    else if( b > a && a > c )
        cout << "Largest Integer: " << b << endl;
    else if( c > a && c > b )
        cout << "Largest Integer: " << c << endl;

    return 0;
}

*/









#include <bits/stdc++.h>

using namespace std;

int GetHash(string str, int B, int M)
{
    long long hash = 0;
    for (auto chr: str)
        hash = (hash * B + chr - 'a' + 1) % M;
    return hash;
}

int main()
{
    string s;

    cout << "Enter A String: ";
    cin >> s;

    int base, mod;

    cin >> base >> mod;

    cout << "Result: " << GetHash(s, base, mod) << endl;

    return 0;
}























