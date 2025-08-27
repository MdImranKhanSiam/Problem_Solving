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

    while( tc-- )
    {
        vector<int>store;

        int sum = 0;

        for( int i = 0; i < 3; i++ )
        {
            int value;

            cin >> value;

            sum += value;

            store.push_back(value);
        }

        if( sum % 2 != 0 )
        {
            cout << -1 << endl;
        }
        else
        {
            sort(store.begin(),store.end());

            if( store[0]+store[1] >= store[2] )
            {
                cout << sum/2 << endl;
            }
            else
            {
                cout << store[0]+store[1] << endl;
            }
        }
    }
}
