#include <bits/stdc++.h>

using namespace std;

void DFS( vector<vector<int>>&graph, vector<int>&visited, int exclude, int start )
{
    stack<int>Stack;

    Stack.push(start);

    while( !Stack.empty() )
    {
        int vertex = Stack.top();

        Stack.pop();

        if( visited[vertex] == 1 )
        {
            continue;
        }

        visited[vertex] = 1;

        for( auto point : graph[vertex] )
        {
            if( point == exclude )
            {
                continue;
            }

            if( visited[point] != 1 )
            {
                Stack.push(point);
            }
        }
    }
}

void Articulation_Point( vector<vector<int>>&graph, vector<int>&store, int vertex )
{
    for( int i = 1; i <= vertex; i++ )
    {
        vector<int>visited(vertex+1);

        int components = 0;

        for( int j = 1; j <= vertex; j++ )
        {
            if( j != i )
            {
                if( visited[j] != 1 )
                {
                    components++;

                    DFS(graph,visited,i,j);
                }
            }
        }

        if( components > 1 )
        {
            store.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int vertex, edge;

    cin >> vertex >> edge;

    vector<vector<int>>Graph(vertex+1);

    for( int i = 0; i < edge; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    vector<int>Store;

    Articulation_Point(Graph,Store,vertex);

    for( auto point : Store )
    {
        cout << point << " ";
    }
}

//5 5
//1 2
//1 3
//2 3
//4 3
//5 4
