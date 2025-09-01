#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

bool check_overflow( pair<int,int>cell )
{
    bool result = true;

    if( cell.first < 0 || cell.first > 2 )
    {
        result = false;
    }

    if( cell.second < 0 || cell.second > 2 )
    {
        result = false;
    }

    return result;
}

void print_puzzle( vector<vector<int>>&matrix )
{
    for( auto row : matrix )
    {
        for( auto column : row )
        {
            cout << column << " ";
        }

        cout << endl;
    }
}

int check_puzzle( vector<vector<int>>&matrix )
{
    int result = 0;

    int eight_puzzle[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,0}
    };

    for( int i = 0; i < 3; i++ )
    {
        for( int j = 0; j < 3; j++ )
        {
            if( eight_puzzle[i][j] == matrix[i][j] )
            {
                result++;
            }
        }
    }

    return result;
}

int solve_eight_puzzle( vector<vector<int>>matrix, vector<int>&Backtrack, vector<vector<vector<int>>>&Backtrack_Puzzle )
{
    int tracker;

    priority_queue<pair<int,pair<vector<vector<int>>,int>>>Queue; //Priority,Puzzle,Backtrack_Index

    set<vector<vector<int>>>store_state;

    Backtrack.push_back(0);

    Backtrack_Puzzle.push_back(matrix);

    Queue.push(make_pair(check_puzzle(matrix),make_pair(matrix,0)));

    store_state.insert(matrix);

    while( !Queue.empty() )
    {
        pair<int,pair<vector<vector<int>>,int>>value = Queue.top();

        vector<vector<int>>priority_matrix = value.second.first;

        int current_track = value.second.second;

        Queue.pop();

        if( check_puzzle(priority_matrix) == 9 )
        {
//            cout << "Found Solution" << endl;

            tracker = current_track;

            break;
        }

        //Possible Moves

        vector<pair<int,int>>action{{0,-1},{0,1},{-1,0},{1,0}}; //Left, Right, Top, Bottom

        pair<int,int>empty_cell;

        for( int i = 0; i < 3; i++ )
        {
            for( int j = 0; j < 3; j++ )
            {
                if( priority_matrix[i][j] == 0 )
                {
                    empty_cell = make_pair(i,j);

                    break;
                }
            }
        }

        for( int i = 0; i < 4; i++ )
        {
            vector<vector<int>>current_matrix = priority_matrix;

            int new_row = action[i].first;

            int new_column = action[i].second;

            pair<int,int>swap_cell = make_pair(empty_cell.first+new_row, empty_cell.second+new_column);

            if( check_overflow(swap_cell) )
            {
                swap(current_matrix[empty_cell.first][empty_cell.second],current_matrix[swap_cell.first][swap_cell.second]);

                if( store_state.count(current_matrix) )
                {
                    continue;
                }
                else
                {
                    Backtrack.push_back(current_track);

                    Backtrack_Puzzle.push_back(current_matrix);

                    int new_track = Backtrack.size()-1;

                    Queue.push(make_pair(check_puzzle(current_matrix),make_pair(current_matrix,new_track)));

                    store_state.insert(current_matrix);


                }
            }
        }
    }

    return tracker;
}

int main()
{
    int n = 3;

//    //Very Long Solving State
//
//    vector<vector<int>>matrix
//    {
//        {8,7,0},
//        {3,4,5},
//        {6,2,1}
//    };


//    //Unsolvable State

//    vector<vector<int>>matrix
//    {
//        {1,2,3},
//        {4,5,6},
//        {8,7,0}
//    };


    //Solvable State

    vector<vector<int>>matrix
    {
        {1,3,6},
        {4,2,0},
        {7,5,8}
    };


    set<vector<vector<int>>>store_state;

    bool solved = false;

    vector<int>Backtrack; //For tracking the solving path

    vector<vector<vector<int>>>Backtrack_Puzzle;

    int Tracker = solve_eight_puzzle(matrix,Backtrack,Backtrack_Puzzle);

    vector<vector<vector<int>>>Solving_Path;

    int current = Tracker;

    Solving_Path.push_back(Backtrack_Puzzle[current]);

    while( current != Backtrack[current] )
    {
        current = Backtrack[current];

        Solving_Path.push_back(Backtrack_Puzzle[current]);
    }

    reverse(Solving_Path.begin(),Solving_Path.end());

    for( auto point : Solving_Path )
    {
        print_puzzle(point);

        cout << endl;
    }
}
