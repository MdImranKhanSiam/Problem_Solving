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

    queue<ll>Queue;

    while( n-- )
    {
        ll op, id;

        cin >> op >> id;

        if( op == 1 )
        {
            Queue.push(id);
        }
        else if( op == 2 )
        {
            ll value = Queue.front();

            Queue.pop();

            if( value == id )
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}
