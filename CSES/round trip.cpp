#include <bits/stdc++.h>

using namespace std;

void Detect_Cycle( vector<vector<int>>&graph, vector<vector<int>>&cycle, int vertices )
{
    vector<int>Collected(vertices+1);

    vector<int>color(vertices+1,0), parent(vertices+1);

    for( int i = 1; i <= vertices; i++ )
    {
        if( Collected[i] != 1 )
        {
            stack<int>Stack;

            Stack.push(i);

            parent[i] = i;

            while( !Stack.empty() )
            {
                int node = Stack.top();

                Stack.pop();

                Collected[node] = 1;

                color[node] = 2;

                for( auto point : graph[node] )
                {
                    if( color[point] == 0 )
                    {
                        color[point] = 1;

                        Stack.push(point);

                        parent[point] = node;
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

                        cycle.push_back(store);


                    }
                }
            }
        }
    }
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int>>Graph(n+1), cycle;

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    Detect_Cycle(Graph,cycle,n);

    int total_cycle = cycle.size();

    cout << "Total Cycle: " << total_cycle << endl;

    for( int i = 0; i < total_cycle; i++ )
    {
        cout << "Cycle " << i+1 << ": ";

        for( auto point : cycle[i] )
        {
            cout << point << " ";
        }

        cout << endl;
    }
}
