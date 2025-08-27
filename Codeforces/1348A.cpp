#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        int first_half = 0, second_half = 0;

        for( int i = 1; i <= n; i++ )
        {
            if( i < n/2 || i == n )
                first_half += pow(2,i);
            else
                second_half += pow(2,i);
        }

        cout << first_half-second_half << endl;
    }
}

