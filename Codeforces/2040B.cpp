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
        ll n, total = 0, ones = 4;

        cin >> n;

        if( n == 1 )
        {
            total = 1;
        }
        else if( n == 2 || n == 3 || n == 4 )
        {
            total = 2;
        }
        else
        {
            total = 2;

            while( true )
            {
                ones = (ones*2)+2;

                total++;

                if( n <= ones )
                {
                    break;
                }
            }
        }

        cout << total << endl;
    }
}
