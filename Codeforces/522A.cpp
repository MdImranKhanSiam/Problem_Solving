#include <bits/stdc++.h>

using namespace std;

map<string,pair<int,vector<string>>>Tree;

void Insert( string parent, string child )
{
    Tree[parent].second.push_back(child);
}

int Level( string root )
{
    int Max = 0;

    stack<string>Stack;

    Stack.push(root);

    Tree[root].first = 1;

    while( !Stack.empty() )
    {
        string node;

        node = Stack.top();

        if( Tree[node].first > Max )
            Max = Tree[node].first;

        Stack.pop();

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

    getchar();

    for( int i = 0; i < n; i++ )
    {
        string s, parent, child;

        getline(cin, s);

        int space = 0;

        for( auto c : s )
        {
            c = tolower(c);

            if( isspace(c) )
                space++;

            if( space == 0 )
                child.push_back(c);

            if( space == 2 )
            {
                if( !isspace(c) )
                    parent.push_back(c);
            }
        }

        Insert(parent, child);
    }

    int depth;

    depth = Level("polycarp");

    cout << depth << endl;
}
