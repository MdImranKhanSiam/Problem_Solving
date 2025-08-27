#include <bits/stdc++.h>

using namespace std;

#define int long long int

void Insert( map<int,pair<int,vector<int>>>&t_tree, int x, int y)
{
    t_tree[x].first = 0;
    t_tree[x].second.push_back(y);

    t_tree[y].first = 0;
    t_tree[y].second.push_back(x);
}

int Set_Leaf( map<int,pair<int,vector<int>>>&t_tree, int root, map<int,bool>&visit )
{
    visit[root] = true;

    bool child = true;

    for( auto i : t_tree[root].second )
    {
        if( visit[i] != true )
        {
            child = false;

            t_tree[root].first += Set_Leaf(t_tree, i, visit);
        }
    }

    if( child == true )
    {
        t_tree[root].first = 1;
    }

    return t_tree[root].first;
}

signed main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        map<int,pair<int,vector<int>>>Tree;

        int vertex;

        cin >> vertex;

        for( int i = 1; i < vertex; i++ )
        {
            int a, b;

            cin >> a >> b;

            Insert(Tree, a, b);
        }

        map<int,bool>visited;

        Set_Leaf(Tree, 1, visited);

        int query;

        cin >> query;

        for( int i = 0; i < query; i++ )
        {
            int u, v;

            cin >> u >> v;

            cout << Tree[u].first*Tree[v].first << endl;
        }
    }
}
