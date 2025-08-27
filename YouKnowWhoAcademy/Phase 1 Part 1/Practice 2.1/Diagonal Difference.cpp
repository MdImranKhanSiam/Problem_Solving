#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<vector<ll>>matrix(1);

    for( int i = 1; i <= n; i++ )
    {
        vector<ll>temp(1);

        for( int j = 1; j <= n; j++ )
        {
            ll value;

            cin >> value;

            temp.push_back(value);
        }

        matrix.push_back(temp);
    }

    ll sum1 = 0, sum2 = 0;

    for( int i = 1, lr = 1, lc = 1, rr = 1, rc = n; i <= n; i++, lr++, lc++, rr++, rc-- )
    {
        sum1 += matrix[lr][lc];

        sum2 += matrix[rr][rc];
    }

    cout << abs(sum1-sum2) << endl;
}
