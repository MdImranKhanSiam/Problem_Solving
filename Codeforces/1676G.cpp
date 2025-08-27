#include <bits/stdc++.h>

using namespace std;

bool traverse( unordered_map<int,pair<vector<int>,int>>&tree, int root )
{
    int b, w;

    b = w = 0;

    stack<int>stackk;

    stackk.push(root);

    while( !stackk.empty() )
    {
        int node;

        node = stackk.top();

        stackk.pop();

        if( tree[node].second == 0 )
            b++;
        else
            w++;

        for( int branch : tree[node].first )
        {
            stackk.push(branch);
        }
    }

    if( b == w )
        return true;
    else
        return false;
}

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        unordered_map<int,pair<vector<int>,int>>Tree;

        int n;

        cin >> n;

        unordered_set<int>roots;

        for( int i = 2; i <= n; i++ )
        {
            int value;

            cin >> value;

            roots.insert(value);

            Tree[value].first.push_back(i);
        }

        string BW;

        cin >> BW;

        for( int i = 0; BW[i] != '\0'; i++ )
        {
            int color;

            if( BW.at(i) == 'B' )
                color = 0;
            else
                color = 1;

            Tree[i+1].second = color;
        }

        int total = 0;

        for( int root : roots )
            total += traverse( Tree, root );

        cout << total << endl;
    }
}
