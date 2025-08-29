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
        ll n, result, all_32bits = UINT_MAX;

        cin >> n;

        //cout << __builtin_popcount(n) << endl;

        result = n ^ all_32bits;

        cout << result << endl;

        //cout << __builtin_popcount(result) << endl;
    }
}
