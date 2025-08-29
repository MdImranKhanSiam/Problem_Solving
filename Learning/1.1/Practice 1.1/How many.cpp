#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll s, t, triples = 0;

    cin >> s >> t;

    for( int i = 0; i <= s; i++ )
    {
        for( int j = 0; j <= s; j++ )
        {
            for( int k = 0; k <= s; k++ )
            {
                if( i+j+k <= s && i*j*k <= t )
                {
                    triples++;
                }
            }
        }
    }

    cout << triples << endl;
}
