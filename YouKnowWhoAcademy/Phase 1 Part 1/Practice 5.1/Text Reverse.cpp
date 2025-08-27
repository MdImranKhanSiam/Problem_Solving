#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);

    int tc;

    cin >> tc;

    getchar();

    while( tc-- )
    {
        string s;

        getline(cin,s);

        istringstream read(s);

        string word;

        while( read >> word )
        {
            ll length = word.size();

            for( int i = length-1; i >= 0; i-- )
            {
                cout << word[i];
            }

            cout << " ";
        }

        cout << endl;
    }
}
