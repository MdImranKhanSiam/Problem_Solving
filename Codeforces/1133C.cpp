#include <bits/stdc++.h>

using namespace std;

#define int long long int

main()
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

    sort( store.begin(), store.end() );

    int start, finish, maxx, countt;

    start = finish = maxx = countt = 0;

    for( int i = 0; i < n; i++ )
    {
        if( store[finish] - store[start] <= 5 )
        {
            countt++;
            finish++;
        }
        else
        {
            start++;
            i--;
            countt--;
        }

        if( countt > maxx )
            maxx = countt;
    }

    cout << maxx << endl;
}


