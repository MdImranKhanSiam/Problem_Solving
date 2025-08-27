#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, k;

    cin >> n >> k;

    string s;

    cin >> s;

    bool check1 = true;

    for( int i = 1; i < n; i++ )
    {
        if( s[0] > s[i] )
        {
            check1 = false;
        }
    }

    if( check1 )
    {
        for( int i = 0; i < k; i++ )
        {
            cout << s[0];
        }

        cout << endl;
    }
    else
    {
        ll index = -1;

        for( int i = 1; i < n; i++ )
        {
            if( s[0] < s[i] )
            {
                index = i-1;

                break;
            }
        }

        if( index == -1 )
        {
            index = n-1;
        }

        string New;

        for( int i = 0; i <= index; i++ )
        {
            New.push_back(s[i]);
        }

        ll length = New.size();

        ll j = 0;

        for( int i = 0; i < k; i++ )
        {
            cout << New[j];

            j++;

            if( j == length )
            {
                j = 0;
            }
        }

        cout << endl;
    }
}
