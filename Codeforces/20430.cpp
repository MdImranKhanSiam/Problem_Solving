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
        ull n, total = 1;

        cin >> n;

        while( n > 3 )
        {
            n /= 4;

            total *= 2;
        }

        cout << total << endl;
    }
}
