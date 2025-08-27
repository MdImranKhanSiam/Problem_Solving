#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int n;

        cin >> n;

        if( n % 2 != 0 || n == 6 || n == 10 )
            cout << "YES" << endl;
        else if( ( n % 10 ) % 2 != 0 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

