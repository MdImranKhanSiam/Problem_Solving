#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    cin >> s;

    int zero = 0, one = 0;

    for( char ch : s )
    {
        if( ch == 'z' )
            zero++;
        else if( ch == 'n' )
            one++;
    }

    for( int i = 0; i < one; i++ )
        cout << 1 << " ";

    for( int i = 0; i < zero; i++ )
        cout << 0 << " ";

    cout << endl;
}

