#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll add( ll a, ll b )
{
    ll sum = a+b;

    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll a, b;

    cin >> a >> b;

    cout << add(a,b) << endl;
}
