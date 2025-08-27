#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    bool result = true;

    int k;

    string s, t;

    cin >> k >> s >> t;

    int length1 = s.size(), length2 = t.size(), Mismatch = -1;

    for( int i = 0; i < length1 && i < length2; i++ )
    {
        if( s.at(i) != t.at(i) )
        {
            Mismatch = i;

            break;
        }
    }

    if( abs(length1-length2) > 1 )
    {
        result = false;
    }
    else if( Mismatch != -1 )
    {
        if( length1 == length2 )
        {
            for( int i = 0; i < length1; i++ )
            {
                if( i != Mismatch )
                {
                    if( s.at(i) != t.at(i) )
                    {
                        result = false;

                        break;
                    }
                }
            }
        }
        else
        {
            int length3 = min(length1,length2);

            if( length1 > length2 )
            {
                s.erase(Mismatch,1);
            }
            else
            {
                t.erase(Mismatch,1);
            }

            for( int i = 0; i < length3; i++ )
            {
                if( s.at(i) != t.at(i) )
                {
                    result = false;

                    break;
                }
            }
        }
    }

    if( result == true )
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << endl;
}
