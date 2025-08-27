#include <bits/stdc++.h>

using namespace std;

#define int unsigned long long int

void Modified_Dijkstra( vector<vector<pair<int,int>>>&graph, vector<pair<int,pair<int,int>>>&table, vector<unordered_map<int,int>>&hashmap, int start, int vertices )
{
    for( int i = 1; i <= vertices; i++ )
    {
        if( i == start )
        {
            table[i] = make_pair(0,make_pair(start,0));
        }
        else
        {
            table[i] = make_pair(ULLONG_MAX,make_pair(0,0));
        }
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Queue;

    Queue.push(make_pair(table[start].first,start));

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

            int weight = point.second, previous_distance, new_distance;

            previous_distance = table[node].first;

            new_distance = table[vertex].first+weight;

            if( new_distance < previous_distance || (new_distance == previous_distance && table[node].second.second > weight) )
            {
                table[node].first = new_distance;

                hashmap[table[node].second.first][node] = 0;

                hashmap[node][table[node].second.first] = 0;

                table[node].second.first = vertex;

                Queue.push(make_pair(new_distance,node));

                hashmap[vertex][node] = 1;

                hashmap[node][vertex] = 1;

                table[node].second.second = weight;
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

    vector<pair<int,pair<int,int>>>Table(n+1);

    vector<vector<int>>Query;

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2, weight;

        cin >> vertex1 >> vertex2 >> weight;

        Graph[vertex1].push_back(make_pair(vertex2,weight));

        Graph[vertex2].push_back(make_pair(vertex1,weight));

        vector<int>temp;

        temp.push_back(vertex1);

        temp.push_back(vertex2);

        temp.push_back(weight);

        Query.push_back(temp);
    }

    int Start;

    cin >> Start;

    Modified_Dijkstra(Graph,Table,Hashmap,Start,n);

    int cost = 0;

    vector<int>store;

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2, weight;

        vertex1 = Query[i][0];

        vertex2 = Query[i][1];

        weight = Query[i][2];

        if( Hashmap[vertex1][vertex2] == 1 || Hashmap[vertex2][vertex1] == 1 )
        {
            cost += weight;

            store.push_back(i+1);
        }
    }

    cout << cost << "\n";

    for( auto point : store )
    {
        cout << point << " ";
    }

    cout << "\n";
}
