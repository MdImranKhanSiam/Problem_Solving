#include <bits/stdc++.h>

using namespace std;

void Modified_BFS( vector<vector<int>>&graph, int vertices, int start, vector<int>&distance )
{
    vector<int>visited(vertices), level(vertices+1);

    queue<int>Queue;

    Queue.push(start);

    visited[start] = 1;

    level[start] = 0;

    while( !Queue.empty() )
    {
        int vertex = Queue.front();

        Queue.pop();

        distance[vertex] = level[vertex];

        for( auto point : graph[vertex] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Queue.push(point);

                level[point] = level[vertex]+1;
            }
        }
    }
}

int Modified_BFS( vector<vector<int>>&graph, int vertices, vector<int>&distance, int start )
{
    int distant = -1;

    vector<int>visited(vertices), level(vertices+1);

    queue<int>Queue;

    Queue.push(start);

    visited[start] = 1;

    level[start] = 0;

    while( !Queue.empty() )
    {
        int vertex = Queue.front();

        Queue.pop();

        if( distance[vertex]+level[vertex] > distant )
        {
            distant = distance[vertex]+level[vertex];
        }

        for( auto point : graph[vertex] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Queue.push(point);

                level[point] = level[vertex]+1;
            }
        }
    }

    return distant;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    for( int k = 1; k <= tc; k++ )
    {
        int vertex, edge;

        cin >> vertex >> edge;

        vector<vector<int>>Graph(vertex);

        for( int i = 0; i < edge; i++ )
        {
            int vertex1, vertex2;

            cin >> vertex1 >> vertex2;

            Graph[vertex1].push_back(vertex2);

            Graph[vertex2].push_back(vertex1);
        }

        int Start, End;

        vector<int>Distance_S(vertex);

        cin >> Start >> End;

        Modified_BFS(Graph,vertex,Start,Distance_S);

        cout << "Case " << k << ": " << Modified_BFS(Graph,vertex,Distance_S,End) << "\n";
    }
}
