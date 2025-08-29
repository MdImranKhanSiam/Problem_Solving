#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    vector<ll>store;

    ll value;

    while( cin >> value )
    {
        store.push_back(value);
    }

    unordered_map<ll,ll>hashmap;

    vector<ll>distinct;

    for( auto point : store )
    {
        if( hashmap[point] != NULL )
        {
            hashmap[point]++;
        }
        else
        {
            distinct.push_back(point);

            hashmap[point] = 1;
        }
    }

    for( auto point : distinct )
    {
        cout << point << " " << hashmap[point] << endl;
    }

}
