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
        int n;

        cin >> n;

        vector<int>store;

        bool mid = false, zero = true;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);

            if( i != 0 && i != n-1 && value == 0 )
            {
                mid = true;
            }

            if( value != 0 )
            {
                zero = false;
            }
        }

        bool one = true, serial = true;

        int Start, End;

        for( int i = 0; i < n; i++ )
        {
            if( store[i] != 0 )
            {
                Start = i;

                break;
            }
        }

        for( int i = n-1; i >= 0; i-- )
        {
            if( store[i] != 0 )
            {
                End = i;

                break;
            }
        }

        for( int i = Start; i <= End; i++ )
        {
            if( store[i] == 0 )
            {
                serial = false;
            }
        }

        if( store[0] == 0 )
        {
            bool Find = false;

            for( auto point : store )
            {
                if( Find == true && point == 0 )
                {
                    one = false;
                }

                if( point != 0 )
                {
                    Find = true;
                }
            }
        }
        else
        {
            bool Find = false;

            for( auto point : store )
            {
                if( Find == true && point != 0 )
                {
                    one = false;
                }

                if( point == 0 )
                {
                    Find = true;
                }
            }
        }

        if( zero == true )
        {
            cout << 0;
        }
        else if( one == true || serial == true )
        {
            cout << 1;
        }
        else if( mid == true )
        {
            cout << 2;
        }
        else
        {
            cout << 1;
        }

        cout << endl;
    }
}
