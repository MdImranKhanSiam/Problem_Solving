#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int wheels;

        cin >> wheels;

        int digits[wheels];

        for( int i = 0; i < wheels; i++ )
            cin >> digits[i];

        for( int i = 0; i < wheels; i++ )
        {
            int moves;

            string updown;

            cin >> moves >> updown;

            for( int j = 0; j < moves; j++ )
            {
                if( updown.at(j) == 'D' )
                {
                    digits[i] = digits[i]+1;

                    if( digits[i] > 9 )
                        digits[i] = digits[i]-10;
                }
                else
                {
                    digits[i] = digits[i]-1;

                    if( digits[i] < 0 )
                        digits[i] = 9;
                }
            }
        }

        for( int i = 0; i < wheels; i++ )
        {
            cout << digits[i] << " ";
        }

        cout << endl;
    }
}



