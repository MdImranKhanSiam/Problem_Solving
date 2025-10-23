#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll copies( ll second, ll printer_1, ll printer_2 )
{
    ll total = 1;

    second -= min(printer_1,printer_2);

    total += second/printer_1;

    total += second/printer_2;

    return total;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, x, y;

    cin >> n >> x >> y;

    ll result = 0;

    ll low = 0, mid = 0, high = 1e13;

    while( low <= high )
    {
        mid = (low+high)/2;

        if( copies(mid,x,y) >= n )
        {
            result = mid;

            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    cout << result << endl;
}
