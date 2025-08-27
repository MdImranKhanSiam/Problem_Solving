#include <bits/stdc++.h>

using namespace std;

void add_edge( unordered_map<string,unordered_map<string,int>>&graph, string vertex1, string vertex2, int weight )
{
    graph[vertex1][vertex2] = weight;
    graph[vertex2][vertex1] = weight;
}

void Dijkstra( unordered_map<string,unordered_map<string,int>>&graph, unordered_map<string,pair<int,string>>&Table, string start )
{
    unordered_map<string,int>unvisited, priority;

    for( auto node : graph )
    {
        string temp = node.first;

        unvisited[temp] = 1;

        if( temp == start )
        {
            Table[temp] = make_pair(0,NULL);
        }
        else
        {
            Table[temp] = make_pair(INT_MAX,NULL);
        }
    }

    string current;

    priority[start] = 0;

    while( true )
    {
        bool finish = true;

        int minimum = INT_MAX;

        for( auto value : priority )
        {
            finish = false;

            int temp = value.second;

            if( temp < minimum )
            {
                minimum = temp;
                current = value.first;
            }
        }

        if( finish == true )
        {
            break;
        }

        unvisited[current] = 0;
        priority.erase(current);

        for( auto node : graph[current] )
        {
            string temp = node.first;

            if( unvisited[temp] == 1 )
            {
                int calc = Table[current].first+graph[current][temp];

                if( Table[temp].first > calc )
                {
                    Table[temp].first = calc;
                    Table[temp].second = current;

                    priority[temp] = calc;
                }
            }
        }
    }
}

int main()
{
    unordered_map<string,unordered_map<string,int>>Graph;

    int edges;

    cout << "Number Of Edges: ";

    cin >> edges;

    for( int i = 0; i < edges; i++ )
    {
        string vertex1, vertex2;

        int weight;

        cout << "Vertex 1: ";

        cin >> vertex1;

        cout << "Vertex 2: ";

        cin >> vertex2;

        cout << "Weight: ";

        cin >> weight;

        add_edge(Graph, vertex1, vertex2, weight);
    }

    string start;

    cout << "Starting Vertex: ";
    cin >> start;

    unordered_map<string,pair<int,string>>Table;

    Dijkstra(Graph,Table,start);

    cout << endl << "Dijkstra's Shortest Path Table" << endl << endl;

    for( auto node : Table )
    {
        cout << "Vertex " << node.first << " : ";

        cout << "Shortest Distance: " << node.second.first << " ... ";
        cout << "Previous Vertex: " << node.second.second << endl;
    }

    string current, start_point;

    cin >> current >> start_point;

    unordered_map<string,int>visited;

    while( true )
    {
        visited[current] = 1;

        current = Table[current].second;

        if( current == start_point )
        {
            cout << "Path Found" << endl;

            break;
        }

        if( visited[current] == 1 )
        {
            cout << "Path Not Found" << endl;

            break;
        }
    }

}

