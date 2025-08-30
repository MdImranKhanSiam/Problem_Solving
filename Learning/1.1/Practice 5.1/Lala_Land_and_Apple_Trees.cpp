#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll Run( ll n, vector<pair<ll,ll>>&xa, ll direction )
{
    ll collect = 0;
    ll position = -1;

    if( direction == 1 )
    {
        for( int i = 0; i < n; i++ )
        {
            if( xa[i].first > 0 )
            {
                position = i;

                break;
            }
        }
    }
    else if( direction == -1 )
    {
        for( int i = n-1; i >= 0; i-- )
        {
            if( xa[i].first < 0 )
            {
                position = i;

                break;
            }
        }
    }

    if( position == -1 )
    {
        return 0;
    }

    while( true )
    {
        if( xa[position].second != 0 )
        {
            collect += xa[position].second;

            xa[position].second = 0;

            direction *= -1;
        }
        else
        {
            position += direction;
        }

        if( position < 0 || position >= n )
        {
            break;
        }
    }

    return collect;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;

    cin >> n;

    vector<pair<ll,ll>>xa;

    for( int i = 0; i < n; i++ )
    {
        ll value1, value2;

        cin >> value1 >> value2;

        xa.push_back(make_pair(value1,value2));
    }

    sort(xa.begin(),xa.end());

    ll result = max(Run(n,xa,1),Run(n,xa,-1));

    cout << result << endl;
}
