#include <bits/stdc++.h>

using namespace std;

int BFS( vector<vector<int>>&graph, vector<int>&marked, int vertices, int &depth, int root )
{
    int Max_Depth = 0;

    vector<int>visited(vertices+1), level(vertices+1);

    queue<int>Queue;

    Queue.push(root);

    level[root] = 1;

    visited[root] = 1;

    while( !Queue.empty() )
    {
        int vertex = Queue.front();

        Queue.pop();

        if( marked[vertex] == 1 && level[vertex] > Max_Depth )
        {
            Max_Depth = level[vertex];

            depth = vertex;
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

    return Max_Depth;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, k;

        cin >> n >> k;

        vector<vector<int>>Graph(n+1);

        vector<int>Marked(n+1);

        for( int i = 0; i < k; i++ )
        {
            int vertex;

            cin >> vertex;

            Marked[vertex] = 1;
        }

        for( int i = 0; i < n-1; i++ )
        {
            int vertex1, vertex2;

            cin >> vertex1 >> vertex2;

            Graph[vertex1].push_back(vertex2);

            Graph[vertex2].push_back(vertex1);
        }

        int Depth;

        BFS(Graph,Marked,n,Depth,1);

        cout << BFS(Graph,Marked,n,Depth,Depth)/2 << "\n";
    }
}

