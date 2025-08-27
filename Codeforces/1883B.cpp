#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int length, del;

        cin >> length >> del;

        string s;

        cin >> s;

        if( length - del == 1 )
        {
            cout << "YES" << endl;
        }
        else
        {
            int odd = 0;

            map<char,int>frequency;

            for( auto i : s )
            {
                frequency[i]++;
            }

            for( auto i : frequency )
            {
                if( i.second % 2 != 0 )
                {
                    odd++;
                }
            }

            if( odd - del <= 1 )
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

