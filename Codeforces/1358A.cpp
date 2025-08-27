#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        double n, m;

        cin >> n >> m;

        cout << fixed << setprecision(0) << ceil((n*m)/2) << endl;
    }
}

