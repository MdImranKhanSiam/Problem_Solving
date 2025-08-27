#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        string s;

        cin >> s;

        map<char,int>char_count;

        string organize;

        for( char ch : s )
        {
            if( char_count[ch] == 2 )
                continue;
            else if( char_count[ch] == NULL )
                char_count[ch] = 1;
            else
                char_count[ch]++;

            organize.push_back(ch);
        }

        cout << organize.size()/2 << endl;
    }
}

