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

        int sizee = s.size()-1;

        int upper = 0, lower = 0;

        list<char>type;

        for( int i = sizee; i >= 0; i-- )
        {
            if( s.at(i) == 'B' )
                upper++;
            else if( s.at(i) == 'b' )
                lower++;
            else
            {
                if( isupper(s.at(i)) )
                {
                    if( upper == 0 )
                        type.push_front(s.at(i));
                    else
                        upper--;
                }
                else
                {
                    if( lower == 0 )
                        type.push_front(s.at(i));
                    else
                        lower--;
                }
            }
        }

        for( char point : type )
            cout << point;

        cout << endl;
    }
}
