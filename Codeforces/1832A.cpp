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

        map<char,int>total;

        int minimum = 51;

        set<char>unique;

        for( char ch : s )
        {
        	unique.insert(ch);

        	if( total[ch] == NULL )
                total[ch] = 1;
            else
                total[ch]++;
        }

        map<char,int>::iterator serial;

        for( serial = total.begin(); serial != total.end(); serial++ )
        {
            if( serial -> second < minimum )
                minimum = serial -> second;
        }

        if( unique.size() >= 3 || ( unique.size() == 2 && minimum > 1 ) )
        	cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
