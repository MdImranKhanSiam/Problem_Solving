#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll points( ll days, ll tasks, ll task, ll lesson )
{
    ll point = 0, lessons;

    lessons = days;

    point += min(days*2,tasks)*task;

    point += lessons*lesson;

    return point;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        ll n, p, l, t, tasks;

        cin >> n >> p >> l >> t;

        tasks = ((n-1)/7)+1;

        ll low = 1, mid, high = n;

        ll Min = LLONG_MAX, days;

        while( low <= high )
        {
            ll value;

            mid = (low+high)/2;

            value = points(mid,tasks,t,l);

            if( value == p )
            {
                days = mid;

                break;
            }
            else if( value > p )
            {
                high = mid-1;

                if( value < Min )
                {
                    Min = value;

                    days = mid;
                }
            }
            else
            {
                low = mid+1;
            }
        }

        cout << n-days << endl;
    }
}
