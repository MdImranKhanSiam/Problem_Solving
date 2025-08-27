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

        int length = s.size();

        for( int i = 0; i < length; i += 2 )
            cout << s.at(i);

        cout << endl;
    }
}
