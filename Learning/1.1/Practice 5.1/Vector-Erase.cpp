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

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    ll target;

    cin >> target;

    store.erase(store.begin()+(target-1));

    ll left_target, right_target;

    cin >> left_target >> right_target;

    store.erase(store.begin()+(left_target-1),store.begin()+(right_target-1));

    cout << store.size() << endl;

    for( auto point : store )
    {
        cout << point << " ";
    }

    cout << endl;
}
