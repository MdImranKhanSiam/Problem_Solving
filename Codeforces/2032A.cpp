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
        int n;

        cin >> n;

        int on = 0, off = 0;

        for( int i = 1; i <= n*2; i++ )
        {
            int value;

            cin >> value;

            if( value == 1 )
                on++;
            else
                off++;
        }

        cout << n-((off/2)+(on/2)) << " " << min(on,off) << endl;
    }
}

