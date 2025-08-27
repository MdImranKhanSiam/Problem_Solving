#include <bits/stdc++.h>

using namespace std;

void Modified_BFS( vector<vector<int>>&graph, vector<int>&parent, vector<int>&player_exit, vector<int>&monsters, vector<int>&exit, int vertices, int start )
{
    vector<int>visited(vertices+1), level(vertices+1);

    queue<int>Queue;

    Queue.push(start);

    visited[start] = 1;

    parent[start] = start;

    level[start] = 0;

    while( !Queue.empty() )
    {
        int node = Queue.front();

        Queue.pop();

        if( monsters[node] == 1 )
        {
            monsters[node] = 2;
        }

        if( exit[node] == 1 )
        {
            exit[node] = 2;

            player_exit[node] = level[node];
        }

        for( auto point : graph[node] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Queue.push(point);

                parent[point] = node;

                level[point] = level[node]+1;
            }
        }
    }
}

void Modified_BFS( vector<vector<int>>&graph, vector<int>&monster_exit, vector<int>&exit, int vertices, vector<int>&monsters )
{
    vector<int>visited(vertices+1), level(vertices+1);

    queue<int>Queue;

    for( auto point : monsters )
    {
        Queue.push(point);

        level[point] = 0;

        visited[point] = 1;
    }

    while( !Queue.empty() )
    {
        int node = Queue.front();

        Queue.pop();

        if( exit[node] == 2 )
        {
            monster_exit[node] = level[node];
        }

        for( auto point : graph[node] )
        {
            if( visited[point] != 1 )
            {
                visited[point] = 1;

                Queue.push(point);

                level[point] = level[node]+1;
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

    vector<string>store;

    for( int i = 0; i < row; i++ )
    {
        string s;

        cin >> s;

        store.push_back(s);
    }

    int start, vertices;

    vertices = row*column;

    vector<vector<int>>Graph(vertices+1);

    vector<int>monsters(vertices+1,0), exit(vertices+1,0);

    for( int i = 0; i < row; i++ )
    {
        for( int j = 0; j < column; j++ )
        {
            if( store[i].at(j) == '.' || store[i].at(j) == 'M' || store[i].at(j) == 'A' )
            {
                int vertex = (i*column)+j+1;

                if( store[i].at(j) == 'A' )
                {
                    if( (i == 0) || (j == 0) || (i == row-1) || (j == column-1) )
                    {
                        exit[vertex] = 1;
                    }

                    start = vertex;
                }
                else if( store[i].at(j) == 'M' )
                {
                    monsters[vertex] = 1;
                }
                else
                {
                    if( (i == 0) || (j == 0) || (i == row-1) || (j == column-1) )
                    {
                        exit[vertex] = 1;
                    }
                }

                if( j+1 <= column-1 )
                {
                    if( store[i].at(j+1) == '.' || store[i].at(j+1) == 'M' || store[i].at(j+1) == 'A' )
                    {
                        int vertex1 = (i*column)+j+2;

                        Graph[vertex].push_back(vertex1);

                        Graph[vertex1].push_back(vertex);
                    }
                }

                if( i+1 <= row-1 )
                {
                    if( store[i+1].at(j) == '.' || store[i+1].at(j) == 'M' || store[i+1].at(j) == 'A' )
                    {
                        int vertex1 = ((i+1)*column)+j+1;

                        Graph[vertex].push_back(vertex1);

                        Graph[vertex1].push_back(vertex);
                    }
                }
            }
        }
    }

    vector<int>Parent(vertices+1), Player_Exit(vertices+1,INT_MAX), Monster_Exit(vertices+1,INT_MAX);

    Modified_BFS(Graph,Parent,Player_Exit,monsters,exit,vertices,start);

    vector<int>store_m;

    for( int i = 1; i <= vertices; i++ )
    {
        if( monsters[i] == 2 )
        {
            store_m.push_back(i);
        }
    }

    Modified_BFS(Graph,Monster_Exit,exit,vertices,store_m);

    bool found = false;

    for( int i = 1; i <= vertices; i++ )
    {
        if( exit[i] == 2 )
        {
            if( Player_Exit[i] < Monster_Exit[i] )
            {
                found = true;

                cout << "YES" << "\n" << Player_Exit[i] << "\n";

                vector<int>path;

                int current = i;

                path.push_back(current);

                while( current != start )
                {
                    current = Parent[current];

                    path.push_back(current);
                }

                int previous = 0;

                for( auto point = path.rbegin(); point != path.rend(); point++ )
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

                break;
            }
        }
    }

    if( found == false )
    {
        cout << "NO" << "\n";
    }
}
