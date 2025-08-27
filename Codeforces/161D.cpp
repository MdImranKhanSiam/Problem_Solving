#include <bits/stdc++.h>

using namespace std;

void DFS( vector<vector<int>>&tree, vector<vector<int>>&hashmap, int &found, int target, int root, int vertex, int parent, int level )
{
    if( level == target )
    {
        int Min = min(root,vertex);

        int Max = max(root,vertex);

        if( hashmap[Min][Max] != 1 )
        {
            hashmap[Min][Max] = 1;

            found++;
        }

        return;
    }

    for( auto point : tree[vertex] )
    {
        if( point == parent )
        {
            continue;
        }

        DFS(tree,hashmap,found,target,root,point,vertex,level+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, k;

    cin >> n >> k;

    vector<vector<int>>Tree(n+1);

    vector<int>Length(n+1);

    vector<vector<int>>Hashmap(n+1,Length);

    for( int i = 0; i < n-1; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Tree[vertex1].push_back(vertex2);

        Tree[vertex2].push_back(vertex1);
    }

    int result = 0;

    for( int i = 1; i <= n; i++ )
    {
        int Found = 0;

        DFS(Tree,Hashmap,Found,k,i,i,i,0);

        result += Found;
    }

    cout << result << "\n";
}

