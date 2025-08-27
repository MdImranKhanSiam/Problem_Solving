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
        ll n, x, Sum = 0, Total, Max = INT_MIN;

        cin >> n >> x;

        for( ll i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            Sum += value;

            if( value > Max )
            {
                Max = value;
            }
        }

        Total = Sum/x;

        if( Sum % x != 0 )
        {
            Total++;
        }

        cout << max(Max,Total) << endl;
    }
}

