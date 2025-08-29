#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

bool unique_digit( ll n )
{
    bool result = false;

    string s = to_string(n);

    ll length = s.size();

    set<char>Set;

    for( auto point : s )
    {
        Set.insert(point);
    }

    if( Set.size() == length )
    {
        result = true;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll year;

    cin >> year;

    while( true )
    {
        year++;

        if( unique_digit(year) )
        {
            cout << year << endl;

            break;
        }
    }
}
