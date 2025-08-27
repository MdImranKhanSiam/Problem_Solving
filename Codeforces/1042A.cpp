#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, m, Max = 0;

    cin >> n >> m;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        if( value > Max )
        {
            Max = value;
        }

        store.push_back(value);
    }

    ll Minimum = 0, Maximum = 0;

    ll limit = m;

    for( int i = 0; i < n; i++ )
    {
        if( limit == 0 )
        {
            break;
        }

        ll Add = min(Max-store[i],limit);

        store[i] += Add;

        limit -= Add;
    }

    Minimum += Max+(limit/n);

    if( limit % n != 0 )
    {
        Minimum++;
    }

    Maximum += Max+m;

    cout << Minimum << " " << Maximum << endl;
}
