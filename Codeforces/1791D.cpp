#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        string s;

        cin >> n >> s;

        unordered_map<char,int>first, second;

        first[s.at(0)] = 1;

        int maxx = 0;

        for( int i = 1; i < n; i++ )
        {
            char ch = s.at(i);

            if( second[ch] == NULL )
                second[ch] = 1;
            else
                second[ch]++;
        }

        maxx = first.size()+second.size();

        for( int i = 1; i < n; i++ )
        {
            char ch = s.at(i);

            if( first[ch] == NULL )
                first[ch] = 1;
            else
                first[ch]++;

            second[ch]--;

            if( second[ch] == 0 )
                second.erase(ch);

            int check = first.size()+second.size();

            if( check > maxx )
                maxx = check;
        }

        cout << maxx << endl;

    }
}


