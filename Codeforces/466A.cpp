#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b;

    cin >> n >> m >> a >> b;

    if( b/m >= a )
        cout << n*a << endl;
    else
    {
        int remain, rubles = 0;

        rubles = (n/m)*b;
        remain = n - ((n/m)*m);

        if( remain > 0 )
            rubles += min(b, remain*a);

        cout << rubles << endl;
    }
}

