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
        int n;

        cin >> n;

        vector<int>store;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);
        }

        sort(store.begin(),store.end());

        for( int i = 0; i < n-1; i++ )
        {
            store[i+1] = (store[i]+store[i+1])/2;
        }

        cout << store[n-1] << endl;
    }
}

