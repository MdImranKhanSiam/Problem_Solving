#include <bits/stdc++.h>

using namespace std;

map<int,pair<int,vector<int>>>Tree;

void Insert( int parent, int child )
{
    Tree[parent].second.push_back(child);
    Tree[parent].first = 0;
}

void Set_Leaf( int root )
{
    stack<int>Stack;

    Stack.push(root);

    while( !Stack.empty() )
    {
        int node;

        node = Stack.top();

        Stack.pop();

        for( auto i : Tree[node].second )
        {
            Stack.push(i);

            if( Tree[i].second.empty() )
            {
                Tree[node].first++;
            }
        }
    }
}

int main()
{
    int n;

    cin >> n;

    for( int i = 2; i <= n; i++ )
    {
        int parent;

        cin >> parent;

        Insert(parent, i);
    }

    Set_Leaf(1);

    bool result = true;

    for( int i = 1; i <= n; i++ )
    {
        if( !Tree[i].second.empty() )
        {
            if( Tree[i].first < 3 )
            {
                result = false;
                break;
            }
        }
    }

    cout << ( (result==true) ? "YES" : "NO" ) << endl;
}
