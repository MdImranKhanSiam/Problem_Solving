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
        ll n, m, k;

        cin >> n >> m >> k;

        if( abs(n-m) > k )
        {
            cout << -1 << endl;
        }
        else
        {
            ll current, remain, value1, value2;

            if( n >= m )
            {
                current = 0;

                remain = 1;

                value1 = n;

                value2 = m;
            }
            else
            {
                current = 1;

                remain = 0;

                value1 = m;

                value2 = n;
            }

            if( value1 < k )
            {
                cout << -1 << endl;
            }
            else
            {
                for( int i = 0; i < k; i++ )
                {
                    cout << current;
                }

                value1 -= k;

                bool alter = true;

                ll length = value1+value2;

                for( int i = 0; i < length; i++ )
                {
                    if( alter == true && value2 != 0 )
                    {
                        cout << remain;

                        value2--;

                        alter = false;
                    }
                    else if( alter == false && value1 != 0 )
                    {
                        cout << current;

                        value1--;

                        alter = true;
                    }

                    if( value1 == 0 )
                    {
                        alter = true;
                    }

                    if( value2 == 0 )
                    {
                        alter = false;
                    }
                }

//                for( int i = 0; i < value1; i++ )
//                {
//                    cout << current;
//                }
//
//                for( int i = 0; i < value2; i++ )
//                {
//                    cout << remain;
//                }

                cout << endl;
            }
        }
    }
}
