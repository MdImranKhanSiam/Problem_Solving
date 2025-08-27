#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        unordered_map<string,int>Hashtable;

        vector<string>person[3];

        for( int i = 0; i < 3; i++ )
        {
            for( int j = 0; j < n; j++ )
            {
                string s;

                cin >> s;

                person[i].push_back(s);

                Hashtable[s]++;
            }
        }

        for( int i = 0; i < 3; i++ )
        {
            int point = 0;

            for( int j = 0; j < n; j++ )
            {
                if( Hashtable[person[i][j]] == 1 )
                {
                    point += 3;
                }
                else if( Hashtable[person[i][j]] == 2 )
                {
                    point++;
                }
            }

            cout << point << " ";
        }

        cout << endl;
    }
}

