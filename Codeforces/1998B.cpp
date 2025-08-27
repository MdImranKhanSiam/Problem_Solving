#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        vector<int>store;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        cout << store[n-1] << " ";

        for( int i = 0; i < n-1; i++ )
        {
            cout << store[i] << " ";
        }

        cout << endl;
    }
}

