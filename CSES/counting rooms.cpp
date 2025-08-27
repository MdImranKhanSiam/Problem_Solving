#include <bits/stdc++.h>

using namespace std;

int Connected_Components( vector<vector<int>>&graph, vector<int>&vertices )
{
    int total = 0;

    unordered_map<int,int>found;

    for( auto point : vertices )
    {
        if( found[point] != 1 )
        {
            total++;

            found[point] = 1;

            unordered_map<int,int>visited;

            stack<int>Stack;

            Stack.push(point);

            visited[point] = 1;

            while( !Stack.empty() )
            {
                int node = Stack.top();

                Stack.pop();

                for( auto point1 : graph[node] )
                {
                    if( visited[point1] != 1 )
                    {
                        visited[point1] = 1;

                        found[point1] = 1;

                        Stack.push(point1);
                    }
                }
            }
        }
    }

    return total;
}

int main()
{
    int row, column;

    cin >> row >> column;

    string s[row];

    for( int i = 0; i < row; i++ )
    {
        cin >> s[i];
    }

    vector<int>store(1,0), vertices;

    vector<vector<int>>Graph((row*column)+1);

    for( int i = 1; i <= row; i++ )
    {
        for( int j = 1; j <= column; j++ )
        {
            if( s[i-1].at(j-1) == '.' )
            {
                int current = ((i-1)*column)+j;

                store.push_back(1);

                Graph[current].push_back(current);

                vertices.push_back(current);

                int top, left;

                if( i != 1 )
                {
                    top = ((i-2)*column)+j;

                    if( store[top] == 1 )
                    {
                        Graph[current].push_back(top);

                        Graph[top].push_back(current);
                    }
                }

                if( j != 1 )
                {
                    left = ((i-1)*column)+(j-1);

                    if( store[left] == 1 )
                    {
                        Graph[current].push_back(left);

                        Graph[left].push_back(current);
                    }
                }
            }
            else
            {
                store.push_back(0);
            }
        }
    }

    cout << Connected_Components(Graph, vertices) << endl;
}
