#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, Min = LLONG_MAX, Max = LLONG_MIN, min_index, max_index;

    cin >> n;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);

        if( value < Min )
        {
            Min = value;

            min_index = i;
        }

        if( value > Max )
        {
            Max = value;

            max_index = i;
        }
    }

    store[min_index] = Max;

    store[max_index] = Min;

    for( auto point : store )
    {
        cout << point << " ";
    }

    cout << endl;
}
