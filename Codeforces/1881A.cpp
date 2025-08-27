#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, m;

        cin >> n >> m;

        string a, b;

        cin >> a >> b;

        int loop = 0;

        bool result = true;

        while( a.find(b) > a.size() )
        {
            a.append(a);

            loop++;

            if( loop == 6 )
            {
                result = false;

                break;
            }
        }

        if( result == true )
        {
            cout << loop << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

