#include <bits/stdc++.h>

using namespace std;

void Depth( unordered_map<int,pair<vector<int>,int>>tree, int root, int &leaf, int &distance )
{
    unordered_map<int,int>visited;

    int Max = INT_MIN;

    stack<int>Stack;

    Stack.push(root);

    visited[root] = 1;

    while( !Stack.empty() )
    {
        int node = Stack.top();

        Stack.pop();

        if( tree[node].second > Max )
        {
            Max = tree[node].second;
            leaf = node;
            distance = Max;
        }

        for( auto point : tree[node].first )
        {
            if( visited[point] != 1 )
            {
                Stack.push(point);

                visited[point] = 1;

                tree[point].second = tree[node].second+1;
            }
        }
    }
}

int main()
{
    int nodes, edges;

    cin >> nodes >> edges;

    unordered_map<int,pair<vector<int>,int>>Tree;

    for( int i = 0; i < edges; i++ )
    {
        int node1, node2;

        cin >> node1 >> node2;

        Tree[node1].first.push_back(node2);
        Tree[node1].second = 0;

        Tree[node2].first.push_back(node1);
        Tree[node2].second = 0;
    }

    int leaf1, leaf2, distance;

    Depth(Tree,1,leaf1,distance);

    Depth(Tree,leaf1,leaf2,distance);

    cout << distance << endl;
}
