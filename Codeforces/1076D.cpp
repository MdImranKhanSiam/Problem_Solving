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
            int node, weight;

            node = point.second;

            weight = point.first;

            if( visited[node] != 1 )
            {
                int previous_weight, new_weight;

                previous_weight = table[node].first;

                new_weight = table[vertex].first+weight;

                if( new_weight < previous_weight )
                {
                    table[node] = make_pair(new_weight,vertex);

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

    int n, m, k;

    cin >> n >> m >> k;

    vector<vector<pair<int,int>>>Graph(n+1);

    vector<unordered_map<int,int>>Hashmap(n+1);

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2, weight;

        cin >> vertex1 >> vertex2 >> weight;

        Hashmap[vertex1][vertex2] = i+1;

        Hashmap[vertex2][vertex1] = i+1;

        Graph[vertex1].push_back(make_pair(weight,vertex2));

        Graph[vertex2].push_back(make_pair(weight,vertex1));
    }

    vector<pair<int,int>>Table(n+1);

    Dijkstra(Graph,Table,n,1);

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>Queue;

    for( int i = 2; i <= n; i++ )
    {
        int vertex, parent, weight;

        vertex = i;

        parent = Table[i].second;

        weight = Table[i].first;

        Queue.push(make_pair(weight,make_pair(parent,vertex)));
    }

    vector<int>store;

    for( int i = 0; i < k; i++ )
    {
        pair<int,pair<int,int>>current = Queue.top();

        Queue.pop();

        int vertex, parent;

        vertex = current.second.second;

        parent = current.second.first;

        if( Hashmap[parent][vertex] != -1 )
        {
            store.push_back(Hashmap[parent][vertex]);

            Hashmap[parent][vertex]=-1;
        }
    }

    cout << store.size() << "\n";

    for( auto point : store )
    {
        cout << point << " ";
    }

    cout << "\n";
}

