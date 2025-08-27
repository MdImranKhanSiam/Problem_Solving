#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b;

        cin >> a >> b;

        bool similar = true;

        if( (a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0) || (pow(b,2) > a) )
            similar = false;

        cout << ( (similar==true) ? "YES" : "NO" ) << endl;
    }
}



