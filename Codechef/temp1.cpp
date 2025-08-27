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
        string a, b, store;

        cin >> a >> b;

        bool check = false;

        ll length_a = a.size(), length_b = b.size(), target = 0;

        vector<int>Hashmap(500,-1);

        for( int i = 0; i < length_a; i++ )
        {
            if( target < length_b && a.at(i) == b.at(target) )
            {
                int ch = b.at(target);

                if( Hashmap[ch] == -1 )
                {
                    Hashmap[ch] = target+1;
                }

                target++;
            }
            else
            {
                store.push_back(a.at(i));
            }
        }

        if( target == length_b )
        {
            check = true;
        }

        ll cost = 0;

        for( auto point : store )
        {
            if( Hashmap[point] != -1 )
            {
                cost += Hashmap[point];
            }
            else
            {
                cost +=
            }
        }

    }
}
