#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, m;

        cin >> n >> m;

        vector<ll>a, b;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            a.push_back(value);
        }

        for( int i = 0; i < m; i++ )
        {
            ll value;

            cin >> value;

            b.push_back(value);
        }

        sort(b.begin(),b.end());

        bool result = true;

        a[n-1] = max(b[m-1]-a[n-1],a[n-1]);

        for( int i = n-2; i >= 0; i-- )
        {
            ll item = LLONG_MAX, low = 0, mid, high = m-1, Max = LLONG_MIN;

            while( low <= high )
            {
                mid = (low+high)/2;

                ll v = b[mid]-a[i];

                if( v <= a[i+1] )
                {
                    if( v > Max )
                    {
                        Max = v;
                    }

                    low = mid+1;
                }
                else if( v >= a[i+1] )
                {
                    high = mid-1;
                }
            }

            if( Max != LLONG_MIN )
            {
                item = Max;
            }

//            for( int j = m-1; j >= 0; j-- )
//            {
//                if( b[j]-a[i] <= a[i+1] )
//                {
//                    item = b[j]-a[i];
//
//                    break;
//                }
//            }

            if( item <= a[i+1] && a[i] <= a[i+1] )
            {
                a[i] = max(item,a[i]);
            }
            else if( a[i] <= a[i+1] )
            {
                result = true;
            }
            else if( item <= a[i+1] )
            {
                a[i] = item;
            }
            else
            {
                result = false;

                break;
            }
        }

        cout << ( (result == true ) ? "YES" : "NO" ) << endl;
    }
}
