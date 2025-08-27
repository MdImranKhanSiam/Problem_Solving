#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int s;

        cin >> s;

        int start = 9;

        list<int>num;

        while( s != 0 )
        {
            if( s >= start )
            {
                num.push_front(start);

                s -= start;

                start--;
            }
            else
            {
                num.push_front(s);

                s -= s;
            }
        }

        for( auto i : num )
            cout << i;

        cout << endl;
    }
}

