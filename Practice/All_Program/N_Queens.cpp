#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void N_Queens( vector<vector<ll>>&board, ll queens, bool &success, ll row )
{
    vector<bool>Cell(queens+1,true);

    vector<vector<bool>>placeable_cell(queens+1,Cell);

    for( int i = 1; i <= queens; i++ )
    {
        for( int j = 1; j <= queens; j++ )
        {
            if( board[i][j] == 1 )
            {
                for( int k = 1; k <= queens; k++ )
                {
                    placeable_cell[i][k] = false;

                    placeable_cell[k][j] = false;
                }

                ll diagonal_i = i;

                ll diagonal_j = j;

                while( true )
                {
                    diagonal_i++;

                    diagonal_j++;

                    if( diagonal_i <= queens && diagonal_j <= queens )
                    {
                        placeable_cell[diagonal_i][diagonal_j] = false;
                    }
                    else
                    {
                        break;
                    }
                }

                diagonal_i = i;

                diagonal_j = j;

                while( true )
                {
                    diagonal_i--;

                    diagonal_j--;

                    if( diagonal_i >= 1 && diagonal_j >= 1 )
                    {
                        placeable_cell[diagonal_i][diagonal_j] = false;
                    }
                    else
                    {
                        break;
                    }
                }

                diagonal_i = i;

                diagonal_j = j;

                while( true )
                {
                    diagonal_i++;

                    diagonal_j--;

                    if( diagonal_i <= queens && diagonal_j >= 1 )
                    {
                        placeable_cell[diagonal_i][diagonal_j] = false;
                    }
                    else
                    {
                        break;
                    }
                }

                diagonal_i = i;

                diagonal_j = j;

                while( true )
                {
                    diagonal_i--;

                    diagonal_j++;

                    if( diagonal_i >= 1 && diagonal_j <= queens )
                    {
                        placeable_cell[diagonal_i][diagonal_j] = false;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }

    for( int i = 1; i <= queens; i++ )
    {
        if( placeable_cell[row][i] )
        {
            board[row][i] = 1;
        }
        else
        {
            continue;
        }

        if( row == queens )
        {
            success = true;

            break;
        }

        N_Queens(board,queens,success,row+1);

        if( !success )
        {
            board[row][i] = 0;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    ll Queens;

    cin >> Queens;

    vector<ll>Cell(Queens+1,0);

    vector<vector<ll>>Board(Queens+1,Cell);

    bool Success = false;

    N_Queens(Board,Queens,Success,1);

    for( int i = 1; i <= Queens; i++ )
    {
        for( int j = 1; j <= Queens; j++ )
        {
            cout << Board[i][j] << " ";
        }

        cout << endl;
    }
}
