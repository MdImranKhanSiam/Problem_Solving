#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b, minn, maxx;

        cin >> a >> b;

        minn = (min(a,b))*2;
        maxx = max(a,b);

        cout << ( (minn>=maxx) ? pow(minn,2) : pow(maxx,2) ) << endl;
    }
}

