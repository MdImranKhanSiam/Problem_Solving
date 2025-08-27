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

        vector<vector<ll>>store(n);

        vector<pair<ll,ll>>serial;

        for( int i = 0; i < n; i++ )
        {
            ll current = 0;

            for( int j = 0; j < m; j++ )
            {
                ll value;

                cin >> value;

                current += value;

                store[i].push_back(value);
            }

            serial.push_back(make_pair(current,i));
        }

        sort(serial.begin(),serial.end(),greater<pair<ll,ll>>());

        ll sum = 0, result = 0;

        for( int i = 0; i < n; i++ )
        {
            ll current = serial[i].second;

            for( int j = 0; j < m; j++ )
            {
                sum += store[current][j];

                result += sum;
            }
        }

        cout << result << endl;
    }
}
