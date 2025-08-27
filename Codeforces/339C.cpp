#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>weights;

    string input;

    cin >> input;

    for( int i = 0; input[i] != '\0'; i++ )
    {
        if( input.at(i) == '1' )
        {
            weights.push_back(i+1);
        }
    }

    int total;

    cin >> total;

    int length = weights.size();

    if( length == 0 )
    {
        cout << "NO" << endl;

        return 0;
    }

    bool positive = false;

    for( int k = 0; k < length; k++ )
    {
        int left_scale = 0, right_scale = 0, previous = NULL;

        vector<vector<int>>result(length);

        bool complete = true;

        for( int i = 0; i < total; i++ )
        {
            int point = 0;

            if( i == 0 )
            {
                point = k;
            }

            if( i % 2 == 0 )
            {
                while( true )
                {
                    if( point == length )
                    {
                        complete = false;
                        break;
                    }

                    if( (left_scale+weights[point] > right_scale) && (previous != weights[point]) )
                    {
                        left_scale += weights[point];

                        result[k].push_back(weights[point]);

                        previous = weights[point];

                        break;
                    }
                    else
                    {
                        point++;
                    }
                }
            }
            else
            {
                while( true )
                {
                    if( point == length )
                    {
                        complete = false;
                        break;
                    }

                    if( (right_scale+weights[point] > left_scale) && (previous != weights[point]) )
                    {
                        right_scale += weights[point];

                        result[k].push_back(weights[point]);

                        previous = weights[point];

                        break;
                    }
                    else
                    {
                        point++;
                    }
                }
            }

            if( complete == false )
            {
                break;
            }
        }

        if( complete == true )
        {
            cout << "YES" << endl;

            for( auto value : result[k] )
            {
                cout << value << " ";
            }

            break;
        }

        if( k+1 == length )
        {
            cout << "NO";

            break;
        }
    }

    cout << endl;
}
