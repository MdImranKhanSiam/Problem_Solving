#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll cards;

    cin >> cards;

    ll p1, p2;

    queue<ll>player1, player2;

    cin >> p1;

    for( int i = 0; i < p1; i++ )
    {
        ll value;

        cin >> value;

        player1.push(value);
    }

    cin >> p2;

    for( int i = 0; i < p2; i++ )
    {
        ll value;

        cin >> value;

        player2.push(value);
    }

    ll rounds = 0, winner = -1;

    ll End = 1000000;

    while( End-- )
    {
        ll card1, card2;

        if( !player1.empty() )
        {
            card1 = player1.front();

            player1.pop();
        }
        else
        {
            winner = 2;

            break;
        }

        if( !player2.empty() )
        {
            card2 = player2.front();

            player2.pop();
        }
        else
        {
            winner = 1;

            break;
        }

        if( card1 > card2 )
        {
            player1.push(card2);

            player1.push(card1);
        }
        else if( card2 > card1 )
        {
            player2.push(card1);

            player2.push(card2);
        }

        rounds++;
    }

    if( winner == -1 )
    {
        cout << winner << endl;
    }
    else
    {
        cout << rounds << " " << winner << endl;
    }
}
