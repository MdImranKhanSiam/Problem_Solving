#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, k, result, all_bits = INT_MAX;

    cin >> n >> k;

    result = n & (all_bits << k);

    cout << result << endl;
}
