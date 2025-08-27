#include <bits/stdc++.h>

using namespace std;

#define int unsigned long long int

void Dijkstra( vector<vector<pair<int,int>>>&graph, vector<pair<int,int>>&table, int vertices, int start )
{
    for( int i = 1; i <= vertices; i++ )
    {
        if( i == start )
        {
            table[i] = make_pair(0,start);
        }
        else
        {
            table[i] = make_pair(ULLONG_MAX,NULL);
        }
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Queue;

    Queue.push(make_pair(0,start));

    vector<int>visited(vertices+1);

    while( !Queue.empty() )
    {
        pair<int,int>current = Queue.top();

        Queue.pop();

        int vertex = current.second;

        if( visited[vertex] == 1 )
        {
            continue;
        }

        visited[vertex] = 1;

        for( auto point : graph[vertex] )
        {
            int node = point.first;

            if( visited[node] == 1 )
            {
                continue;
            }

            int weight, previous_distance, new_distance;

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

        Graph[vertex2].push_back(make_pair(vertex1,weight));
    }

    vector<pair<int,int>>Table(n+1);

    Dijkstra(Graph,Table,n,1);

    if( Table[n].first == ULLONG_MAX )
    {
        cout << -1 << "\n";
    }
    else
    {
        vector<int>store;

        int current = n;

        store.push_back(current);

        while( current != 1 )
        {
            current = Table[current].second;

            store.push_back(current);
        }

        for( auto itr = store.rbegin(); itr != store.rend(); itr++ )
        {
            cout << *itr << " ";
        }

        cout << "\n";
    }
}
