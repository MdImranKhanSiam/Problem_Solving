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
        int l, r, result, total;

        cin >> l >> r;

        total = r-l+1;

        if( l % 2 != 0 && r % 2 != 0 )
        {
            result = (total/2)+1;
        }
        else
        {
            result = total/2;
        }

        cout << result/2 << endl;
    }
}

