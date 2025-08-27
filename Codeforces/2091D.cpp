#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, m, k;

        cin >> n >> m >> k;

        ll min_desk = k/n;

        if( k % n != 0 )
        {
            min_desk++;
        }

        ll low = 1, mid, high = min_desk, result;

        while( low <= high )
        {
            mid = (low+high)/2;

            ll max_bench = mid;

            ll total_desk = (max_bench*(m/(max_bench+1)))+(m%(max_bench+1));

            if( total_desk == min_desk )
            {
                if( max_bench < result )
                {
                    result = max_bench;
                }

                high = mid-1;
            }

            if( total_desk > min_desk )
            {
                high = mid-1;
            }

            if( total_desk < min_desk )
            {
                low = mid+1;
            }
        }

        cout << result << endl;
    }
}
