#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll find_position( ll n, ll current )
{
    if( current < n )
    {
        return current;
    }
    else
    {
        return current-(current/n);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, k;

        cin >> n >> k;

        ll low = 0, mid = 0, high = 2e9, result = 0;

        while( low <= high )
        {
            mid = (low+high)/2;

            ll position = find_position(n,mid);

            if( position == k )
            {
                result = mid;

                break;
            }
            else if( position > k )
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        if( result % n == 0 )
        {
            result--;
        }

        cout << result << endl;
    }
}
