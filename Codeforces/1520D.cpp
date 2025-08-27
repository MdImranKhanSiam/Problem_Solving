#include <bits/stdc++.h>

using namespace std;

#define int long long int

main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, total = 0;

        cin >> n;

        map<int,int>match;

        for( int i = 1; i <= n; i++ )
        {
            int value;

            cin >> value;

            value -= i;

            total += match[value];

            match[value]++;
        }

        cout << total << endl;
    }
}

