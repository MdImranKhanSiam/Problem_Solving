#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        string s;

        cin >> s;

        vector<int>Alpha(68+1,0);

        for( auto point : s )
        {
            Alpha[point]++;
        }

        cout << min(Alpha['A'],n)+min(Alpha['B'],n)+min(Alpha['C'],n)+min(Alpha['D'],n) << endl;
    }
}

