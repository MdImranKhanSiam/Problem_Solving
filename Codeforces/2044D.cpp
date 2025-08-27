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

        vector<int>store, hashmap(n+1,0), visited(n+1,0);

        queue<int>Queue;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            store.push_back(value);

            hashmap[value] = 1;
        }

        for( int i = 1; i <= n; i++ )
        {
            if( hashmap[i] != 1 )
            {
                Queue.push(i);
            }
        }

        for( auto point : store )
        {
            if( visited[point] != 1 )
            {
                cout << point;

                visited[point] = 1;
            }
            else
            {
                cout << Queue.front();

                Queue.pop();
            }

            cout << " ";
        }

        cout << endl;
    }
}
