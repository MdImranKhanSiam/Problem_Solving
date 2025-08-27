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
        ull k, result;

        cin >> k;

        result = sqrtl(k)+0.5;

        result += k;

        cout << result << endl;
    }
}

