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
        ll a, b;

        cin >> a >> b;

        ll result = ceil(abs((double) b-a)/10);

        cout << result << endl;
    }
}
