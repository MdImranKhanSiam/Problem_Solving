#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, result = -1;

        cin >> n;

        map<int,int> num;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            if( num[value] == NULL )
                num[value] = 1;
            else
            {
                num[value]++;

                if( num[value] == 3 )
                    result = value;
            }
        }

        cout << result << endl;
    }
}

