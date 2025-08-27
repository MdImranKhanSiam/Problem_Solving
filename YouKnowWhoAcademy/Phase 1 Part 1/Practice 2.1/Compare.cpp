#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    vector<string>store(2);

    cin >> store[0] >> store[1];

    sort(store.begin(),store.end());

    cout << store[0] << endl;
}
