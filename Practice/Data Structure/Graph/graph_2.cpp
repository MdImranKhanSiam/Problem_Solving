#include <bits/stdc++.h>

using namespace std;

void add_node( map<string,list<string>> &g, string a, string b )
{
    g[a].push_back(b);
}

void show_graph( map<string,list<string>> &g )
{
    for( auto point : g )
    {
        cout << point.first << " : ";

        for( auto nodes : point.second )
            cout << nodes << " ";

        cout << endl;
    }
}

int main()
{
    int nodes;

    cin >> nodes;

    map<string,list<string>>graph;

    for( int i = 0; i < nodes; i++ )
    {
        string x, y;

        cin >> x >> y;

        add_node(graph,x,y);
    }

    show_graph(graph);

    while( true )
    {
        string f;

        cout << "Find Graph: ";
        cin >> f;

        for( auto point : graph[f] )
            cout << point << " ";

        cout << endl;
    }
}

