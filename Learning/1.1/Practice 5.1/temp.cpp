#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    vector<ll>s;

    s.push_back(4);

    s.push_back(8);

    s.push_back(6);

    for( auto point : s )
    {
        cout << point << " ";
    }

    cout << endl;

    s.pop_();

    for( auto point : s )
    {
        cout << point << " ";
    }

    cout << endl;
}
