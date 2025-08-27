#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, result = 0;

        cin >> n;

        int first, second;

        cin >> first;

        for( int i = 1; i < n; i++ )
        {
            cin >> second;

            int start, limit, total = 0;

            start = min(first, second);
            limit = max(first, second);

            while( true )
            {
                start = start * 2;

                if( start >= limit )
                    break;

                total++;
            }

            result += total;

            first = second;
        }

        cout << result << endl;
    }
}

