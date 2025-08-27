#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s1, s2;

        cin >> s1 >> s2;

        ll length1, length2, limit;

        length1 = s1.size();

        length2 = s2.size();

        limit = max(length1,length2);

        for( int i = 0; i < limit; i++ )
        {
            if( i < length1 )
            {
                cout << s1[i];
            }

            if( i < length2 )
            {
                cout << s2[i];
            }
        }

        cout << endl;
    }
}
