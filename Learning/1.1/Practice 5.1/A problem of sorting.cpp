#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool check_num( string s )
{
    bool result = true;

    for( auto point : s )
    {
        if( !isdigit(point) )
        {
            result = false;

            break;
        }
    }

    return result;
}

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

        vector<pair<ll,string>>people;

        for( int i = 0; i < n; i++ )
        {
            string s, name;

            ll age;

            while( cin >> s )
            {
                if( check_num(s) )
                {
                    age = stoll(s);

                    break;
                }
                else
                {
                    if( name.empty() )
                    {
                        name += s;
                    }
                    else
                    {
                        name += ' '+s;
                    }
                }
            }

            people.push_back(make_pair(age,name));
        }

        sort(people.begin(),people.end(),greater<pair<ll,string>>());

        for( auto point : people )
        {
            cout << point.second << endl;
        }
    }
}
