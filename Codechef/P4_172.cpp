//Transform String

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
        string a, b;

        cin >> a >> b;

        bool check = false;

        ll length_a = a.size(), length_b = b.size(), target = 0;

        vector<ll>Mark(length_a, c);

        for( int i = 0; i < length_a; i++ )
        {
            if( target < length_b && a.at(i) == b.at(target) )
            {
                target++;
            }
        }

        if( target == length_b )
        {
            check = true;
        }

        if( check == true )
        {
            ll new_target = length_b-1;

            for( int i = length_a-1; i >= 0; i-- )
            {
                if( new_target >= 0 && a.at(i) == b.at(new_target) )
                {
                    Mark[i] = 1;

                    new_target--;
                }
            }

            ll M = 0, Cost = 0;

            for( int i = 0; i < length_a; i++ )
            {
                if( Mark[i] == 1 )
                {
                    M++;
                }
                else
                {
                    Cost += M+1;
                }
            }

            cout << Cost << endl;

        }
        else
        {
            cout << -1 << endl;
        }
    }
}
