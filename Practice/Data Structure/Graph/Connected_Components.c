#include <bits/stdc++.h>

using namespace std;

int connected_components( vector<vector<int>>&graph, int vertices )
{
    int total = 0, unvisited = vertices;

    unordered_map<int,int>visited;

    while( unvisited != 0 )
    {
        total++;

        int start;

        for( int i = 1; i <= vertices; i++ )
        {
            if( visited[i] != 1 )
            {
                start = i;

                break;
            }
        }

        stack<int>Stack;

        Stack.push(start);

        visited[start] = 1;

        unvisited--;

        while( !Stack.empty() )
        {
            int vertex = Stack.top();

            Stack.pop();

            for( int adjacent : graph[vertex] )
            {
                if( visited[adjacent] != 1 )
                {
                    Stack.push(adjacent);

                    visited[adjacent] = 1;

                    unvisited--;
                }
            }
        }
    }

    return total;
}

int main()
{
    int nodes, edges;

    cin >> nodes >> edges;

    vector<vector<int>>Graph(nodes+1);

    for( int i = 0; i < edges; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);
        Graph[vertex2].push_back(vertex1);
    }

    cout << connected_components(Graph, nodes) << endl;
}

