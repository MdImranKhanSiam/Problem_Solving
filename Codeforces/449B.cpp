#include <bits/stdc++.h>

using namespace std;

#define int unsigned long long int

void Dijkstra( vector<vector<pair<int,pair<int,int>>>>&graph, vector<vector<int>>&table, int vertices, int start )
{
    for( int i = 1; i <= vertices; i++ )
    {
        if( i == start )
        {
            table[i][0] = 0;

            table[i][1] = start;
        }
        else
        {
            table[i][0] = ULLONG_MAX;

            table[i][1] = NULL;
        }
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Queue;

    Queue.push(make_pair(table[start][0],start));

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

            int weight = point.second.first, previous_distance, new_distance, color = point.second.second;

            previous_distance = table[node][0];

            new_distance = table[vertex][0]+weight;

            if( new_distance < previous_distance )
            {
                table[node][0] = new_distance;

                table[node][1] = vertex;

                table[node][2] = color;

                Queue.push(make_pair(new_distance,node));
            }
            else if( new_distance == previous_distance )
            {
                if( color == 1 )
                {
                    table[node][2] = color;

                    table[node][1] = vertex;
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

    vector<vector<pair<int,pair<int,int>>>>Graph(n+1);

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2, weight;

        cin >> vertex1 >> vertex2 >> weight;

        Graph[vertex1].push_back(make_pair(vertex2,make_pair(weight,1)));

        Graph[vertex2].push_back(make_pair(vertex1,make_pair(weight,1)));
    }

    vector<int>temp(3);

    vector<vector<int>>Table(n+1,temp);

    for( int i = 0; i < k; i++ )
    {
        int vertex2, weight;

        cin >> vertex2 >> weight;

        Graph[1].push_back(make_pair(vertex2,make_pair(weight,2)));

        Graph[vertex2].push_back(make_pair(1,make_pair(weight,2)));
    }

    Dijkstra(Graph,Table,n,1);

    int Routes = 0;

    for( int i = 2; i <= n; i++ )
    {
        if( Table[i][2] == 2 )
        {
            Routes++;
        }
    }

    cout << k-Routes << endl;
}
