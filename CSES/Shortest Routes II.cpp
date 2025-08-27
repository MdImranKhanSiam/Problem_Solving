//Floyd Warshall Algorithm

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void Floyd( vector<vector<ll>>&graph, ll vertices )
{
    for( ll k = 1; k <= vertices; k++ )
    {
        for( ll i = 1; i <= vertices; i++ )
        {
            for( ll j = 1; j <= vertices; j++ )
            {
                if( ( graph[i][k] + graph[k][j] < graph[i][j] ) && graph[i][k] != LLONG_MAX && graph[k][j] != LLONG_MAX )
                {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, m, q;

    cin >> n >> m >> q;

    vector<ll>Length(n+1,LLONG_MAX);

    vector<vector<ll>>Graph(n+1,Length), T_Graph;

    for( int i = 1; i <= n; i++ )
    {
        Graph[i][i] = 0;
    }

    for( ll i = 0; i < m; i++ )
    {
        ll vertex1, vertex2, weight;

        cin >> vertex1 >> vertex2 >> weight;

        if( Graph[vertex1][vertex2] > weight )
        {
            Graph[vertex1][vertex2] = weight;

            Graph[vertex2][vertex1] = weight;
        }
    }

    T_Graph = Graph;

    Floyd(T_Graph,n);

    for( int i = 0; i < q; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        if( T_Graph[vertex1][vertex2] != LLONG_MAX )
        {
            cout << T_Graph[vertex1][vertex2] << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}

