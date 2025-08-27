#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll Distance_BFS( vector<vector<ll>>&tree, vector<ll>&node_value, vector<ll>&visited, vector<ll>&level, ll root, ll target, ll serial )
{
    bool found = false;

    ll result = 0;

    queue<ll>Queue;

    Queue.push(root);

    visited[root] = serial;

    level[root] = 0;

    while( !Queue.empty() && found == false )
    {
        ll vertex = Queue.front();

        Queue.pop();

        for( auto point : tree[vertex] )
        {
            if( visited[point] != serial )
            {
                visited[point] = serial;

                level[point] = level[vertex]+1;

                Queue.push(point);

                if( node_value[point] == target )
                {
                    found = true;

                    result = level[point];

                    node_value[point] = 0;

                    node_value[root] = 0;

                    break;
                }
            }
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, op = 0;

        cin >> n;

        vector<ll>node_value(1), target;

        vector<vector<ll>>Tree(n+1);

        for( int i = 1; i <= n; i++ )
        {
            ll value;

            cin >> value;

            node_value.push_back(value);

            if( value == 1 )
            {
                target.push_back(i);
            }
        }

        for( int i = 1; i < n; i++ )
        {
            ll vertex1, vertex2;

            cin >> vertex1 >> vertex2;

            Tree[vertex1].push_back(vertex2);

            Tree[vertex2].push_back(vertex1);
        }

        vector<ll>visited(n+1,0), level(n+1,0);

        ll limit = target.size();

        if( limit % 2 == 0 )
        {
            for( int i = 0; i < limit; i++ )
            {
                if( node_value[target[i]] == 1 )
                {
                    op += Distance_BFS(Tree,node_value,visited,level,target[i],1,i+1);
                }
            }

            cout << op << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
