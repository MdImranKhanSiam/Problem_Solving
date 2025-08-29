#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    unordered_map<ll,ll>frequency;

    vector<ll>distinct;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        if( frequency[value] == NULL )
        {
            distinct.push_back(value);

            frequency[value] = 1;
        }
        else
        {
            frequency[value]++;
        }
    }

    ll result = 0;

    for( auto point : distinct )
    {
        ll current = frequency[point];

        current--;

        result += (current*(current+1))/2;
    }

    ll all_pairs = ((n-1)*n)/2;

    cout << all_pairs-result << endl;
}
