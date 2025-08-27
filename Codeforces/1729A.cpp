#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int a, b, c;

        cin >> a >> b >> c;

        int lift_a, lift_b;

        lift_a = a-1;
        lift_b = (abs(b-c))+(c-1);

        cout << ( (lift_a==lift_b) ? 3 : ( (lift_a < lift_b) ? 1 : 2 ) ) << endl;
    }
}

