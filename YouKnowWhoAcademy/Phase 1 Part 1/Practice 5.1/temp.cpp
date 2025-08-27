#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

vector<ll>BFS( vector<vector<ll>>&graph, vector<ll>&visited, ll vertices, ll root )
{
    vector<ll>store;

    queue<ll>Queue;

    Queue.push(root);

    visited[root] = 1;

    while( !Queue.empty() )
    {
        ll vertex = Queue.front();

        Queue.pop();

        store.push_back(vertex);

        for( auto point : graph[vertex] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Queue.push(point);
            }
        }
    }

    return store;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll vertex, group;

    cin >> vertex >> group;

    vector<vector<ll>>Graph(vertex+1);

    for( int i = 1; i <= group; i++ )
    {
        ll total;

        cin >> total;

        if( total != 0 )
        {
            ll root;

            cin >> root;

            for( int i = 1; i <= total-1; i++ )
            {
                ll vertex;

                cin >> vertex;

                Graph[root].push_back(vertex);

                Graph[vertex].push_back(root);
            }
        }
    }

    vector<ll>visited(vertex+1,0);

    vector<ll>Union(vertex+1);

    for( int i = 1; i <= vertex; i++ )
    {
        if( visited[i] != 1 )
        {
            vector<ll>current = BFS(Graph,visited,vertex,i);

            ll density = current.size();

            for( auto point : current )
            {
                Union[point] = density;
            }
        }
    }

    for( int i = 1; i <= vertex; i++ )
    {
        cout << Union[i] << " ";
    }

    cout << endl;
}
