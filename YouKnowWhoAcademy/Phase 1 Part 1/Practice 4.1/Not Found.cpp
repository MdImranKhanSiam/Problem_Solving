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

    vector<ll>alphabet(123,0);

    for( auto point : s )
    {
        alphabet[point] = 1;
    }

    ll found = -1;

    for( int i = 97; i <= 122; i++ )
    {
         if( alphabet[i] != 1 )
         {
             found = i;

             break;
         }
    }

    if( found == -1 )
    {
        cout << "None";
    }
    else
    {
        char ch = found;

        cout << ch;
    }

    cout << endl;
}
