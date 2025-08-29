#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    double a, b, c;

    cin >> a >> b >> c;

    double check = pow(b,2)-(4*a*c);

    double root = sqrt(check);

    if( check > 0 )
    {
        ll x1, x2;

        x1 = (((-1)*b)+root)/(2*a);

        x2 = (((-1)*b)-root)/(2*a);

        if( x1 > x2 )
        {
            swap(x1,x2);
        }

        cout << "Two roots: " << x1 << " " << x2 << endl;
    }
    else if( check == 0 )
    {
        ll x = ((-1)*b)/(2*a);

        cout << "One root: " << x << endl;
    }
    else
    {
        cout << "No roots" << endl;
    }
}
