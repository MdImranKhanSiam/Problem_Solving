#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n;

        cin >> n;

        vector<ll>P, V;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            P.push_back(value);
        }

        for( int i = 0; i < n; i++ )
        {
            ll value = 0, K = i;

            while( true )
            {
                K = P[K]-1;

                value++;

                if( K == i )
                {
                    break;
                }
            }

            V.push_back(value);
        }

        for( auto point : V )
        {
            cout << point << " ";
        }

        cout << endl;
    }
}
