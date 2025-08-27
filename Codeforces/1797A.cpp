#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int r, c;

        cin >> r >> c;

        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;


        bool check_corner = false;

        if( (x1 == 1 && y1 == 1) || (x2 == 1 && y2 == 1) )
        {
            check_corner = true;
        }
        else if( (x1 == r && y1 == c) || (x2 == r && y2 == c) )
        {
            check_corner = true;
        }
        else if( (x1 == 1 && y1 == c) || (x2 == 1 && y2 == c) )
        {
            check_corner = true;
        }
        else if( (x1 == r && y1 == 1) || (x2 == r && y2 == 1) )
        {
            check_corner = true;
        }

        if( check_corner == true )
            cout << 2 << endl;
        else
        {
            bool check_side = false;

            if( x1 == 1 || x2 == 1 )
            {
                check_side = true;
            }
            else if( x1 == r || x2 == r )
            {
                check_side = true;
            }
            else if( y1 == 1 || y2 == 1 )
            {
                check_side = true;
            }
            else if( y1 == c || y2 == c )
            {
                check_side = true;
            }

            if( check_side == true )
                cout << 3 << endl;
            else
                cout << 4 << endl;
        }

    }
}

