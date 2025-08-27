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
        ll n, magic = 0;

        cin >> n;

        vector<vector<ll>>Matrix;

        for( int i = 0; i < n; i++ )
        {
            vector<ll>store;

            for( int j = 0; j < n; j++ )
            {
                ll value;

                cin >> value;

                store.push_back(value);
            }

            Matrix.push_back(store);
        }

        for( int i = 0; i < n; i++ )
        {
            for( int j = 0; j < n; j++ )
            {
                if( Matrix[i][j] < 0 )
                {
                    ll Min = LLONG_MAX, length = n-max(i,j);

                    for( int k = 0, a = i, b = j; k < length; k++, a++, b++ )
                    {
                        ll value = Matrix[a][b];

                        Matrix[a][b] = 0;

                        if( value < Min )
                        {
                            Min = value;
                        }
                    }

                    magic += abs(Min);
                }
            }
        }

        cout << magic << endl;
    }
}
