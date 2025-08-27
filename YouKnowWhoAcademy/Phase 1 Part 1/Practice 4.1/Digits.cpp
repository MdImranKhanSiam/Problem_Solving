#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, k;

    cin >> n >> k;

    vector<ll>digits;

    while( n != 0 )
    {
        ll digit = n % k;

        n = n / k;

        digits.push_back(digit);
    }

    cout << digits.size() << endl;
}
