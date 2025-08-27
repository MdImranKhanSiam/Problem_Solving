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
        int H, L, W, result, ans;

        cin >> H >> L >> W;

        result = 2*((H*L)+(L*W)+(W*H));

        ans = 1000/result;

        cout << ans << endl;
    }
}
