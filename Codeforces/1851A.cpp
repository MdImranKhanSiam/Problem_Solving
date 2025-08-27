#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, m, k, H, conversation = 0;

        cin >> n >> m >> k >> H;

        for( int i = 0; i < n; i++ )
        {
            int value, diff;

            cin >> value;

            diff = abs(H-value);

            if( (diff % k == 0) && (diff <= (k*(m-1))) && diff >= k )
                conversation++;
        }

        cout << conversation << endl;
    }
}

