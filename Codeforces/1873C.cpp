#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    int i, j, point = 0;

    char ch;

    vector<int> target = {1,2,3,4,5,5,4,3,2,1};

    while( tc-- )
    {
        int sizee = 10;

        while(sizee--)
        {
            for( int i = 0; i < 10; i++ )
            {
                cin >> ch;

                if( ch == 'X' )
                {
                    point += target[i];
                }
            }
        }

        cout << point << endl;
    }

    return 0;
}
