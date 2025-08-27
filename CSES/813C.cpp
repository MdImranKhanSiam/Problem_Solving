#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void Modified_BFS( vector<vector<int>>&graph, int vertices, vector<int>&hashmap, int root )
{
    vector<int>visited(vertices+1), level(vertices+1);

    queue<int>Queue;

    Queue.push(root);

    visited[root] = 1;

    level[root] = 0;

    while( !Queue.empty() )
    {
        int vertex = Queue.front();

        Queue.pop();

        hashmap[vertex] = level[vertex];

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

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int vertex, bob;

    cin >> vertex >> bob;

    vector<vector<int>>Graph(vertex+1);

    for( int i = 0; i < vertex-1; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    vector<int>Hash_alice(vertex+1), Hash_bob(vertex+1);

    Modified_BFS(Graph,vertex,Hash_alice,1);

    Modified_BFS(Graph,vertex,Hash_bob,bob);

    vector<pair<int,int>>Descending_alice;

    for( int i = 1; i <= vertex; i++ )
    {
        Descending_alice.push_back(make_pair(Hash_alice[i],i));
    }

    sort(Descending_alice.rbegin(),Descending_alice.rend());

    for( auto point : Descending_alice )
    {
        if( point.first > Hash_bob[point.second] )
        {
            cout << point.first*2 << endl;

            break;
        }
    }
}

