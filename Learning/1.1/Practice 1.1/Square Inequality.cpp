#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll a, b, c;

    cin >> a >> b >> c;

    if( (pow(a,2)+pow(b,2)) < pow(c,2) )
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
