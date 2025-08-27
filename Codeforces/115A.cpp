#include <bits/stdc++.h>

using namespace std;

map<int,pair<int,vector<int>>>Tree;

void Insert( int parent, int child )
{
    Tree[parent].second.push_back(child);
}

int Level( int root )
{
    int Max = 0;

    stack<int>Stack;

    Stack.push(root);

    Tree[root].first = 1;

    while( !Stack.empty() )
    {
        int node;

        node = Stack.top();

        Stack.pop();

        if( Tree[node].first > Max )
            Max = Tree[node].first;

        for( auto i : Tree[node].second )
        {
            Stack.push(i);

            Tree[i].first = Tree[node].first+1;
        }
    }

    return Max;
}

int main()
{
    int n;

    cin >> n;

    vector<int>root;

    for( int i = 1; i <= n; i++ )
    {
        int value;

        cin >> value;

        if( value == -1 )
            root.push_back(i);
        else
            Insert(value, i);
    }

    int depth = 0;

    for( auto i : root )
    {
        int value;

        value = Level(i);

        if( value > depth )
            depth = value;
    }

    cout << depth << endl;
}

