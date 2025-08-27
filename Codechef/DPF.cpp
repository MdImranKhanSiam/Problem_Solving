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
        ll n, k, d, collect = 0;

        cin >> n >> k >> d;

        vector<ll>flowers;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            flowers.push_back(value);
        }

        sort(flowers.begin(),flowers.end());

        vector<ll>timer = flowers;

        for( int i = 1; i <= d; i++ )
        {
            for( int j = 0; j < n; j++ )
            {
                if( flowers[j] < timer[j] )
                {
                    flowers[j]++;
                }
            }

            ll bloomed = 0, pick;

            for( int j = 0; j < n; j++ )
            {
                if( flowers[j] == timer[j] )
                {
                    bloomed++;
                }
            }

            pick = bloomed-k;

            for( int j = 0; j < n; j++ )
            {
                if( pick == 0 )
                {
                    break;
                }

                if( flowers[j] == timer[j] )
                {
                    flowers[j] = 0;

                    pick--;

                    collect++;
                }
            }
        }

        cout << collect << endl;
    }
}


