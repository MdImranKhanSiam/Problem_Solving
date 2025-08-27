#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    set<ll>store;

    set<ll>::iterator itr;

    while( tc-- )
    {
        ll op, target;

        cin >> op >> target;

        if( op == 1 )
        {
            store.insert(target);
        }
        else if( op == 2 )
        {
            store.erase(target);
        }
        else
        {
            itr = store.find(target);

            if( itr == store.end() )
            {
                cout << "No";
            }
            else
            {
                cout << "Yes";
            }

            cout << endl;
        }
    }
}
