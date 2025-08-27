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

        if( k >= n-1 )
            cout << 1 << endl;
        else
            cout << n << endl;
    }
}


