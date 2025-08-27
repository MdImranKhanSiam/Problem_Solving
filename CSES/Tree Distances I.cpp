//Concept of the distance of the furthest node from any node

#include <bits/stdc++.h>

using namespace std;

void Depth_Node( vector<vector<int>>&tree, vector<int>&level, int &Max_Depth, int &Deepest_Node, int vertices, int start )
{
    vector<int>visited(vertices+1);

    stack<int>Stack;

    Stack.push(start);

    visited[start] = 1;

    level[start] = 0;

    while( !Stack.empty() )
    {
        int node = Stack.top();

        Stack.pop();

        if( level[node] >= Max_Depth )
        {
            Max_Depth = level[node];

            Deepest_Node = node;
        }

        for( auto point : tree[node] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Stack.push(point);

                level[point] = level[node]+1;
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

    int Max_Depth = 0, Deepest_Node;

    vector<int>Level_One(n+1,0), Level_Two(n+1,0);

    Depth_Node(Tree,Level_One,Max_Depth,Deepest_Node,n,start);

    int first = Deepest_Node;

    Depth_Node(Tree,Level_Two,Max_Depth,Deepest_Node,n,first);

    int second = Deepest_Node;

    vector<int>first_distance(n+1), second_distance(n+1);

    Depth_Node(Tree,first_distance,Max_Depth,Deepest_Node,n,first);

    Depth_Node(Tree,second_distance,Max_Depth,Deepest_Node,n,second);

    for( int i = 1; i <= n; i++ )
    {
        cout << max(first_distance[i],second_distance[i]) << " ";
    }

    cout << "\n";
}
