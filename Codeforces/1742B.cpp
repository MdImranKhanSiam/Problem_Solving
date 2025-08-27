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

        set<int>num;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            num.insert(value);
        }

        cout << ( (num.size()==n) ? "YES" : "NO" ) << endl;
    }
}

