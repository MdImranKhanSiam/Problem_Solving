#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, odd_displace = 0, even_displace = 0;

        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if((i%2)==0&&(value%2)!=0)
                odd_displace++;
            else if((i%2)!=0&&(value%2)==0)
                even_displace++;
        }

        cout << ( (odd_displace==even_displace) ? odd_displace : -1 ) << endl;
    }
}

