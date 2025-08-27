#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n = 4;

    vector<int>store(14,0);

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        store[value]++;
    }

    sort(store.begin(),store.end(),greater<int>());

    if( (store[0] == 3) || (store[0] == 2 && store[1] == 2) )
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << endl;
}
