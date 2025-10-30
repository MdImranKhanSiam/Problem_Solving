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
        ll n;

        cin >> n;

        ll hao = 0;

        while( n > 2 )
        {
            ll current = n/3;

            ll remain = n-(current*2);

            hao += current;

            n = remain;
        }

        cout << hao << endl;
    }
}
