#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll Emotes( ll k, ll lines )
{
    ll emote = 0, limit, remain, middle;

    limit = (k*2)-1;

    remain = lines;

    middle = (limit/2)+1;

    if( remain == middle )
    {
        emote += (k*(k+1))/2;
    }
    else if( remain < middle )
    {
        emote += (remain*(remain+1))/2;
    }
    else if( remain > middle )
    {
        ll temp = limit-remain;

        emote += (k*(k+1))/2;

        emote += (((k-1)*((k-1)+1))/2)-((temp*(temp+1))/2);
    }

    return emote;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll k, x, Max = 0, emotes;

        cin >> k >> x;

        ll low = 1, mid, high = (k*2)-1;

        while( low <= high )
        {
            mid = (low+high)/2;

            ll value = Emotes(k,mid);

            if( value == x )
            {
                Max = mid;

                emotes = value;

                break;
            }
            else if( value < x )
            {
                if( mid > Max )
                {
                    Max = mid;

                    emotes = value;
                }

                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }

        if( (Max < (k*2)-1) && emotes < x )
        {
            Max++;
        }

        cout << Max << endl;
    }
}
