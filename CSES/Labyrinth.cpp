#include <bits/stdc++.h>

using namespace std;

void Modified_BFS( vector<vector<int>>&graph, vector<int>&parent, int vertices, int start )
{
    vector<int>visited(vertices+1);

    queue<int>Queue;

    Queue.push(start);

    visited[start] = 1;

    parent[start] = start;

    while( !Queue.empty() )
    {
        int node = Queue.front();

        Queue.pop();

        for( auto point : graph[node] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Queue.push(point);

                parent[point] = node;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int row, column;

    cin >> row >> column;

    int vertices = row*column;

    vector<string>store;

    for( int i = 0; i < row; i++ )
    {
        string s;

        cin >> s;

        store.push_back(s);
    }

    vector<vector<int>>Graph(vertices+1);

    int start, finish;

    for( int i = 0; i < row; i++ )
    {
        for( int j = 0; j < column; j++ )
        {
            if( store[i].at(j) == '.' || store[i].at(j) == 'A' || store[i].at(j) == 'B' )
            {
                int vertex = (i*column)+j+1;

                if( store[i].at(j) == 'A' )
                {
                    start = vertex;
                }

                if( store[i].at(j) == 'B' )
                {
                    finish = vertex;
                }

                if( j+1 <= column-1 )
                {
                    if( store[i].at(j+1) == '.' || store[i].at(j+1) == 'A' || store[i].at(j+1) == 'B' )
                    {
                        int vertex1 = (i*column)+j+2;

                        Graph[vertex].push_back(vertex1);

                        Graph[vertex1].push_back(vertex);
                    }
                }

                if( i+1 <= row-1 )
                {
                    if( store[i+1].at(j) == '.' || store[i+1].at(j) == 'A' || store[i+1].at(j) == 'B' )
                    {
                        int vertex1 = ((i+1)*column)+j+1;

                        Graph[vertex].push_back(vertex1);

                        Graph[vertex1].push_back(vertex);
                    }
                }
            }
        }
    }

    vector<int>Parent(vertices+1,0);

    Modified_BFS(Graph,Parent,vertices,start);

    if( Parent[finish] != 0 )
    {
        cout << "YES" << "\n";

        vector<int>result;

        int current = finish;

        result.push_back(current);

        while( current != Parent[current] )
        {
            current = Parent[current];

            result.push_back(current);
        }

        cout << result.size()-1 << "\n";

        int previous = 0;

        for( auto point = result.rbegin(); point != result.rend(); point++ )
        {
            if( previous == 0 )
            {
                previous = *point;

                continue;
            }

            if( abs(previous-*point) == 1 )
            {
                if( previous > *point )
                {
                    cout << "L";
                }
                else
                {
                    cout << "R";
                }
            }
            else
            {
                if( previous > *point )
                {
                    cout << "U";
                }
                else
                {
                    cout << "D";
                }
            }

            previous = *point;
        }
    }
    else
    {
        cout << "NO" << "\n";
    }

    cout << "\n";
}

