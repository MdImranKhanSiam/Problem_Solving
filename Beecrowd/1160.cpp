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
        double a, b, r1, r2;

        cin >> a >> b >> r1 >> r2;

        int years = 0;

        while( b >= a && years <= 100 )
        {
            years++;

            ll incre1, incre2;

            incre1 = floor((a/100)*r1);

            incre2 = floor((b/100)*r2);

            a += incre1;

            b += incre2;
        }

        if( years > 100 )
        {
            cout << "Mais de 1 seculo." << endl;
        }
        else
        {
            cout << years << " anos." << endl;
        }
    }
}

round(2.3)
