#include <bits/stdc++.h>

using namespace std;

int Connected_Components( vector<unordered_map<int,int>>&graph, int vertices )
{
    int total = 0;

    vector<int>found(vertices+1,0);

    for( int i = 1; i <= vertices; i++ )
    {
        if( found[i] != 1 )
        {
            found[i] = 1;

            total++;

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
                    if( visited[point.first] != 1 )
                    {
                        visited[point.first] = 1;

                        found[point.first] = 1;

                        Stack.push(point.first);
                    }
                }
            }
        }
    }

    return total;
}

int main()
{
    int n;

    cin >> n;

    vector<unordered_map<int,int>>Graph(n+1);

    vector<pair<int,int>>Axis(1);

    for( int i = 0; i < n; i++ )
    {
        int x, y;

        cin >> x >> y;

        Axis.push_back(make_pair(x,y));
    }

    for( int i = 1; i <= n-1; i++ )
    {
        for( int j = i+1; j <= n; j++ )
        {
            if( (Axis[i].first == Axis[j].first) || (Axis[i].second == Axis[j].second ) )
            {
                Graph[i][j] = 1;

                Graph[j][i] = 1;
            }
        }
    }

    cout << Connected_Components(Graph,n)-1 << endl;
}

