#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void DFS( vector<vector<ll>>&Tree, ll vertices, ll &length, ll &finish, ll root )
{
    vector<ll>Distance(vertices+1,0);

    stack<ll>Stack;

    Stack.push(root);

    while( !Stack.empty() )
    {
        ll vertex = Stack.top();

        Stack.pop();

        for( auto point : Tree[vertex] )
        {
            Stack.push(point);

            Distance[point] = Distance[vertex]+1;

            if( Distance[point] > length )
            {
                length = Distance[point];

                finish = point;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll Case = 0;

    ll vertices;

    while( true )
    {
        Case++;

        cin >> vertices;

        if( vertices == 0 )
        {
            break;
        }

        ll root;

        cin >> root;

        vector<vector<ll>>Tree(vertices+1);

        ll v1, v2;

        while( true )
        {
            cin >> v1 >> v2;

            if( v1 == 0 && v2 == 0 )
            {
                break;
            }

            Tree[v1].push_back(v2);
        }

        ll Length = -1, Finish;

        DFS(Tree,vertices,Length,Finish,root);

        cout << "Case " << Case << ": The longest path from " << root << " has length " << Length << ", finishing at " << Finish << "." << endl;
    }
}
