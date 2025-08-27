#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, l;

        cin >> n >> l;

        string s[n];

        for( int i = 0; i < n; i++ )
            cin >> s[i];

        int minimum = 200;

        for( int i = 0; i < n-1; i++ )
        {
            for( int j = i+1; j < n; j++ )
            {
                int difference, sum = 0;

                for( int z = 0; z < l; z++ )
                {
                    sum += abs(s[i].at(z)-s[j].at(z));
                }

                difference = sum;

                if( difference < minimum )
                    minimum = difference;
            }
        }

        cout << minimum << endl;
    }
}
