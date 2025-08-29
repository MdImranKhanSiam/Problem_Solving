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

    map<pair<ll,ll>,string>code_name;

    for( int i = 0; i < n; i++ )
    {
        ll key1, key2;

        string name;

        cin >> key1 >> key2 >> name;

        code_name[make_pair(key1,key2)] = name;
    }

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll key1, key2;

        cin >> key1 >> key2;

        cout << code_name[make_pair(key1,key2)] << endl;
    }
}
