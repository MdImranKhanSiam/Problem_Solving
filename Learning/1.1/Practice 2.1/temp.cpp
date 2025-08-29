#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ll n = 1e8, sum = 0;

    for( int i = 0; i < n; i++ )
    {
        sum += i;
    }

    cout << sum << endl;
}
