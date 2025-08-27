#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, sequence = 1;
        bool result = true;

        map<char,int>letter;

        char previous_ch, ch;

        string s;

        cin >> n >> s;

        previous_ch = s.at(0);

        letter[previous_ch] = 1;

        for( int i = 1; i < n; i++ )
        {
            ch = s.at(i);

            if( ch == previous_ch )
                sequence++;
            else
            {
                sequence = 1;

                if( sequence == 1 && letter[ch] == 1 )
                    result = false;

                letter[ch] = 1;
            }

            previous_ch = ch;
        }

        cout << ( (result==true) ? "YES" : "NO" ) << endl;
    }
}


