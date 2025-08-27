#include <bits/stdc++.h>

using namespace std;

void Detect_Cycles( vector<vector<int>>&graph, vector<vector<int>>&cycles, int start )
{
    vector<int>parent(1000001), color(1000001,0);

    //Color (0 = Unvisited), (1 = In stack), (2 = Popped from stack)

    stack<int>Queue;

    Queue.push(start);

    parent[start] = start;

    while( !Queue.empty() )
    {
        int node = Queue.top();

        Queue.pop();

        color[node] = 2;

        for( auto point : graph[node] )
        {
            if( color[point] == 0 )
            {
                parent[point] = node;

                color[point] = 1;

                Queue.push(point);
            }
            else if( color[point] == 1 )
            {
                int ancestor = parent[point], current = node;

                vector<int>store;

                while( current != ancestor )
                {
                    store.push_back(current);

                    current = parent[current];
                }

                store.push_back(ancestor);

                store.push_back(point);

                for( auto point1 : store )
                {
                    cout << point1 << " ";
                }

                cycles.push_back(store);
            }
        }
    }
}

int main()
{
    vector<vector<int>>Graph(1000001), cycles;

    int edges, start;

    cin >> edges;

    for( int i = 0; i < edges; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        if( i == 0 )
        {
            start = vertex1;
        }

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    Detect_Cycles(Graph,cycles,start);

    int length = cycles.size();

    for( int i = 0; i < length; i++ )
    {
        cout << "Cycle " << i+1 << ": ";

        for( auto point : cycles[i] )
        {
            cout << point << " ";
        }

        cout << endl;
    }
}
