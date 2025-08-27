#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void calc( ll range, vector<ll>&divisor )
{
    for( int i = 1; i <= range; i++ )
    {
        for( int j = i; j <= range; j += i )
        {
            divisor[j]++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll range = 1e6;

    vector<ll>divisor(range+1,0);

    calc(range, divisor);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n;

        cin >> n;

        cout << divisor[n] << endl;
    }
}
