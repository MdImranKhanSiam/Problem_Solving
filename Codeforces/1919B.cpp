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

        string s;

        cin >> s;

        int sum = 0;

        for( char ch : s )
        {
            if( ch == '+' )
                sum += 1;
            else
                sum -= 1;
        }

        cout << abs(sum) << endl;
    }
}

