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
        int n, m, total = 0;

        cin >> n >> m;

        bool End = false;

        for( int i = 0; i < n; i++ )
        {
            string s;

            cin >> s;

            int length = s.size();

            if( End == false && m-length >= 0 )
            {
                m -= s.size();

                total++;
            }
            else
            {
                End = true;
            }
        }

        cout << total << endl;
    }
}
