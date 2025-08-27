#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n, ans;

    cin >> n;

    if( n <= 2 )
    {
        ans = 1;
    }
    else if( n <= 6 )
    {
        ans = 2;
    }
    else if( n <= 10 )
    {
        ans = 3;
    }

    cout << ans << endl;
}
