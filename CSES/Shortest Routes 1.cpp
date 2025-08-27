#include <bits/stdc++.h>

using namespace std;

#define int unsigned long long int

void Dijkstra( vector<vector<pair<int,int>>>&graph, vector<pair<int,int>>&table, int start, int vertices )
{
    for( int i = 1; i <= vertices; i++ )
    {
        if( i == start )
        {
            table[i] = make_pair(0,i);
        }
        else
        {
            table[i] = make_pair(ULLONG_MAX,NULL);
        }
    }

    int total_visited = 0;

    vector<int>visited(vertices+1);

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Queue;

    Queue.push(make_pair(table[start].first,start));

    while( total_visited != vertices )
    {
        pair<int,int>current = Queue.top();

        Queue.pop();

        int vertex, distance;

        vertex = current.second;

        distance = current.first;

        if( visited[vertex] == 1 )
        {
            continue;
        }

        visited[vertex] = 1;

        total_visited++;

        for( auto point : graph[vertex] )
        {
            int node, weight, previous_distance, new_distance;

            node = point.first;

            if( visited[node] == 1 )
            {
                continue;
            }

            weight = point.second;

            previous_distance = table[node].first;

            new_distance = table[vertex].first+weight;

            if( new_distance < previous_distance )
            {
                table[node].first = new_distance;

                table[node].second = vertex;

                Queue.push(make_pair(new_distance,node));
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<vector<pair<int,int>>>Graph(n+1);

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2, weight;

        cin >> vertex1 >> vertex2 >> weight;

        Graph[vertex1].push_back(make_pair(vertex2,weight));
    }

    vector<pair<int,int>>Table(n+1);

    int Start = 1;

    Dijkstra(Graph,Table,Start,n);

    for( int i = 1; i <= n; i++ )
    {
        cout << Table[i].first << " ";
    }

    cout << "\n";
}
