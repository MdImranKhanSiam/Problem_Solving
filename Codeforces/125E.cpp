#include <bits/stdc++.h>

using namespace std;

#define int long long int

void Prim_MST( vector<vector<pair<int,int>>>&graph, vector<vector<pair<int,int>>>&mst, int vertices, int start )
{
    vector<int>visited(vertices+1);

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>Queue;

    for( auto point : graph[start] )
    {
        Queue.push(make_pair(point.first,make_pair(start,point.second)));
    }

    visited[start] = 1;

    int found = 0;

    while( !Queue.empty() && found != vertices-1 )
    {
        pair<int,pair<int,int>>current = Queue.top();

        Queue.pop();

        int vertex1, vertex2, weight;

        vertex1 = current.second.first;

        vertex2 = current.second.second;

        weight = current.first;

        if( visited[vertex1] == 1 && visited[vertex2] == 1 )
        {
            continue;
        }

        found++;

        mst[vertex1].push_back(make_pair(weight,vertex2));

        mst[vertex2].push_back(make_pair(weight,vertex1));

        int New;

        if( visited[vertex1] == 1 )
        {
            New = vertex2;
        }
        else
        {
            New = vertex1;
        }

        visited[New] = 1;

        for( auto point : graph[New] )
        {
            if( visited[point.second] != 1 )
            {
                Queue.push(make_pair(point.first,make_pair(New,point.second)));
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

    vector<vector<pair<int,int>>>Graph(n+1), MST(n+1);

    vector<unordered_map<int,int>>Hashmap(n+1);

    vector<int>Degree(n+1);

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2, weight;

        cin >> vertex1 >> vertex2 >> weight;

        Degree[vertex1]++;

        Degree[vertex2]++;

        Graph[vertex1].push_back(make_pair(weight,vertex2));

        Graph[vertex2].push_back(make_pair(weight,vertex1));

        Hashmap[vertex1][vertex2] = i+1;

        Hashmap[vertex2][vertex1] = i+1;
    }

    int capital_length = Graph[1].size();

    if( capital_length < k || ( n > 1 && k == 0 ) )
    {
        cout << -1 << "\n";

        return 0;
    }

    vector<int>Targets(n+1);

    for( int i = 2; i <= n; i++ )
    {
        if( Degree[i] == 1 && Graph[i][0].second == 1 )
        {
            Targets[i] = 1;
        }
    }

    for( int i = 0; i < capital_length; i++ )
    {
        int vertex = Graph[1][i].second;

        if( Targets[vertex] == 1 )
        {
            Graph[1][i].first = 0;
        }
    }

    sort(Graph[1].begin(), Graph[1].end());

    int limit = k, current = 0;

    for( int i = 0; i < capital_length; i++ )
    {
        if( current != limit )
        {
            Graph[1][i].first = 0;

            current++;
        }
        else
        {
            Graph[1][i].first = LLONG_MAX;
        }
    }

    Prim_MST(Graph,MST,n,1);

    cout << n-1 << "\n";

    for( int i = 1; i <= n; i++ )
    {
        int vertex1, vertex2;

        vertex1 = i;

        for( auto point : MST[i] )
        {
            vertex2 = point.second;

            if( Hashmap[vertex1][vertex2] != -1 )
            {
                cout << Hashmap[vertex1][vertex2] << " ";

                Hashmap[vertex1][vertex2] = -1;

                Hashmap[vertex2][vertex1] = -1;
            }
        }
    }

    cout << "\n";
}
