#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool BFS( vector<vector<ll>>&tree, vector<ll>&vertex_value, vector<pair<ll,ll>>&level, vector<ll>&visited, ll vertices, ll target, ll root, ll current, ll total )
{
    bool result = false;

    ll Count = 1;

    queue<ll>Queue;

    Queue.push(root);

    visited[root] = current;

    level[root].first = 1;

    level[root].second = 1;

    bool Finish = false;

    while( !Queue.empty() )
    {
        if( Finish == true )
        {
            break;
        }

        ll vertex = Queue.front();

        Queue.pop();

        for( auto point : tree[vertex] )
        {
            if( visited[point] != current )
            {
                visited[point] = current;

                Queue.push(point);

                level[point].first = level[vertex].first+1;

                level[point].second = level[vertex].second;

                if( vertex_value[point] == target )
                {
                    level[point].second++;

                    Count++;
                }

                ll nodes = level[point].first;

                ll targets = level[point].second;

                if( nodes > 1 )
                {
                    nodes /= 2;

                    if( targets > nodes )
                    {
                        result = true;

                        break;
                    }
                }

                if( Count == total )
                {
                    Finish = true;

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
        ll n;

        cin >> n;

        vector<vector<ll>>Tree(n+1),Value(n+1);

        vector<ll>Vertex_Value(n+1);

        for( int i = 1; i <= n; i++ )
        {
            ll value;

            cin >> value;

            Vertex_Value[i] = value;

            Value[value].push_back(i);
        }

        for( int i = 0; i < n-1; i++ )
        {
            ll vertex1, vertex2;

            cin >> vertex1 >> vertex2;

            Tree[vertex1].push_back(vertex2);

            Tree[vertex2].push_back(vertex1);
        }

        vector<pair<ll,ll>>Level(n+1);

        vector<ll>Visited(n+1,0);

        ll Current = 1;

        for( int i = 1; i <= n; i++ )
        {
            ll length = Value[i].size();

            if( length == 0 || length == 1 )
            {
                cout << 0;
            }
            else
            {
                bool found = false;

                for( int j = 0; j < length; j++ )
                {
                    if( BFS(Tree,Vertex_Value,Level,Visited,n,i,Value[i][j],Current++,length) )
                    {
                        found = true;

                        break;
                    }
                }

                if( found == true )
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }

        cout << endl;
    }
}
