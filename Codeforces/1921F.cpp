#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int n, q;

        cin >> n >> q;

        long long int num[n+1];

        for( int i = 1; i <= n; i++ )
            cin >> num[i];

        long long int total = 0;

        for( int i = 0; i < q; i++ )
        {
            long long int s, d, k, sum = 0;

            cin >> s >> d >> k;

            for( int j = 0; j < k; j++ )
            {
                if( j == 0 )
                    sum += num[s];
                else if( j == 1 )
                    sum += num[s+d]*2;
                else
                    sum += num[s+(d*j)]*(j+1);
            }

            cout << sum << " ";
        }

        cout << endl;
    }
}
