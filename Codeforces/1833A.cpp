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

        set<string>melody;

        for( int i = 1; s[i] != '\0'; i++ )
        {
            string notes;

            for( int j = 0, k = i-1; j < 2; j++, k++ )
                notes += s.at(k);

            melody.insert(notes);
        }

        cout << melody.size() << endl;
    }
}

