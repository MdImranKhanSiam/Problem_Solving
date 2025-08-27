#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n;

    for( i = 1; i <= 5; i++ )
    {
        for( j = 1; j <= 5; j++ )
        {
            cin >> n;

            if( n == 1 )
            {
                if( i == 3 && j == 3 )
                {
                    cout << 0 << endl;
                    return 0;
                }
                else if( i <= 3 && j <= 3 )
                {
                    cout << 6-(i+j) << endl;
                    return 0;
                }
                else if( i >= 3 && j >= 3 )
                {
                    cout << (i+j) - 6 << endl;
                }
            }
        }
    }
}
