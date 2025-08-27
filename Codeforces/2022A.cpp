#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, r;

        cin >> n >> r;

        int remain = 0, happy = 0;

        for( int i = 0; i < n; i++ )
        {
            int members;

            cin >> members;

            if( members == 1 )
            {
                remain++;

                continue;
            }

            r -= members/2;

            happy += (members/2)*2;

            if( (members-(members/2)*2) == 1 )
            {
                remain++;
            }
        }

        if( r >= remain )
        {
            happy += remain;
        }
        else
        {
            happy += r-(remain-r);
        }

        cout << happy << "\n";
    }
}

