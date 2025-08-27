#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        vector<int>xyz;

        for( int i = 0; i < 3; i++ )
        {
            int value;

            cin >> value;

            xyz.push_back(value);
        }

        sort( xyz.begin(), xyz.end(), greater<int>() );

        if( xyz[0] == xyz[1] )
        {
            cout << "YES" << endl;
            cout << xyz[0] << " " << xyz[2] << " " << xyz[2] << endl;
        }
        else
            cout << "NO" << endl;
    }
}


