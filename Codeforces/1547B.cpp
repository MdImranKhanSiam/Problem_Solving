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

        int length = s.size()-1, point = s.find('a');

        bool check = true;

        char serial = 'b';

        if( point == -1 )
            check = false;
        else
        {
            while( length-- )
            {
                s.erase(point,1);

                if( point <= length && s.at(point) == serial )
                {
                    point = point;
                }
                else if( point != 0 && s.at(point-1) == serial )
                {
                    point--;
                }
                else
                {
                    check = false;
                    break;
                }

                serial++;
            }
        }

        cout << ( (check==true) ? "YES" : "NO" ) << endl;
    }
}

