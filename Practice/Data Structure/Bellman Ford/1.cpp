//Bellman Ford Single Source Shortest Path With Negative Cycle Detection

#include <bits/stdc++.h>

using namespace std;

#define int long long int

bool Bellman_Ford( vector<vector<pair<int,int>>>&graph, vector<int>&distance, int vertices, int start )
{
    bool negative_cycle = false;

    distance[start] = 0;

    for( int i = 1; i <= vertices-1; i++ )
    {
        for( int j = 1; j <= vertices; j++ )
        {
            for( auto point : graph[j] )
            {
                int from, to, weight;

                from = j;

                to = point.second;

                weight = point.first;

                if( distance[from]+weight < distance[to] )
                {
                    distance[to] = distance[from]+weight;
                }
            }
        }
    }

    for( int j = 1; j <= vertices; j++ )
    {
        for( auto point : graph[j] )
        {
            int from, to, weight;

            from = j;

            to = point.second;

            weight = point.first;

            if( distance[from]+weight < distance[to] )
            {
                negative_cycle = true;

                distance[to] = distance[from]+weight;
            }
        }
    }

    return negative_cycle;
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

        Graph[vertex1].push_back(make_pair(weight*(-1),vertex2));
    }

    vector<int>Distance(n+1,INT_MAX);

    int start = 1;

    bool negative_cycle = Bellman_Ford(Graph,Distance,n,start);

    if( negative_cycle == true )
    {
        cout << -1 << "\n";
    }
    else
    {
        int Min = LLONG_MAX;

        for( int i = 1; i <= n; i++ )
        {
            if( Distance[i] < Min )
            {
                Min = Distance[i];
            }
        }

        cout << Min*(-1) << "\n";
    }
}
