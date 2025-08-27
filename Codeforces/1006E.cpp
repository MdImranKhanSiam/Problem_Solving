#include <bits/stdc++.h>

using namespace std;

#define int long long int

int Modified_DFS( vector<set<int>>&tree, vector<int>&dfs_list, vector<int>&hash_child, int root )
{
    dfs_list.push_back(root);

    int child = 1;

    for( int point : tree[root] )
    {
        child += Modified_DFS(tree,dfs_list,hash_child,point);
    }

    hash_child[root] = child;

    return child;
}


signed main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, q;

    cin >> n >> q;

    vector<set<int>>Tree(n+1);

    for( int i = 2; i <= n; i++ )
    {
        int value;

        cin >> value;

        Tree[value].insert(i);
    }

    vector<int>dfs_list, hash_parent(n+1), hash_child(n+1);

    Modified_DFS(Tree,dfs_list,hash_child,1);

    for( int i = 0; i < n; i++ )
    {
        hash_parent[dfs_list[i]] = i+1;
    }

    for( int i = 0; i < q; i++ )
    {
        int vertex, position;

        cin >> vertex >> position;

        if( position > hash_child[vertex] )
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << dfs_list[hash_parent[vertex]+position-2] << "\n";
        }
    }
}
