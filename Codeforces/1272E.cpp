#include <bits/stdc++.h>

using namespace std;

void Multi_Source_BFS( vector<vector<int>>&graph, vector<unordered_map<int,int>>&hashmap, vector<int>&first, vector<int>&second, vector<int>&distance, int vertices )
{
    vector<int>visited(vertices+1), level(vertices+1,-1);

    queue<int>Queue;

    for( int i = 1; i <= vertices; i++ )
    {
        if( first[i] == 1 )
        {
            Queue.push(i);

            level[i] = 0;
        }
    }

    while( !Queue.empty() )
    {
        int node = Queue.front();

        Queue.pop();

        if( visited[node] == 1 )
        {
            continue;
        }

        visited[node] = 1;

        if( second[node] == 1 )
        {
            distance[node] = level[node];
        }

        for( auto point : graph[node] )
        {
            if( hashmap[point][node] != 1 )
            {
                continue;
            }

            if( visited[point] != 1 )
            {
                Queue.push(point);

                if( level[point] == -1 )
                {
                    level[point] = level[node]+1;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin >> n;

    vector<vector<int>>Graph(n+1);

    vector<unordered_map<int,int>>Hashmap(n+1);

    vector<int>Even(n+1), Odd(n+1), Distance(n+1,-1);

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        if( value % 2 == 0 )
        {
            Even[i+1] = 1;
        }
        else
        {
            Odd[i+1] = 1;
        }

        int vertex1, vertex2;

        vertex1 = (i+1)-value;

        vertex2 = (i+1)+value;

        if( vertex1 >= 1 )
        {
            Graph[i+1].push_back(vertex1);

            Graph[vertex1].push_back(i+1);

            Hashmap[i+1][vertex1] = 1;
        }

        if( vertex2 <= n )
        {
            Graph[i+1].push_back(vertex2);

            Graph[vertex2].push_back(i+1);

            Hashmap[i+1][vertex2] = 1;
        }
    }

    Multi_Source_BFS(Graph,Hashmap,Even,Odd,Distance,n);

    Multi_Source_BFS(Graph,Hashmap,Odd,Even,Distance,n);

    for( int i = 1; i <= n; i++ )
    {
        cout << Distance[i] << " ";
    }

    cout << "\n";
}

