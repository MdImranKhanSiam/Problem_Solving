#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, m;

    cin >> n >> m;

    vector<vector<ll>>matrix(1);

    for( int i = 0; i < n; i++ )
    {
        vector<ll>temp(1);

        for( int j = 0; j < m; j++ )
        {
            ll value;

            char ch;

            cin >> ch;

            if( ch == 'x' )
            {
                value = 1;
            }
            else
            {
                value = 2;
            }

            temp.push_back(value);
        }

        matrix.push_back(temp);
    }

    ll x, y;

    cin >> x >> y;

    bool result = true;

    for( int i = x-1; i <= x+1; i++ )
    {
        for( int j = y-1; j <= y+1; j++ )
        {
            if( (1 <= i) && (i <= n) && (1 <= j) && (j <= m) )
            {
                if( x == i && y == j )
                {
                    continue;
                }

                if( matrix[i][j] != 1 )
                {
                    result = false;
                }
            }
        }
    }

    cout << ((result==true) ? "yes" : "no") << endl;
}
