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
        int n, m, k, Min = INT_MAX;

        cin >> n >> m >> k;

        for( int i = 1; i <= n; i++ )
        {
            for( int j = 1; j <= m; j++ )
            {
                int value = abs(k-(2*(i+j)));

                if( value < Min )
                {
                    Min = value;
                }
            }
        }

        cout << Min << endl;
    }
}
