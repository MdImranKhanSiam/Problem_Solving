#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s;

        cin >> s;

        bool start = false;
        int sequence = 0, dlt = 0;

        for( int i = 0; s[i] != '\0'; i++ )
        {
            if( s.at(i) == '1' && start == false )
            {
                start = true;
            }
            else if( s.at(i) == '0' && start == true )
            {
                sequence++;
            }
            else if( s.at(i) == '1' && start == true )
            {
                dlt += sequence;
                sequence = 0;
            }
        }

        cout << dlt << endl;
    }
}

