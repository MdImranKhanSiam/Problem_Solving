#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    bool even = true;

    if( n % 2 != 0 )
        cout << -1 << endl;
    else
    {
        for( int i = 0; i < n; i++ )
        {
            if( even == true )
            {
                cout << i+2 << " ";
                even = false;
            }
            else
            {
                cout << i << " ";
                even = true;
            }
        }
    }
}

