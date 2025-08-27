#include <bits/stdc++.h>

using namespace std;

#define int long long int

signed main()
{
    int n;

    cin >> n;

    vector<int>store;

    int type = 1, slime = n;

    while( true )
    {
        if( slime == 1 )
        {
            store.push_back(type);
            break;
        }

        if( slime % 2 != 0 )
        {
            slime--;

            slime /= 2;

            store.push_back(type);

            type++;
        }
        else
        {
            slime /= 2;

            type++;
        }
    }

    for( auto value = rbegin(store); value != rend(store); value++ )
        cout << *value << " ";

    cout << endl;
}


