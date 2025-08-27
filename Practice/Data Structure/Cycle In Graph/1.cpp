#include <bits/stdc++.h>

using namespace std;

void Detect_Cycle( vector<vector<int>>&graph, vector<vector<int>>&cycle, int vertices )
{
    vector<int>Found(vertices+1), color(vertices+1,0), parent(vertices+1);

    for( int i = 1; i <= vertices; i++ )
    {
        if( Found[i] != 1 )
        {
            stack<int>Stack;

            Stack.push(i);

            parent[i] = i;

            while( !Stack.empty() )
            {
                int node = Stack.top();

                Stack.pop();

                color[i] = 1;

                Found[node] = 1;

                for( auto point : graph[node] )
                {
                    if( point == parent[node] )
                    {
                        continue;
                    }

                    if( color[point] == 0 )
                    {
                        Stack.push(point);

                        parent[point] = node;
                    }
                    else if( color[point] == 1 )
                    {
                        vector<int>store;

                        int current = node, target = parent[point];

                        store.push_back(current);

                        while( current != target )
                        {
                            current = parent[current];

                            store.push_back(current);
                        }

                        cycle.push_back(store);
                    }
                }

                color[node] = 2;
            }

        }
    }
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int>>Graph(n+1), Cycle;

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    Detect_Cycle(Graph,Cycle,n);

    int total = Cycle.size();

    cout << "Total Cycle: " << total << endl;

    for( int i = 0; i < total; i++ )
    {
        cout << "Cycle " << i+1 << ": ";

        for( auto point : Cycle[i] )
        {
            cout << point << " ";
        }

        cout << endl;
    }
}
