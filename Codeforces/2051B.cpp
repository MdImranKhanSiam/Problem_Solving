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
        ll n, total = 0, t1, day, kilo;

        cin >> n;

        vector<ll>store;

        for( ll i = 0; i < 3; i++ )
        {
            ll value;

            cin >> value;

            total += value;

            store.push_back(value);
        }

        t1 = n/total;

        if( n % total != 0 )
        {
            t1++;
        }

        day = (t1-1)*3;

        kilo = total*(t1-1);

        for( ll i = 0; i < 3; i++ )
        {
            kilo += store[i];

            day++;

            if( kilo >= n )
            {
                break;
            }
        }

        cout << day << endl;
    }
}
