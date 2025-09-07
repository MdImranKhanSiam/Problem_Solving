#include <bits/stdc++.h>

#include <windows.h>

using namespace std;

#define endl "\n"

pair<int,int>find_position( vector<vector<string>>&maze, string target )
{
    pair<int,int>index;

    for( int i = 0; i < maze.size(); i++ )
    {
        for( int j = 0; j < maze[i].size(); j++ )
        {
            if( maze[i][j] == target )
            {
                index = make_pair(i,j);

                break;
            }
        }
    }

    return index;
}

bool check_overflow( vector<vector<string>>&maze, int row, int column )
{
    bool result = false;

    if( row >= 0 && row < maze.size() && column >= 0 && column < maze[0].size() )
    {
        result = true;
    }

    return result;
}

vector<pair<int,int>>possible_path( vector<vector<string>>&maze, int row, int column )
{
    vector<pair<int,int>>path;

    vector<pair<int,int>>moves{{0,-1},{0,1},{-1,0},{1,0}};

    for( auto point : moves )
    {
        int new_row =  row+point.first;

        int new_column = column+point.second;

        if( check_overflow(maze,new_row,new_column) )
        {
            path.push_back(make_pair(new_row,new_column));
        }
    }

    return path;
}

void print_maze( vector<vector<string>>&maze )
{
    for( int i = 0; i < maze.size(); i++ )
    {
        for( int j = 0; j < maze[i].size(); j++ )
        {
            cout << setw(3) << maze[i][j];
        }

        cout << endl;
    }
}

void print_maze( vector<vector<int>>&maze )
{
    for( int i = 0; i < maze.size(); i++ )
    {
        for( int j = 0; j < maze[i].size(); j++ )
        {
            cout << setw(3) << maze[i][j];
        }

        cout << endl;
    }
}

vector<vector<int>>set_distance( vector<vector<string>>&maze, string target )
{
    vector<int>zero(maze[0].size(),0);

    vector<vector<int>>distance(maze.size(),zero);

    pair<int,int>position = find_position(maze,target);

    queue<pair<int,int>>Queue;

    Queue.push(position);

    while( !Queue.empty() )
    {
        pair<int,int>current = Queue.front();

        Queue.pop();

        int row = current.first;

        int column = current.second;

        int current_distance = distance[row][column];

        if( row == position.first && column == position.second )
        {
            current_distance = 0;

            distance[row][column] = -1;
        }

        vector<pair<int,int>>path = possible_path(maze,row,column);

        for( auto point : path )
        {
            int new_row =  point.first;

            int new_column = point.second;

            if( distance[new_row][new_column] == 0 )
            {
                distance[new_row][new_column] = current_distance+1;

                Queue.push(make_pair(new_row,new_column));
            }
        }
    }

    return distance;
}

void A_Star( vector<vector<string>>&maze, vector<vector<int>>&dist_start, vector<vector<int>>&dist_finish )
{
    pair<int,int>start, finish;

    start = find_position(maze,"S");

    finish = find_position(maze,"F");

    priority_queue< pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> >Queue;

    Queue.push(make_pair(0,make_pair(start.first,start.second)));

    vector<int>zero(maze[0].size(),0);

    vector<vector<int>>visited(maze.size(),zero);

    visited[start.first][start.second] = 1;

    while( !Queue.empty() )
    {
        pair<int,pair<int,int>>current = Queue.top();

        Queue.pop();

        int row = current.second.first;

        int column = current.second.second;

        if( maze[row][column] == "F" )
        {
            cout << "Found" << endl;

            break;
        }

        if( current.first != 0 )
        {
            maze[row][column] = to_string(dist_start[row][column]+dist_finish[row][column]);

            system("cls");

            print_maze(maze);

            cout << endl << endl;

            cout << "Distance From Start" << endl;

            print_maze(dist_start);

            cout << endl << "Distance From Finish" << endl;

            print_maze(dist_finish);

            Sleep(300);
        }

        vector<pair<int,int>>path = possible_path(maze,row,column);

        for( auto point : path )
        {
            int new_row = point.first;

            int new_column = point.second;

            if( visited[new_row][new_column] != 1 )
            {
                visited[new_row][new_column] = 1;

                int new_distance = dist_start[new_row][new_column]+dist_finish[new_row][new_column];

                if( maze[new_row][new_column] != "X" )
                {
                    Queue.push(make_pair(new_distance,make_pair(new_row,new_column)));
                }
            }
        }
    }
}

int main()
{
    vector<vector<string>>Maze
    {
        {"X",".","X","X","X",".","X",".",".",".",".","X"},
        {"X",".","X",".","X",".","X",".","X","F","X","X"},
        {".",".",".",".",".",".","X",".","X",".",".","X"},
        {".","X","X","X","X",".","X",".","X",".","X","."},
        {".",".",".",".","X",".",".","X",".",".",".","."},
        {"X",".","X",".","X",".","X","X","X","X",".","X"},
        {".",".","X",".",".",".",".",".",".","X",".","X"},
        {"X",".","X","X","X","X","X","X",".","X",".","."},
        {"X",".",".","S",".",".","X",".",".",".",".","X"},
        {"X","X",".",".",".","X","X",".","X","X","X","X"}
    };

    vector<vector<int>>Distance_From_Finish = set_distance(Maze,"F");

    vector<vector<int>>Distance_From_Start = set_distance(Maze,"S");

    print_maze(Maze);

    Sleep(5000);

    A_Star(Maze,Distance_From_Start,Distance_From_Finish);
}
