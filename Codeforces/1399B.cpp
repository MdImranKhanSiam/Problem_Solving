#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int gifts, min_c = 1000000001, min_o = 1000000001, candies = 0, oranges = 0;

        cin >> gifts;

        vector<long long int>candy, orange;

        for( int i = 0; i < gifts; i++ )
        {
            long long int value;

            cin >> value;

            candy.push_back(value);

            if( value < min_c )
                min_c = value;

            candies += value;
        }

        long long int c_move = candies-(min_c*gifts);

        for( int i = 0; i < gifts; i++ )
        {
            long long int value;

            cin >> value;

            orange.push_back(value);

            if( value < min_o )
                min_o = value;

            oranges += value;
        }

        long long int o_move = oranges-(min_o*gifts);

        long long int extra = 0;

        for( int i = 0; i < gifts; i++ )
            extra += min((candy[i]-min_c),(orange[i]-min_o));

        cout << (c_move+o_move)-extra << endl;
    }
}
