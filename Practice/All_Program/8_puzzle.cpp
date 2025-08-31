#include <bits/stdc++.h>

#include <windows.h>

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

bool check_puzzle( vector<vector<int>>&matrix )
{
    bool result = true;

    int eight_puzzle[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,0}
    };

    for( int i = 0; i < 3; i++ )
    {
        if( result == false )
        {
            break;
        }

        for( int j = 0; j < 3; j++ )
        {
            if( eight_puzzle[i][j] != matrix[i][j] )
            {
                result = false;

                break;
            }
        }
    }

    return result;
}

void solve_eight_puzzle( vector<vector<int>>matrix, set<vector<vector<int>>>&store_state, bool &solved, vector<vector<vector<int>>>&solving_path )
{
    if( solved == true )
    {
        return;
    }

    if( check_puzzle(matrix) )
    {
        solved = true;

        return;
    }

    store_state.insert(matrix);

    vector<pair<int,int>>action{{0,-1},{0,1},{-1,0},{1,0}}; //Left, Right, Top, Bottom

    pair<int,int>empty_cell;

    for( int i = 0; i < 3; i++ )
    {
        for( int j = 0; j < 3; j++ )
        {
            if( matrix[i][j] == 0 )
            {
                empty_cell = make_pair(i,j);

                break;
            }
        }
    }

    for( int i = 0; i < 4; i++ )
    {
        vector<vector<int>>current_matrix = matrix;

        int new_row = action[i].first;

        int new_column = action[i].second;

        pair<int,int>swap_cell = make_pair(empty_cell.first+new_row, empty_cell.second+new_column);

        if( check_overflow(swap_cell) )
        {
//            Sleep(0);
//
//            print_puzzle(current_matrix);
//
//            cout << endl;

            swap(current_matrix[empty_cell.first][empty_cell.second],current_matrix[swap_cell.first][swap_cell.second]);

            if( store_state.count(current_matrix) )
            {
                continue;
            }

            solve_eight_puzzle(current_matrix,store_state,solved,solving_path);

            if( solved == true )
            {
                cout << "YES" << endl;
//                solving_path.push_back(current_matrix);

                return;
            }
        }
    }
}

int main()
{
    int n = 3;

    vector<vector<int>>matrix
    {
        {1,2,3},
        {4,5,8},
        {7,6,0}
    };

    set<vector<vector<int>>>store_state;

    bool solved = false;

    vector<vector<vector<int>>>solving_path;

    solve_eight_puzzle(matrix,store_state,solved,solving_path);

    print_puzzle(matrix);

    for( auto point : solving_path )
    {
        print_puzzle(point);
    }
}
