#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, m;

        cin >> n >> m;

        string s(m,'B');

        vector<int>num;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            num.push_back(value);
        }

        for( int i = 0; i < n; i++ )
        {
            int op1, op2, index;

            op1 = num[i]-1;
            op2 = m-num[i];

            if( op1 <= op2 )
            {
                if( s.at(op1) != 'A' )
                    index = op1;
                else
                    index = op2;
            }
            else if( op2 <= op1 )
            {
                if( s.at(op2) != 'A' )
                    index = op2;
                else
                    index = op1;
            }

            s.replace(index, 1, "A");
        }

        cout << s << endl;
    }
}

