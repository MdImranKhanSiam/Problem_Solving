#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll group( vector<ll>&store, ll limit )
{
    bool wrong = false;

    ll total = 0, sum = 0;

    for( auto point: store )
    {
        if( point > limit )
        {
            wrong = true;

            break;
        }

        if( sum == 0 )
        {
            sum += point;

            total++;
        }
        else
        {
            sum += point;
        }

        if( sum > limit )
        {
            sum = point;

            total++;
        }
    }

    if( wrong == true )
    {
        return store.size()+1;
    }
    else
    {
        return total;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, target;

    cin >> n >> target;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    ll low = 0, mid = 0, high = 2e15+9, result = 0;

    while( low <= high )
    {
        mid = (low+high)/2;

        if( group(store,mid) <= target )
        {
            result = mid;

            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    cout << result << endl;
}
