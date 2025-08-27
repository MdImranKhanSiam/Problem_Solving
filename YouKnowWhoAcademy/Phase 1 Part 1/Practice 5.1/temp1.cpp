#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>> >Q;

    for( int i = 0; i < 5; i++ )
    {
        ll v1, v2;

        cin >> v1 >> v2;

        Q.push(make_pair(v1,v2));
    }

    while( !Q.empty() )
    {
        ll dist, v;

        pair<ll,ll>temp = Q.top();

        Q.pop();

        cout << "Dist: " << temp.first << endl;

        cout << "Value: " << temp.second << endl;
    }
}
