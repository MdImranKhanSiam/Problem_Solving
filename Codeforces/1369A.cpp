#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        cout << ( (n%2==0 && (n/2)%2==0) ? "YES" : "NO" ) << endl;
    }
}
