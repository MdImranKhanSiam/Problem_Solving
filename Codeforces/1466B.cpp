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
        int n, total = 0;

        cin >> n;

        vector<int>found((2*n)+2,0);

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if( found[value] == 0 )
            {
                total++;

                found[value] = 1;
            }
            else
            {
                if( found[++value] == 0 )
                {
                    total++;

                    found[value] = 1;
                }
            }
        }

        cout << total << endl;
    }
}

