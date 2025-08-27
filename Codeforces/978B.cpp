#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    cin >> s;

    int sequence = 0, dlt = 0;

    for( int i = 0; s[i] != '\0'; i++ )
    {
        ( (s.at(i)=='x') ? sequence++ : sequence = 0 );

        if( sequence > 2 )
            dlt++;
    }

    cout << dlt << endl;
}

