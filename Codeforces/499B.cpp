#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    map<string,string>words;

    for( int i = 0; i < m; i++ )
    {
        string first, second; cin >> first >> second;

        if( first.size() <= second.size() )
            words[first] = words[second] = first;
        else
            words[first] = words[second] = second;
    }

    for( int i = 0; i < n; i++ )
    {
        string s; cin >> s;

        cout << words[s] << " ";
    }

    cout << endl;
}

