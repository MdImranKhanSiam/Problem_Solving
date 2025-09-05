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

    stack<ll>box;

    for( int i = 0; i < n; i++ )
    {
        ll op;

        cin >> op;

        if( op == 1 )
        {
            ll x;

            cin >> x;

            box.push(x);
        }
        else if( op == 2 )
        {
            if( !box.empty() )
            {
                box.pop();
            }
        }
        else if( op == 3 )
        {
            if( !box.empty() )
            {
                ll value = box.top();

                cout << value << endl;
            }

        }
    }
}
