#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int digit, remain, sum = 0;

        cin >> digit;

        remain = 10-digit;

        for( int i = 0; i < digit; i++ )
        {
            int does_not_matter;

            cin >> does_not_matter;
        }

        for( int i = 1; i < remain; i++ )
            sum += i;

        cout << sum*6 << endl;
    }
}


