#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll func( string s, char target )
{
    ll n = s.size();

    ll group_length = 0, group_start = -1, group_end = -1;

    for( int i = 0; i < n; i++ )
    {
        ll Start = -1, End = -1, Size = 0;

        if( s[i] == target )
        {
            Start = i;

            Size = 1;

            if( i < n-1 )
            {
                for( int j = Start+1; j < n; j++ )
                {
                    if( s[j] == target )
                    {
                        Size++;
                    }
                    else
                    {
                        End = j-1;

                        break;
                    }
                }
            }
        }

        if( Size > group_length )
        {
            group_length = Size;

            group_start = Start;

            group_end = End;
        }

        if( End != -1 )
        {
            i = End;
        }

    }

    for( int i = 0; i < n; i++ )
    {
        if( s[i] == target )
        {
            if( i < group_start || i > group_end )
            {
                if( i < group_start )
                {
                    for( int j = i; j < group_start; j++ )
                    {

                    }
                }
                else
                {

                }
            }
        }
    }



//    cout << target << ": ";
//
//    cout << group_length << " " << group_start << " " << group_end << " " << endl;

    return 1;
}

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

        string s;

        cin >> s;

        cout << min(func(s,'a'),func(s,'b')) << endl;
    }
}
