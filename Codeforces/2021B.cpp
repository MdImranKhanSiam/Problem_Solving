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
        ll n, x, Less = 0;

        cin >> n >> x;

        vector<ll>Hashmap(n+2,0);

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            if( value > n )
            {
                Less++;

                continue;
            }

            Hashmap[value]++;
        }

        n -= Less;

        for( int i = 0; i <= n+1; i++ )
        {
            if( Hashmap[i] == 0 )
            {
                cout << i << endl;

                break;
            }
            else if( Hashmap[i] > 1 )
            {
                if( i+x > n )
                {
                    continue;
                }

                Hashmap[i+x] += Hashmap[i]-1;

                Hashmap[i] = 1;
            }
        }
    }
}

