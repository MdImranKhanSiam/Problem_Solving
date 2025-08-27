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
        string s;

        cin >> s;

        int length = s.size()-2;

        for( int i = 0; i < length; i++ )
        {
            cout << s.at(i);
        }

        cout << "i" << endl;
    }
}
