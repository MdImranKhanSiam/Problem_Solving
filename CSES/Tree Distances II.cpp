//Concept of sum of the distances of all node from every node

#include <bits/stdc++.h>

using namespace std;

#define int long long int

int First_Modified_DFS( vector<vector<int>>&tree, vector<int>&sub_tree, int &root_sum, int vertex, int parent, int parent_level )
{
    int leaf = 1;

    for( auto point : tree[vertex] )
    {
        if( point == parent )
        {
            continue;
        }

        root_sum += parent_level+1;

        leaf += First_Modified_DFS(tree,sub_tree,root_sum,point,vertex,parent_level+1);
    }

    sub_tree[vertex] = leaf;

    return leaf;
}

void Second_Modified_DFS( vector<vector<int>>&tree, vector<int>&sub_tree, vector<int>&weight, int root_sum, int start, int vertices )
{
    vector<int>visited(vertices+1);

    stack<int>Stack;

    Stack.push(start);

    visited[start] = 1;

    weight[start] = root_sum;

    while( !Stack.empty() )
    {
        int node = Stack.top();

        Stack.pop();

        for( auto point : tree[node] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Stack.push(point);

                weight[point] = weight[node]+(vertices-(2*sub_tree[point]));
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    vector<vector<int>>Tree(n+1);

    for( int i = 0; i < n-1; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Tree[vertex1].push_back(vertex2);

        Tree[vertex2].push_back(vertex1);
    }

    int Root_Sum = 0, Start = 1;

    vector<int>Sub_tree(n+1,0);

    First_Modified_DFS(Tree,Sub_tree,Root_Sum,Start,Start,0);

    vector<int>Weight(n+1);

    Second_Modified_DFS(Tree,Sub_tree,Weight,Root_Sum,Start,n);

    for( int i = 1; i <= n; i++ )
    {
        cout << Weight[i] << " ";
    }

    cout << "\n";
}
