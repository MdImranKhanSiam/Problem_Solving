#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        pair<int,int>knight, king, queen, axis[8];

        map<pair<int,int>,int>king_axis, duplicate;

        for( int i = 0; i < 3; i++ )
        {
            int value1, value2;

            cin >> value1 >> value2;

            if( i == 0 )
            {
                knight.first = value1;
                knight.second = value2;
            }
            else if( i == 1 )
            {
                king.first = value1;
                king.second = value2;
            }
            else if( i == 2 )
            {
                queen.first = value1;
                queen.second = value2;
            }

        }

        axis[0].first = king.first + knight.first;
        axis[0].second = king.second + knight.second;

        axis[1].first = king.first + knight.first;
        axis[1].second = king.second - knight.second;

        axis[2].first = king.first - knight.first;
        axis[2].second = king.second + knight.second;

        axis[3].first = king.first - knight.first;
        axis[3].second = king.second - knight.second;


        axis[4].first = king.first + knight.second;
        axis[4].second = king.second + knight.first;

        axis[5].first = king.first - knight.second;
        axis[5].second = king.second + knight.first;

        axis[6].first = king.first + knight.second;
        axis[6].second = king.second - knight.first;

        axis[7].first = king.first - knight.second;
        axis[7].second = king.second - knight.first;

        for( int i = 0; i < 8; i++ )
        {
            king_axis[axis[i]] = 1;
        }

        axis[0].first = queen.first + knight.first;
        axis[0].second = queen.second + knight.second;

        axis[1].first = queen.first + knight.first;
        axis[1].second = queen.second - knight.second;

        axis[2].first = queen.first - knight.first;
        axis[2].second = queen.second + knight.second;

        axis[3].first = queen.first - knight.first;
        axis[3].second = queen.second - knight.second;


        axis[4].first = queen.first + knight.second;
        axis[4].second = queen.second + knight.first;

        axis[5].first = queen.first - knight.second;
        axis[5].second = queen.second + knight.first;

        axis[6].first = queen.first + knight.second;
        axis[6].second = queen.second - knight.first;

        axis[7].first = queen.first - knight.second;
        axis[7].second = queen.second - knight.first;

        int match = 0;

        for( int i = 0; i < 8; i++ )
        {
            if( king_axis[axis[i]] == 1 && duplicate[axis[i]] == NULL )
            {
                match++;

                duplicate[axis[i]] = 1;
            }
        }

        cout << match << endl;
    }
}



