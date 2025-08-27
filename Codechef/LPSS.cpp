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
        vector<ll>store;

        ll zero = 0;

        for( int i = 0; i < 3; i++ )
        {
            ll value;

            cin >> value;

            if( value == 0 )
            {
                zero++;
            }

            store.push_back(value);
        }

        if( zero == 2 )
        {
            cout << 0 << endl;
        }
        else if( zero == 1 )
        {
            sort(store.begin(),store.end());

            cout << store[1] << endl;
        }
        else
        {
            sort(store.begin(),store.end());

            ll a, b, sum;

            a = store[0];

            b = store[1];

            sum = a+b;

            if( a%2 != 0 && b%2 != 0 )
            {
                sum--;
            }

            cout << sum << endl;
        }
    }
}
