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
        ll k;

        cin >> k;

        vector<ll>Hashmap(k+1,0);

        for( int i = 0; i < k; i++ )
        {
            ll value;

            cin >> value;

            Hashmap[value] = 1;
        }

        ll n = k-2, length, a;

        length = (n/2)+1;

        for( int i = 1; i <= length; i++ )
        {
            if( Hashmap[i] == 1 )
            {
                if( n % i == 0 )
                {
                    a = n/i;

                    if( Hashmap[a] == 1 )
                    {
                        cout << i << " " << a << endl;

                        break;
                    }
                }
            }
        }
    }
}
