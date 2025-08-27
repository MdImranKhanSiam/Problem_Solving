#include <bits/stdc++.h>

using namespace std;

bool Bipartite( vector<vector<int>>&graph, vector<int>&team, int vertices )
{
    bool result = true;

    vector<int>found(vertices+1);

    for( int i = 1; i <= vertices; i++ )
    {
        if( result == false )
        {
            break;
        }

        if( found[i] != 1 )
        {
            found[i] = 1;

            unordered_map<int,int>visited;

            queue<int>Queue;

            Queue.push(i);

            visited[i] = 1;

            team[i] = 1;

            while( !Queue.empty() )
            {
                int node = Queue.front();

                Queue.pop();

                int color;

                if( team[node] == 1 )
                {
                    color = 2;
                }
                else
                {
                    color = 1;
                }

                for( auto point : graph[node] )
                {
                    if( team[node] == team[point] )
                    {
                        result = false;
                    }

                    if( visited[point] != 1 )
                    {
                        visited[point] = 1;

                        found[point] = 1;

                        Queue.push(point);

                        team[point] = color;
                    }
                }

                if( result == false )
                {
                    break;
                }
            }
        }
    }

    return result;
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<int>Team(n+1);

    vector<vector<int>>Graph(n+1);

    for( int i = 0; i < m; i++ )
    {
        int vertex1, vertex2;

        cin >> vertex1 >> vertex2;

        Graph[vertex1].push_back(vertex2);

        Graph[vertex2].push_back(vertex1);
    }

    if( Bipartite(Graph,Team,n) == true )
    {
        for( int i = 1; i <= n; i++ )
        {
            cout << Team[i] << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE";
    }


    cout << endl;
}
