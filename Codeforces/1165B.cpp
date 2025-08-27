#include <bits/stdc++.h>

using namespace std;

int main()
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

    sort(store.begin(), store.end());

    int day = 1;

    for( int i = 0; i < n; i++ )
    {
        if( store[i] >= day )
        {
            day++;
        }
    }

    cout << day-1 << endl;
}

