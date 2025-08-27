#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, k;

        cin >> n >> k;

        char ch = 'a';

        string s;

        for( int i = 0; i < k; i++ )
        {
            s.push_back(ch);
            ch++;
        }

        for( int i = 0; i < n; i++ )
        {
            cout << s;
        }

        cout << endl;
    }
}

