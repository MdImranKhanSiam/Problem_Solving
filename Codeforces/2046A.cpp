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
        ll column, sum = 0, result = LLONG_MIN;

        cin >> column;

        vector<ll>Row1, Row2;

        for( int i = 0; i < column; i++ )
        {
            ll value;

            cin >> value;

            Row1.push_back(value);
        }

        for( int i = 0; i < column; i++ )
        {
            ll value;

            cin >> value;

            Row2.push_back(value);
        }

        for( int i = 0; i < column; i++ )
        {
            sum += max(Row1[i],Row2[i]);
        }

        for( int i = 0; i < column; i++ )
        {
            ll value = sum+min(Row1[i],Row2[i]);

            if( value > result )
            {
                result = value;
            }
        }

        cout << result << endl;
    }
}
