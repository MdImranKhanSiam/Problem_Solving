#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll Depth( vector<vector<ll>>&tree, ll vertices, ll root )
{
    ll Max = 0;

    vector<ll>visited(vertices+1,0), level(vertices+1,0);

    stack<ll>Stack;

    Stack.push(root);

    level[root]++;

    while( !Stack.empty() )
    {
        ll vertex = Stack.top();

        Stack.pop();

        for( auto point : tree[vertex] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Stack.push(point);

                level[point] = level[vertex]+1;

                Max = max(Max,level[point]);
            }
        }
    }

    return Max;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<vector<ll>>Tree(n+1);

    vector<ll>roots;

    for( int i = 1; i <= n; i++ )
    {
        ll value;

        cin >> value;

        if( value == -1 )
        {
            roots.push_back(i);
        }
        else
        {
            Tree[value].push_back(i);

            Tree[i].push_back(value);
        }
    }

    ll depth = 0;

    for( auto point : roots )
    {
        depth = max(depth,Depth(Tree,n,point));
    }

    cout << depth << endl;
}
