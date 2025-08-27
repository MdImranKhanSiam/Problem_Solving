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
        ll n, h;

        cin >> n >> h;

        vector<ll>second;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            second.push_back(value);
        }

        ll left, right, mid = 1, diff = LLONG_MAX, result;

        left = 1;

        right = 1000000000000000000;

        while( left <= right )
        {
            mid = (left+right)/2;

            ll sum = mid;

            for( int i = 0; i < n-1; i++ )
            {
                sum += min(second[i+1]-second[i],mid);
            }

            if( sum >= h )
            {
                if( sum-h < diff )
                {
                    result = mid;

                    diff = sum-h;
                }
            }

            if( sum < h )
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }

        cout << result << endl;
    }
}
