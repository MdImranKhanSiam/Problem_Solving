#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, k;

        cin >> n >> k;

        if( n == 1 )
        {
            cout << 0 << endl;
        }
        else if( k >= n )
        {
            cout << 1 << endl;
        }
        else
        {
            int target = n, one = 0, op = 0;

            while( n > 1 )
            {
                n -= k-1;

                one += k-1;

                op++;

                if( one >= target )
                {
                    break;
                }
            }

            cout << op << endl;
        }
    }
}

