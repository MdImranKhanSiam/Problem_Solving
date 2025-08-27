#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        map<char,int>letter;

        string first, second;

        cin >> first >> second;

        for( auto i : first )
        {
            letter[i]++;
        }

        int chance;

        chance = letter[second.at(0)];

        bool match = false;

        for( int i = 0; i < chance; i++ )
        {
            int skip, position;

            skip = i;

            for( int j = 0; first[j] != '\0'; j++ )
            {
                if( first.at(j) == second.at(0) )
                {
                    if( skip == 0 )
                    {
                        position = j;
                        break;
                    }

                    skip--;
                }
            }

            for( int k = 1; second[k] != '\0'; k++ )
            {

            }
        }

    }
}

