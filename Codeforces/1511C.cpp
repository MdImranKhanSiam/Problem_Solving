#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    list<int>cards;

    list<int>::iterator itr;

    for( int i = 0; i < n; i++ )
    {
        int value;

        cin >> value;

        cards.push_back(value);
    }

    for( int i = 0; i < q; i++ )
    {
        int value;

        cin >> value;

        int index = 1;

        for( auto point : cards )
        {
            if( value == point )
            {
                cout << index << " ";

                itr = cards.begin();

                advance(itr, index-1);

                cards.erase(itr);

                cards.push_front(value);

                break;
            }

            index++;
        }
    }

    cout << endl;
}


