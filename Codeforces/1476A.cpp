#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        double n, k, result;

        cin >> n >> k;

        if( n == k )
            result = 1;
        else if( n < k )
            result = ceil(k/n);
        else
            result = ceil(((ceil(n/k))*k)/n);

        cout << fixed << setprecision(0) << result << endl;
    }
}

