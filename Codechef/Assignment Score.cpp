#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin >> t;

    while( t-- )
    {
        int n;

        cin >> n;

        int sum = 0, total = (n + 1) * 100;

        int need = total / 2;

        for( int i = 0; i < n; i++ )
        {
            int v;

            cin >> v;

            sum += v;
        }

        int result = need-sum;

        if( result > 100 )
        {
            cout << -1;
        }
        else if( result < 0 )
        {
            cout << 0;
        }
        else
        {
            cout << result;
        }

        cout << endl;
    }
}
