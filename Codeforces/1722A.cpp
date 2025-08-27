#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        vector<int> arr(5, 0);

        cin >> n;

        string s;

        cin >> s;

        if( n > 5 || n < 5 )
            cout << "NO" << endl;
        else
        {
            for( int i = 0; i < n; i++ )
            {
                if( s.at(i) == 'T' )
                    arr.at(0)++;
                else if( s.at(i) == 'i' )
                    arr.at(1)++;
                else if( s.at(i) == 'm' )
                    arr.at(2)++;
                else if( s.at(i) == 'u' )
                    arr.at(3)++;
                else if( s.at(i) == 'r' )
                    arr.at(4)++;
            }

            int flag = 0;

            for( int i = 0; i < n; i++ )
            {
                if(arr.at(i) != 1 )
                {
                    flag = 1;
                    break;
                }
            }

            if( flag == 1 )
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}
