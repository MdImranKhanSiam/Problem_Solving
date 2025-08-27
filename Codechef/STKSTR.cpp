//Streak Star

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll sequence( vector<ll>&store )
{
    ll length = store.size(), streak = 1, total = 1;

    for( int i = 1; i < length; i++ )
    {
        if( store[i] >= store[i-1] )
        {
            total++;
        }
        else
        {
            total = 1;
        }

        if( total > streak )
        {
            streak = total;
        }
    }

    return streak;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, x, result = 0;

        cin >> n >> x;

        vector<ll>store;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        for( int i = 0; i < n; i++ )
        {
            ll temp = store[i], current;

            store[i] *= x;

            current = sequence(store);

            if( current > result )
            {
                result = current;
            }

            store[i] = temp;
        }

        cout << result << endl;
    }
}
