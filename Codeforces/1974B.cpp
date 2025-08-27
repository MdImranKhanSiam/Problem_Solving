#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        string s;

        cin >> s;

        set<char>store;

        for( char ch : s )
        {
            store.insert(ch);
        }

        vector<char>letters;

        for( auto point : store )
        {
            letters.push_back(point);
        }

        unordered_map<char,char>Hashmap;

        int length = letters.size();

        for( int i = 0,j = length-1; i < length; i++,j-- )
        {
            Hashmap[letters[i]] = letters[j];
        }

        for( auto point : s )
        {
            cout << Hashmap[point];
        }

        cout << endl;
    }
}

