#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, bits, result;

    cin >> n;

    bits = __builtin_popcount(n);

    result = pow(2,bits)-1;

    cout << result << endl;
}
