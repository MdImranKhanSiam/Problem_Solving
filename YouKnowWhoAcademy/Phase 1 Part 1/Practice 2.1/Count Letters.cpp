#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;

    cin >> s;

    vector<ll>Hashmap(123,0);

    for( auto point : s )
    {
        Hashmap[point]++;
    }

    for( int i = 97; i <= 122; i++ )
    {
        ll total = Hashmap[i];

        if( total != 0 )
        {
            char ch = i;

            cout << ch << " : " << total << endl;
        }
    }
}
