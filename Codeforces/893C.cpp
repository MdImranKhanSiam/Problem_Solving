#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int DFS( vector<vector<ll>>&graph, vector<ll>&visited, vector<ll>&cost, ll start )
{
    ll Min = LLONG_MAX;

    stack<ll>Stack;

    Stack.push(start);

    visited[start] = 1;

    while( !Stack.empty() )
    {
        ll vertex = Stack.top();

        Stack.pop();

        if( cost[vertex] < Min )
        {
            Min = cost[vertex];
        }

        for( auto node : graph[vertex] )
        {
            if( visited[node] != 1 )
            {
                visited[node] = 1;

                Stack.push(node);
            }
        }
    }

    return Min;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, m, total_cost = 0;

    cin >> n >> m;

    vector<ll>Cost(n+1,0);

    vector<vector<ll>>Graph(n+1);

    for( int i = 1; i <= n; i++ )
    {
        ll value;

        cin >> value;

        Cost[i] = value;
    }

    for( int i = 0; i < m; i++ )
    {
        ll value1, value2;

        cin >> value1 >> value2;

        Graph[value1].push_back(value2);

        Graph[value2].push_back(value1);
    }

    vector<ll>Visited(n+1,0);

    for( int i = 1; i <= n; i++ )
    {
        if( Visited[i] != 1 )
        {
            total_cost += DFS(Graph,Visited,Cost,i);
        }
    }

    cout << total_cost << endl;
}
