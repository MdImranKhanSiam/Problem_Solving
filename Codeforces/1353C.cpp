#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        long long int n, steps, start, total = 0;

        cin >> n;

        steps = n/2;

        start = 8;

        for( long long int i = 1; i <= steps; i++ )
        {
            total += start * i;

            start += 8;
        }

        cout << total << endl;
    }
}

