#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int sizee;

        cin >> sizee;

        string s;

        cin >> s;

        int seq = 0, flag = 0, total = 0;

        for( int i = 0; i < sizee; i++ )
        {
            if( s[i] == 46 )
            {
                seq++;
                total++;

                if( seq == 3 )
                {
                    flag = 1;
                }
            }
            else
            {
                seq = 0;
            }
        }

        if( flag == 1 )
            cout << 2 << endl;
        else
            cout << total << endl;
    }
}
