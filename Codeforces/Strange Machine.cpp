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
        ll machine, query;

        cin >> machine >> query;

        string type;

        cin >> type;

        bool B = false;

        for( auto point : type )
        {
            if( point == 'B' )
            {
                B = true;

                break;
            }
        }

        while( query-- )
        {
            ll start;

            cin >> start;

            if( B )
            {
                ll second = 0;

                bool zero = false;

                while( !zero )
                {
                    for( auto point : type )
                    {
                        second++;

                        if( point == 'A' )
                        {
                            start--;
                        }
                        else
                        {
                            start /= 2;
                        }

                        if( start == 0 )
                        {
                            zero = true;

                            break;
                        }
                    }
                }

                cout << second << endl;
            }
            else
            {
                cout << start << endl;
            }
        }
    }
}
