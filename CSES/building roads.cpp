#include <bits/stdc++.h>

using namespace std;

int Connected_Components( vector<vector<int>>&graph, int vertices, vector<pair<int,int>>&construct )
{
    int total = 0, previous = 0;

    vector<int>found(vertices+1);

    for( int i = 1; i <= vertices; i++ )
    {
        if( found[i] != 1 )
        {
            if( previous != 0 )
            {
                construct.push_back(make_pair(previous,i));

                previous = i;
            }
            else
            {
                previous = i;
            }

            total++;

            found[i] = 1;

            unordered_map<int,int>visited;

            stack<int>Stack;

            Stack.push(i);

            visited[i] = 1;

            while( !Stack.empty() )
            {
                int node = Stack.top();

                Stack.pop();

                for( auto point : graph[node] )
                {
                    if( visited[point] != 1 )
                    {
                        visited[point] = 1;

                        found[point] = 1;

                        Stack.push(point);
                    }
                }
            }
        }
    }

    return total;
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int>>Graph(n+1);

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    vector<pair<int,int>>Construct;

    cout << Connected_Components(Graph,n,Construct)-1 << endl;

    for( auto point : Construct )
    {
        cout << point.first << " " << point.second << endl;
    }
}
