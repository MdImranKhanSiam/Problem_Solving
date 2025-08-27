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
        ll n;

        cin >> n;

        vector<ll>store1,store2, prefix1, prefix2;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store1.push_back(value);
        }

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store2.push_back(value);
        }

        sort(store1.begin(),store1.end(),greater<int>());

        sort(store2.begin(),store2.end(),greater<int>());

        ll score = 0, limit = n-(n/4);

        for( int i = 0; i < n; i++ )
        {
            if( i == 0 )
            {
                prefix1.push_back(store1[i]);

                prefix2.push_back(store2[i]);
            }
            else
            {
                prefix1.push_back(prefix1[i-1]+store1[i]);

                prefix2.push_back(prefix2[i-1]+store2[i]);
            }
        }

        ll result;

        if( prefix1[limit-1] >= prefix2[limit-1] )
        {
            result = 0;
        }
        else
        {
            ll start = 1;

            while( true )
            {
                ll total = (start+n)-((start+n)/4), left;

                left = total-start;

                ll value1, value2;

                value1 = prefix1[min(n-1,left-1)];

                value2 = prefix2[min(n-1,total-1)];

                if( value1+(start*100) >= value2 )
                {
                    result = start;

                    break;
                }

                start++;
            }
        }

        cout << result << endl;
    }
}
