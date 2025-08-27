//Concept of maximum distance from one node to another node in a tree

#include <bits/stdc++.h>

using namespace std;

void Depth( vector<vector<int>>&tree, int &Max_Depth, int &Depth_Node, int vertices, int start )
{
    vector<int>visited(vertices+1), value(vertices+1,0);

    stack<int>Stack;

    Stack.push(start);

    visited[start] = 1;

    value[start] = 1;

    while( !Stack.empty() )
    {
        int node = Stack.top();

        Stack.pop();

        if( value[node] > Max_Depth )
        {
            Max_Depth = value[node];

            Depth_Node = node;
        }

        for( auto point : tree[node] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                value[point] = value[node]+1;

                Stack.push(point);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, start = 0;

    cin >> n;

    vector<vector<int>>Tree(n+1);

    for( int i = 0; i < n-1; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        if( start == 0 )
        {
            start = vertex1;
        }

        Tree[vertex1].push_back(vertex2);

        Tree[vertex2].push_back(vertex1);
    }

    int Max_Depth = 0, Depth_Node;

    Depth(Tree,Max_Depth,Depth_Node,n,start);

    Depth(Tree,Max_Depth,Depth_Node,n,Depth_Node);

    cout << Max_Depth-1 << "\n";
}
