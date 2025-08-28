#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void DFS( vector<vector<pair<ll,ll>>>&tree, ll vertices, vector<ll>&dp, vector<ll>&id, ll root )
{
    vector<ll>visited(vertices+1,0);

    stack<ll>Stack;

    Stack.push(root);

    visited[root] = 1;

    while( !Stack.empty() )
    {
        ll vertex = Stack.top();

        Stack.pop();

        for( auto point : tree[vertex] )
        {
            ll u = vertex;

            ll v = point.first;

            ll index = point.second;

            if( visited[v] != 1 )
            {
                visited[v] = 1;

                Stack.push(v);

                if( index >= id[u] )
                {
                    dp[v] = dp[u];
                }
                else if( index < id[u] )
                {
                    dp[v] = dp[u]+1;
                }

                id[v] = index;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll vertex;

        cin >> vertex;

        vector<vector<pair<ll,ll>>>Tree(vertex+1);

        for( int i = 1; i <= vertex-1; i++ )
        {
            ll vertex1, vertex2;

            cin >> vertex1 >> vertex2;

            Tree[vertex1].push_back(make_pair(vertex2,i));

            Tree[vertex2].push_back(make_pair(vertex1,i));
        }

        vector<ll>dp(vertex+1,0), id(vertex+1,0);

        dp[1] = 1;

        DFS(Tree,vertex,dp,id,1);

        ll result = LLONG_MIN;

        for( auto point : dp )
        {
            if( point > result )
            {
                result = point;
            }
        }

        cout << result << endl;
    }
}
