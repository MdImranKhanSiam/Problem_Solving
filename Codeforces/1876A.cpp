#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, p;

        cin >> n >> p;

        vector<pair<int,int>>people(n);

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            people[i].second = value;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Queue;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            people[i].first = value;

            Queue.push(people[i]);
        }

        vector<int>visited(n);

        int total = 0, cost = 0;

        while( total != n )
        {
            int current = p;

            pair<int,int>temp = Queue.top();

            if( temp.first < p )
            {
                current = temp.first;
            }


        }
    }
}
