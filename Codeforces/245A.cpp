#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int>packets(3,0), total(3,0);

    int server, sent, lost;

    while( n-- )
    {
        cin >> server >> sent >> lost;

        packets[server] += sent;

        total[server]++;
    }

    for( int i = 1; i <= 2; i++ )
    {
        if( total[i] > 0 )
        {
            if( packets[i] >= (total[i]*10)/2 )
                cout << "LIVE" << endl;
            else
                cout << "DEAD" << endl;
        }
    }

    cout << endl;
}

