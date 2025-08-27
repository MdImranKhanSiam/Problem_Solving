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
        ll n;

        cin >> n;

        vector<ll>distinct;

        unordered_map<ll,ll>frequency;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            if( frequency[value] == NULL )
            {
                distinct.push_back(value);

                frequency[value] = 1;
            }
            else
            {
                frequency[value]++;
            }
        }

        priority_queue<ll>Max_Heap;

        for( auto point : distinct )
        {
            Max_Heap.push(frequency[point]);
        }

        while( Max_Heap.size() > 1 )
        {
            ll value1, value2;

            value1 = Max_Heap.top();

            Max_Heap.pop();

            value2 = Max_Heap.top();

            Max_Heap.pop();

            value1--;

            value2--;

            if( value1 != 0 )
            {
                Max_Heap.push(value1);
            }

            if( value2 != 0 )
            {
                Max_Heap.push(value2);
            }
        }

        ll result = 0;

        while( !Max_Heap.empty() )
        {
            result += Max_Heap.top();

            Max_Heap.pop();
        }

        cout << result << endl;
    }
}
