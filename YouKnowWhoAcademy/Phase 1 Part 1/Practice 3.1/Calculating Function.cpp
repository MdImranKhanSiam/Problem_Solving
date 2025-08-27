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

    ll result;

    if( n % 2 == 0 )
    {
        result = n/2;
    }
    else
    {
        result = -1*((n+1)/2);
    }

    cout << result << endl;
}
