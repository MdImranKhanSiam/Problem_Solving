#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll can_print( vector<ll>&machines, ll seconds )
{
    ll total = 0;

    for( auto point : machines )
    {
        total += seconds/point;
    }

    return total;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, books;

    cin >> n >> books;

    vector<ll>machines;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        machines.push_back(value);
    }

    ll low = 1, mid, high = 1e18;

    ll result;

    while( high >= low )
    {
        mid = (low+high)/2;

        ll prints = can_print(machines,mid);

        if( prints == books )
        {
            result = mid;

            break;
        }

        if( prints < books )
        {
            low = mid+1;
        }

        if( prints > books )
        {
            high = mid-1;
        }
    }

    cout << result << endl;
}
