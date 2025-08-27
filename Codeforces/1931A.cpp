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

        string result(3,'a');

        vector<char>a_z(1);

        for( int i = 'a'; i <= 'z'; i++ )
        {
            a_z.push_back(i);
        }

        for( int i = 2; i >= 0; i-- )
        {
            int current;

            current = n-i;

            if( current > 26 )
            {
                result[i] = 'z';

                current = 26;
            }
            else
            {
                result[i] = a_z[current];
            }

            n -= current;
        }

        cout << result << endl;
    }
}
