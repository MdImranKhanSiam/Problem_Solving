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
        ll n;

        cin >> n;

        ll current = 1;

        vector<ll>store;

        while( n != 0 )
        {
            ll digit = n % 10;

            n /= 10;

            if( digit != 0 )
            {
                store.push_back(digit*current);
            }

            current *= 10;
        }

        cout << store.size() << endl;

        for( auto point : store )
        {
            cout << point << " ";
        }

        cout << endl;
    }
}
