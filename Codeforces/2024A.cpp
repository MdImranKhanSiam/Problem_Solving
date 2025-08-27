#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b;

        cin >> a >> b;

        if( a >= b )

        {
            cout << a << endl;
        }
        else if( a*2 <= b )
        {
            cout << 0 << endl;
        }
        else
        {
            cout << a-(b-a) << endl;
        }
    }
}

