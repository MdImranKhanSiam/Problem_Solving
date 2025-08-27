#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        vector<int>first, second;

        for( int i = 0; i < 4; i++ )
        {
            int value;

            cin >> value;

            if( i < 2 )
                first.push_back(value);
            else
                second.push_back(value);
        }

        sort( first.begin(), first.end() );
        sort( second.begin(), second.end() );

        bool check1, check2;

        check1 = check2 = false;

        for( int value : second )
        {
            if( value > first[0] && value < first[1] )
            {
                check1 = true;
            }
        }

        for( int value : first )
        {
            if( value > second[0] && value < second[1] )
            {
                check2 = true;
            }
        }

        if( check1 == true && check2 == true )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
