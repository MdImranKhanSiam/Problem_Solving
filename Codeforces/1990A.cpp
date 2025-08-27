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
        int n;

        cin >> n;

        vector<int>Freq(n+1,0);

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            Freq[value]++;
        }

        bool result = false;

        for( int i = 1; i <= n; i++ )
        {
            if( Freq[i] % 2 != 0 )
            {
                result = true;

                break;
            }
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}

