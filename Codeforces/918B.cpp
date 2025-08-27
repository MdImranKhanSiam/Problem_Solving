#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    unordered_map<string,string>ip_name;

    for( int i = 0; i < n; i++ )
    {
        string name, ip;

        cin >> name;

        getchar();

        cin >> ip;

        ip.push_back(';');

        ip_name[ip] = name;
    }

    for( int i = 0; i < m; i++ )
    {
        string command, ip;

        cin >> command;

        getchar();

        cin >> ip;

        cout << command << " " << ip << " #" << ip_name[ip] << endl;
    }
}
