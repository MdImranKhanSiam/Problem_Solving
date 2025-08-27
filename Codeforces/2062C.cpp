#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

pair<ll,vector<ll>>Diff( vector<ll>&store )
{
    vector<ll>result;

    ll sum = 0;

    int length = store.size();

    for( int i = 0; i < length-1; i++ )
    {
        ll value = store[i+1]-store[i];

        result.push_back(value);

        sum += value;
    }

    return make_pair(sum,result);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, Max = 0;

        cin >> n;

        vector<ll>store;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);

            Max += value;
        }

        while( store.size() > 1 )
        {
            ll org, rev, current_sum;

            vector<ll>temp = store;

            reverse(temp.begin(),temp.end());

            pair<ll,vector<ll>>Pair1, Pair2;

            Pair1 = Diff(store);

            Pair2 = Diff(temp);

            org = Pair1.first;

            rev = Pair2.first;

            store.clear();

            if( org > rev )
            {
                current_sum = org;

                store = Pair1.second;
            }
            else
            {
                current_sum = rev;

                store = Pair2.second;
            }

            if( current_sum > Max )
            {
                Max = current_sum;
            }
        }

        cout << Max << endl;
    }
}
