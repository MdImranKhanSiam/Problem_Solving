#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, apple;

    cin >> n >> m >> apple;

    int boat_left, boat_right, moves = 0;

    boat_left = 1;
    boat_right = m;

    for( int i = 0; i < apple; i++ )
    {
        int value;

        cin >> value;

        bool caught = false;

        while( caught == false )
        {
            if( value >= boat_left && value <= boat_right )
            {
                caught = true;
            }
            else
            {
                if( value < boat_left )
                {
                    boat_left--;
                    boat_right--;
                }
                else if( value > boat_right )
                {
                    boat_left++;
                    boat_right++;
                }

                moves++;
            }
        }
    }

    cout << moves << endl;
}

