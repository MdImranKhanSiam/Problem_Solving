#include <bits/stdc++.h>

using namespace std;

bool found;

void possibilities( long int, long int );

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        found = false;

        int n, m;

        cin >> n >> m;

        possibilities( n, m );

        cout << ( (found==true) ? "YES" : "NO" ) << endl;
    }
}

void possibilities( long int value, long int match )
{
    if( value == match )
        found = true;
    else if( value % 3 == 0 )
    {
        possibilities( value/3, match );
        possibilities( (value/3)*2, match );
    }
}
