#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, d;

        bool done = false;

        cin >> n >> d;

        string digits, add;

        cin >> digits;

        add = to_string(d);

        for( int i = 0; i < n; i++ )
        {
            if( digits.at(i) < add.at(0) && done == false )
            {
                cout << d;
                done = true;
            }

            cout << digits.at(i);

            if( done == false && i == n - 1 )
                cout << d;
        }

        cout << endl;
    }
}

