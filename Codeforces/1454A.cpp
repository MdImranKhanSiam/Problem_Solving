#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        double n;

        cin >> n;

        double middle = ceil(n/2);

        for( double i = n; i > 0; i-- )
        {
            if( i != middle )
                cout << i << " ";
        }

        cout << middle << endl;
    }
}

