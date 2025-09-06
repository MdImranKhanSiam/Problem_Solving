#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll coins;

        cin >> coins;

        list<ll>table;

        for( int i = 0; i < coins; i++ )
        {
            ll value;

            cin >> value;

            table.push_back(value);
        }

        ll masha = 0, bear = 0;

        while( true )
        {
            if( !table.empty() )
            {
                masha += table.front();

                table.pop_front();
            }

            if( !table.empty() )
            {
                masha += table.front();

                table.pop_front();
            }

            if( !table.empty() )
            {
                bear += table.back();

                table.pop_back();
            }

            if( !table.empty() )
            {
                bear += table.back();

                table.pop_back();
            }

            if( table.empty() )
            {
                break;
            }
        }

        if( masha > bear )
        {
            cout << "Masha";
        }
        else if( bear > masha )
        {
            cout << "The Bear";
        }
        else
        {
            cout << "Draw";
        }

        cout << endl;
    }
}
