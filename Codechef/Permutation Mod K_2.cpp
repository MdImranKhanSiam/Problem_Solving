#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, k;

        cin >> n >> k;

        vector<int>Mod(1,0);

        for( int i = 1; i <= n; i++ )
        {
            Mod.push_back(i%k);
        }

        vector<int>Result(n+1,0);

        for( int i = 1; i <= n; i++ )
        {
            for( int j = 1; j <= n; j++ )
            {
                if( Mod[i] != Mod[j] && Result[j] == 0 )
                {
                    Result[j] = i;

                    break;
                }
            }
        }

        bool found = true;

        for( int i = 1; i <= n; i++ )
        {
            if( Result[i] == 0 )
            {
                found = false;

                break;
            }
        }

        if( found == true )
        {
            for( int i = 1; i <= n; i++ )
            {
                cout << Result[i] << " ";
            }
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }
}
