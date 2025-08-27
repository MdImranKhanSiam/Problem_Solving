#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mishka = 0, chris = 0;

    cin >> n;

    while( n-- )
    {
        int m, c;

        cin >> m >> c;

        if( m > c )
            mishka++;
        else if( c > m )
            chris++;
    }

    cout<<((mishka==chris)?"Friendship is magic!^^":((mishka>chris)?"Mishka":"Chris"))<<endl;
}

