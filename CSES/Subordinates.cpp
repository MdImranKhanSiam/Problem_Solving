//Counting childs of every parent node

#include <bits/stdc++.h>

using namespace std;

int Recursive_DFS( vector<vector<int>>&tree, vector<int>&hashmap, int root )
{
    int leaf = 0;

    for( auto point : tree[root] )
    {
        leaf += Recursive_DFS(tree,hashmap,point);

        leaf++;
    }

    hashmap[root] = leaf;

    return leaf;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    vector<vector<int>>Tree(n+1);

    vector<int>Hashmap(n+1);

    for( int i = 2; i <= n; i++ )
    {
        int value;

        cin >> value;

        Tree[value].push_back(i);
    }

    Recursive_DFS(Tree,Hashmap,1);

    for( int i = 1; i <= n; i++ )
    {
        cout << Hashmap[i] << " ";
    }

    cout << "\n";
}
