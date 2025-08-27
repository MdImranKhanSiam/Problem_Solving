#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ull mod = 1000000003;

    ull limit = 1000005;

    vector<ull>store(1,0);

    ull sum = 0;

    for( int i = 1; i <= limit; i++ )
    {
        ull power = i;

        for( int j = 1; j <= 2; j++ )
        {
            power = (power*i) % mod;
        }

        sum += power;

        if( sum >= mod )
        {
            sum %= mod;
        }

        store.push_back(sum);
    }

    vector<ull>prefix_sum(1,0);

    for( int i = 1; i <= limit; i++ )
    {
        prefix_sum.push_back((store[i]+prefix_sum[i-1]) % mod);
    }

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ull n;

        cin >> n;

        cout << prefix_sum[n] << endl;
    }
}
