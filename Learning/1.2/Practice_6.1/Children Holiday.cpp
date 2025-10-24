#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

//ll balloons( vector<vector<ll>>&person, ll second )
//{
//    ll total = 0;
//
//    for( int i = 0; i < person.size(); i++ )
//    {
//        ll t = person[i][0];
//
//        ll z = person[i][1];
//
//        ll y = person[i][2];
//
//        ll time = second-(t-1);
//
//        ll diff = (t*z)+y;
//
//        ll current = z*(time/diff);
//
//        current += min(z,time-((time/diff)*diff));
//
//        total += current;
//
//        cout << "Person " << i+1 << ": " << current << endl;
//    }
//
//    return total;
//}

pair<vector<ll>,pair<ll,ll>> Data( vector<vector<ll>>&person, ll second )
{
    pair<vector<ll>,pair<ll,ll>>data;

    ll total = 0;

    ll time_used = 0;

    for( int i = 0; i < person.size(); i++ )
    {
        ll current = 0;

        ll current_time = 0;

        ll Time = person[i][0];

        ll Make = person[i][1];

        ll Sleep = person[i][2];

        ll T = 0, M = 0, S = 0;

        for( int j = 1; j <= second; j++ )
        {
            T++;

            if( T == Time )
            {
                current++;

                current_time = j;

                M++;

                if( M == Make )
                {
                    T = 0;

                    M = 0;

                    j += Sleep;
                }
                else
                {
                    T = 0;
                }
            }
        }

        time_used += current_time;

        total += current;

        data.first.push_back(current);

//        cout << "Person: " << i+1 << endl;
//
//        cout << "Balloon: " << current << endl;
//
//        cout << "Time: " << current_time << endl;
    }

    data.second = make_pair(total,time_used);

    return data;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll target, persons;

    cin >> target >> persons;

    vector<vector<ll>>person;

    for( int i = 0; i < persons; i++ )
    {
        vector<ll>stats;

        for( int j = 0; j < 3; j++ )
        {
            ll value;

            cin >> value;

            stats.push_back(value);
        }

        person.push_back(stats);
    }

    ll low = 0, mid = 0, high = 1e6;

    pair<vector<ll>,pair<ll,ll>>result;

    while( low <= high )
    {
        mid = (low+high)/2;

        pair<vector<ll>,pair<ll,ll>>data = Data(person,mid);

        ll balloons = data.second.first;

        if( balloons >= target )
        {
            result = data;

            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    cout << result.second.second << endl;

    for( auto point: result.first )
    {
        cout << point << " ";
    }

    cout << endl;


}
