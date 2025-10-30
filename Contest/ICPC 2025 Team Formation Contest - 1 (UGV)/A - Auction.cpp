#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void Recursion( ll limit, ll turn, ll price, bool &found )
{
    if( found )
    {
        return;
    }

    if( price > limit )
    {
        if( turn % 2 == 0 )
        {
            found = true;
        }

        return;
    }

    turn++;

    for( int i = 2; i <= 9; i++ )
    {
//        cout << "Turn: " << turn << endl;
//
//        cout << "Multi: " << i << endl;
//
//        cout << "Price: " << price*i << endl;

        Recursion(limit,turn,price*i,found);

        if( found )
        {
            return;
        }
    }
}

int main()
{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);


    for( int i = 1; i <= 1e18; i++ )
    {
        Sleep(1);

        ll n = i;

//        cin >> n;

        bool found = false;

        Recursion(n,0,1,found);

        cout << i << ": ";

        if( found )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }


}
