#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    while( true )
    {
        float a;

        cin >> a;

        if( a < 0.0 )
        {
            break;
        }

        a = a/100;

        cout << fixed << setprecision(4) << a << endl;
    }
}
