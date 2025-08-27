#include <bits/stdc++.h>

using namespace std;

#define int long long int

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
            table[i] = make_pair(LLONG_MAX,NULL);
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
            if( visited[point.second] != 1 )
            {
                int node, weight, previous_weight, new_weight;

                node = point.second;

                weight = point.first;

                previous_weight = table[node].first;

                new_weight = table[vertex].first+weight;

                if( new_weight < previous_weight )
                {
                    table[node].first = new_weight;

                    table[node].second = vertex;

                    Queue.push(make_pair(new_weight,node));
                }
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

    vector<unordered_map<int,int>>Hashmap(n+1);

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2, weight;

        cin >> vertex1 >> vertex2 >> weight;

        Graph[vertex1].push_back(make_pair(weight,vertex2));

        Hashmap[vertex1][vertex2] = weight;
    }

    vector<pair<int,int>>Table(n+1);

    Dijkstra(Graph,Table,n,1);

    int current = n, previous = n, Max = LLONG_MIN;

    while( current != 1 )
    {
        current = Table[current].second;

        int value = Hashmap[current][previous];

        if( value > Max )
        {
            Max = value;
        }

        previous = current;
    }

    int x = Max/2;

    cout << Table[n].first-(Max-x) << "\n";
}
