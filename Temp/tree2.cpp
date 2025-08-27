#include <bits/stdc++.h>

using namespace std;

map<string,pair<int,vector<string>>>Tree;

void Insert( string parent, string child )
{
    Tree[parent].second.push_back(child);

    Tree[child].first = Tree[parent].first + 1;
}

vector<string> DFS( string root )
{
    stack<string>Stack;

    if( !root.empty() )
        Stack.push(root);

    vector<string>store;

    while( !Stack.empty() )
    {
        string node;

        node = Stack.top();

        Stack.pop();

        store.push_back(node);

        for( auto i : Tree[node].second )
            Stack.push(i);
    }

    return store;
}

vector<string> DFS( string root, int &Level )
{
    stack<string>Stack;

    if( !root.empty() )
        Stack.push(root);

    vector<string>store;

    int Max_Lvl = 0;

    while( !Stack.empty() )
    {
        string node;

        node = Stack.top();

        Stack.pop();

        store.push_back(node);

        if( Tree[node].first > Max_Lvl )
            Max_Lvl = Tree[node].first;

        for( auto i : Tree[node].second )
            Stack.push(i);
    }

    Level = Max_Lvl;

    return store;
}

int main()
{
    cout << "Number Of Nodes: ";

    int nodes;

    cin >> nodes;

    string root;

    for( int i = 0; i < nodes; i++ )
    {
        string parent, child;

        if( i == 0 )
        {
            cout << "Root Node: ";
            cin >> root;

            Tree[root].first = 1;
        }
        else
        {
            cout << "New Node" << endl << endl;
            cout << "Parent: ";
            cin >> parent;
            cout << "Child: ";
            cin >> child;

            Insert(parent, child);
        }
    }

    vector<string>traversal;

    traversal = DFS(root);

    for( auto i : traversal )
        cout << i << " ";

    cout << endl;

    int depth;

    DFS(root, depth);

    cout << "Depth: " << depth << endl;
}
