#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;

    cin >> n >> x;

    int ice_cream = x, distress = 0;

    for( int i = 0; i < n; i++ )
    {
        char ch;

        int packs;

        cin >> ch >> packs;

        if( ch == '+' )
            ice_cream += packs;
        else
        {
            if( ice_cream >= packs )
                ice_cream -= packs;
            else
                distress++;
        }

        cout << ice_cream << " " << distress << endl;
    }
}


