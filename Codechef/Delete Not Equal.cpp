#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, zero = 0, one = 0;

        cin >> n;

        string s;

        cin >> s;

        for( int i = 0; i < n; i++ )
        {
            char value = s.at(i);

            if( value == '0' )
            {
                zero = 1;
            }
            else
            {
                one = 1;
            }
        }

        if( zero != 0 && one != 0 )
        {
            cout << 1;
        }
        else
        {
            cout << n;
        }

        cout << endl;
    }
}
