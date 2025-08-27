#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, q;

        cin >> n >> q;

        vector<int>prefix_sum(1,0);

        for( int i = 1; i <= n; i++ )
        {
            int value;

            cin >> value;

            prefix_sum.push_back(value+prefix_sum[i-1]);
        }

        int l, r, k;

        for( int i = 0; i < q; i++ )
        {
            cin >> l >> r >> k;

            int a, b;

            a = prefix_sum[n]-(prefix_sum[r]-prefix_sum[l-1]);

            b = k*(abs(l-r)+1);

            if( (a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0 ) )
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}
