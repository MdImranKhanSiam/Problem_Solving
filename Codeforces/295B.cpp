#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void Modified_Floyd( vector<vector<ll>>&graph, vector<ll>&Delete, ll vertices, vector<ll>&store )
{
    for( ll k = 1; k <= vertices; k++ )
    {
        ll index = Delete[k-1];

        for( ll i = 1; i <= vertices; i++ )
        {
            for( ll j = 1; j <= vertices; j++ )
            {
                ll weight = graph[i][index]+graph[index][j];

                if( weight < graph[i][j] )
                {
                    graph[i][j] = weight;
                }
            }
        }

        ll sum = 0;

        for( ll i = 1; i <= k; i++ )
        {
            for( ll j = 1; j <= k; j++ )
            {
                sum += graph[Delete[i-1]][Delete[j-1]];
            }
        }

        store.push_back(sum);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<ll>Length(n+1);

    vector<vector<ll>>Graph(n+1,Length);

    for( ll i = 1; i <= n; i++ )
    {
        for( ll j = 1; j <= n; j++ )
        {
            ll weight;

            cin >> weight;

            Graph[i][j] = weight;
        }
    }

    vector<ll>Delete;

    for( ll i = 0; i < n; i++ )
    {
        ll vertex;

        cin >> vertex;

        Delete.push_back(vertex);
    }

    reverse(Delete.begin(),Delete.end());

    vector<ll>Store;

    Modified_Floyd(Graph,Delete,n,Store);

    for( auto itr = Store.rbegin(); itr != Store.rend(); itr++ )
    {
        cout << *itr << " ";
    }
}
