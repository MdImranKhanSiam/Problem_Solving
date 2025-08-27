#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

map<string,map<string,list<string>>>Graph;

void add_graph();
void show_graph(string g_name);
void show_all_graph();
void BFS();
void DFS();

int main()
{
    while( true )
    {
        cout << "1. Create Graph" << endl;
        cout << "2. Show Graph" << endl;
        cout << "3. Show All Graph" << endl;
        cout << "4. BFS" << endl;
        cout << "5. DFS" << endl;
        cout << "0. Exit" << endl;

        cout << endl << "Input: ";

        int input;

        cin >> input;

        if( input == 1 )
        {
            add_graph();
        }
        else if( input == 2 )
        {
            cout << endl << "Enter Graph Name To Show: ";
            string g_name;
            cin >> g_name;
            show_graph(g_name);
        }
        else if( input == 3 )
        {
            show_all_graph();
        }
        else if( input == 4 )
        {
            BFS();
        }
        else if( input == 5 )
        {
            DFS();
        }
        else if( input == 0 )
        {
            return 0;
        }

        cout << "Press Any Key To Continue";
        getchar();
        getchar();
        system("cls");
    }
}

void add_graph()
{
    cout << endl << "Graph Name: ";

    string g_name;

    cin >> g_name;

    cout << "Number Of Nodes: ";

    int nodes;

    cin >> nodes;

    cout << endl << "Start Adding Nodes" << endl << endl;

    for( int i = 0; i < nodes; i++ )
    {
        string from, to;

        cout << "From: ";

        cin >> from;

        cout << "To: ";

        cin >> to;

        Graph[g_name][from].push_back(to);
    }

    cout << "Completed" << endl;


}

void show_graph( string g_name )
{
    cout << endl;

    for( auto point : Graph[g_name] )
    {
        cout << point.first << " : ";

        for( auto nodes : point.second )
        {
            cout << nodes << " ";
        }

        cout << endl;
    }
}

void show_all_graph()
{
    cout << endl << "All Graphs Are Below" << endl << endl;

    for( auto graph : Graph )
    {
        cout << "Graph -> " << graph.first << endl << endl;

        for( auto point : graph.second )
        {
            cout << point.first << " : ";

            for( auto nodes : point.second )
            {
                cout << nodes << " ";
            }

            cout << endl;
        }

        cout << endl;
    }
}

void BFS()
{
    cout << "Graph Name: ";

    string g_name;

    cin >> g_name;

    show_graph(g_name);

    cout << endl << "Starting Node: ";

    string start;

    cin >> start;




}

void DFS()
{

}
