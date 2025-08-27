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

        string dupli(s.size(),s.at(0));

        if( s == dupli )
        {
            cout << "NO" << endl;
        }
        else
        {
            char ch = s.at(0);

            for( int i = 1; s[i] != '\0'; i++ )
            {
                string New = s;

                char temp = New[i];

                New[i] = ch;

                New[0] = temp;

                if( s != New )
                {
                    cout << "YES" << endl << New << endl;

                    break;
                }
            }
        }
    }
}

