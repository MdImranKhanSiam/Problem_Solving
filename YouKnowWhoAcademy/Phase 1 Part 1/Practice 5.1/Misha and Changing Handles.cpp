#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll query;

    cin >> query;

    vector<string>users;

    unordered_map<string,string>Hashmap;

    while( query-- )
    {
        string Old, New;

        cin >> Old >> New;

        if( Hashmap[Old].empty() )
        {
            users.push_back(Old);

            Hashmap[Old] = New;

            Hashmap[New] = Old;
        }
        else
        {
            string Main = Hashmap[Old];

            Hashmap[Main] = New;

            Hashmap[New] = Main;
        }
    }

    cout << users.size() << endl;

    for( auto point : users )
    {
        cout << point << " " << Hashmap[point] << endl;
    }
}
