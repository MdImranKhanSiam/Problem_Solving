#include <bits/stdc++.h>

using namespace std;

bool found = false;

dive( map<int,vector<int>>&Branch, int index, int target, vector<int>&Store )
{
    for( auto i : Branch[index] )
    {
        if( i == target )
            found = true;
        else
            dive(Branch, i, target, Store);

        if( found == true )
        {
            Store.push_back(i);
            break;
        }
    }
}

int main()
{
    int n;

    cin >> n;

    map<int,vector<int>>branch;

    for( int i = 1; i < n; i++ )
    {
        int value;

        cin >> value;

        branch[value].push_back(i+1);
    }

    vector<int>store;

    dive( branch, 1, n, store );

    store.push_back(1);

    for( auto i = store.rbegin(); i != store.rend(); i++ )
        cout << *i << " ";

    cout << endl;
}


