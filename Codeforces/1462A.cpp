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

        vector<int>num;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            num.push_back(value);
        }

        int starting_point = 0, ending_point = n-1;

        bool turn = true;

        for( int i = 0; i < n; i++ )
        {
            if( turn == true )
            {
                cout << num[starting_point++] << " ";
                turn = false;
            }
            else if( turn == false )
            {
                cout << num[ending_point--] << " ";
                turn = true;
            }
        }

        cout << endl;
    }
}

