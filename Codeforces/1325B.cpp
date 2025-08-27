#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n;

        cin >> n;

        set<int>sequence;

        for( int i = 0; i < n; i++ )
        {
            int value;

            cin >> value;

            sequence.insert(value);
        }

        cout << sequence.size() << endl;
    }
}

