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

    ll sum = 0;

    for( auto point : s )
    {
        string temp;

        temp = point;

        sum += stoi(temp);
    }

    cout << sum << endl;
}
