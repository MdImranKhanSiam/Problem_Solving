#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

string vowel = "aeiouAEIOU";

ll count_vowel( string s, ll index )
{
    if( s[index] == '\0' )
    {
        return 0;
    }

    ll current = 0;

    for( auto point : vowel )
    {
        if( point == s.at(index) )
        {
            current++;

            break;
        }
    }

    return count_vowel(s,index+1)+current;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;

    getline(cin,s);

    ll result = count_vowel(s,0);

    cout << result << endl;
}
