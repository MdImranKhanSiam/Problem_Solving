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
        ll n, b = 0, g = 0, Count = 0;

        string s;

        cin >> n >> s;

        for( auto point : s )
        {
            Count++;

            if( point == 'B' )
            {
                b++;
            }
            else
            {
                g++;
            }

            if( b > 2*g )
            {
                break;
            }
        }

        cout << Count << endl;
    }
}
