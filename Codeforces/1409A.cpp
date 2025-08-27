#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        double a, b;

        cin >> a >> b;

        cout << fixed << setprecision(0)<< ceil(abs(b-a)/10) << endl;
    }
}

