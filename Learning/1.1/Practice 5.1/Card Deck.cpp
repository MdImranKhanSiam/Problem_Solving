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

        vector<ll>deck;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            deck.push_back(value);
        }

        queue<ll>Queue;

        for( int i = n; i >= 1; i-- )
        {
            Queue.push(i);
        }

        ll priority = Queue.front();

        Queue.pop();

        ll elements = 0;

        vector<ll>new_deck, found(n+1,0);

        for( int i = n-1; i >= 0; i-- )
        {
            ll current = deck[i];

            if( current == priority )
            {
                for( int j = i, k = 1; k <= elements+1; j++, k++ )
                {
                    new_deck.push_back(deck[j]);

                    found[deck[j]] = 1;
                }

                while( !Queue.empty() )
                {
                    ll get = Queue.front();

                    Queue.pop();

                    if( found[get] != 1 )
                    {
                        priority = get;

                        break;
                    }
                }

                elements = 0;
            }
            else
            {
                elements++;
            }
        }

        for( auto point : new_deck )
        {
            cout << point << " ";
        }

        cout << endl;
    }
}
