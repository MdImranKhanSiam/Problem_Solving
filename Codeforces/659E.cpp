#include <bits/stdc++.h>

using namespace std;

void Recursive_DFS( vector<vector<int>>&graph, vector<int>&found, vector<int>&visited, bool &cycle_detected, int vertex, int parent )
{
    visited[vertex] = 1;

    for( auto point : graph[vertex] )
    {
        if( visited[point] == 1 && point != parent )
        {
            cycle_detected = true;
        }

        if( visited[point] != 1 )
        {
            Recursive_DFS(graph,found,visited,cycle_detected,point,vertex);
        }
    }
}

int Modified_DFS( vector<vector<int>>&graph, int vertices )
{
    int no_cycle = 0;

    vector<int>found(vertices+1), visited(vertices+1);

    for( int i = 1; i <= vertices; i++ )
    {
        if( found[vertices] != 1 )
        {
            bool cycle_detected = false;

            Recursive_DFS(graph,found,visited,cycle_detected,i,i);

            if( cycle_detected == false )
            {
                no_cycle++;
            }
        }
    }

    return no_cycle;
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

    cout << Modified_DFS(Graph,vertex) << "\n";
}

