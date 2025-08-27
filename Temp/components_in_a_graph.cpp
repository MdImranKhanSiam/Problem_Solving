#include <bits/stdc++.h>

using namespace std;

int DFS( vector<vector<int>>&graph, vector<int>&unvisited, int start )
{
    int nodes = 0;

    unordered_map<int,int>visited;

    stack<int>Stack;

    Stack.push(start);

    visited[start] = 1;

    while( !Stack.empty() )
    {
        nodes++;

        int node;

        node = Stack.top();

        Stack.pop();

        unvisited[node] = 0;

        for( int point : graph[node] )
        {
            if( visited[point] != 1 )
            {
                Stack.push(point);

                visited[point] = 1;
            }
        }
    }

    return nodes;
}

int main()
{
    int n;

    cin >> n;

    vector<vector<int>>Graph((n*2)+1);

    for( int i = 0; i < n; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);
        Graph[vertex2].push_back(vertex1);
    }

    vector<int>unvisited((n*2)+1,1);

    int Min, Max;

    Min = INT_MAX;

    Max = INT_MIN;

    for( int i = 1; i <= n*2; i++ )
    {
        if( unvisited[i] != 1 )
        {
            continue;
        }

        int components;

        components = DFS(Graph,unvisited,i);

        if( components != 1 )
        {
            if( components < Min )
            {
                Min = components;
            }

            if( components > Max )
            {
                Max = components;
            }
        }
    }

    cout << Min << " " << Max << endl;
}
