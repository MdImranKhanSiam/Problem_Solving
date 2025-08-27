#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    int matrix[x][y];

    bool check_road = false;

    for( int i = 0; i < x; i++ )
    {
        for( int j = 0; j < y; j++ )
        {
            char ch;

            int value;

            cin >> ch;

            if( ch == 'X' )
            {
                value = 0;
            }
            else
            {
                value = 1;

                check_road = true;
            }

            matrix[i][j] = value;
        }
    }

    bool perfect = true, check_solution = false;

    for( int i = 0; i < x; i++ )
    {
        for( int j = 0; j < y; j++ )
        {
            if( matrix[i][j] == 1 )
            {
                bool solution = false;

                if( j != 0 && j != y-1 )
                {
                    if( matrix[i][j-1] != 1 || matrix[i][j+1] != 1 )
                    {
                        solution = true;
                    }
                }
                else
                {
                    solution = true;
                }

                if( solution == true )
                {
                    check_solution = true;

                    if( i == 0 )
                    {
                        if( matrix[i+1][j] != 1 )
                        {
                            perfect = false;
                        }
                        else if( j == 0 && matrix[i][j+1] != 1 )
                        {
                            perfect = false;
                        }
                        else if( j == y-1 && matrix[i][j-1] != 1 )
                        {
                            perfect = false;
                        }
                        else if( matrix[i][j+1] != 1 && matrix[i][j-1] != 1 )
                        {
                            perfect = false;
                        }
                    }
                    else if( i == x-1 )
                    {
                        if( matrix[i-1][j] != 1 )
                        {
                            perfect = false;
                        }
                        else if( j == 0 && matrix[i][j+1] != 1 )
                        {
                            perfect = false;
                        }
                        else if( j == y-1 && matrix[i][j-1] != 1 )
                        {
                            perfect = false;
                        }
                        else if( matrix[i][j+1] != 1 && matrix[i][j-1] != 1 )
                        {
                            perfect = false;
                        }
                    }
                    else
                    {
                        if( matrix[i+1][j] != 1 && matrix[i-1][j] != 1 )
                        {
                            perfect = false;
                        }
                        else if( matrix[i+1][j] != 1 || matrix[i-1][j] != 1 )
                        {
                        	if( j == 0 )
                            {
                            	if( matrix[i][j+1] != 1 )
                                {
                                	perfect = false;
                                }
                            }
                            else if( j == y-1 )
                            {
                            	if( matrix[i][j-1] != 1 )
                                {
                                	perfect = false;
                                }
                            }
                        	else
                            {
                            	if( matrix[i][j+1] != 1 && matrix[i][j-1] != 1 )
                                {
                                	perfect = false;
                                }
                            }

                        }
                    }
                }
            }
        }
    }

    if( check_road == false || check_solution == false )
    {
        perfect = false;
    }

    cout << ( (perfect==true) ? 0 : 1 ) << endl;
}
