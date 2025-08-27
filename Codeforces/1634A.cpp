#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while( tc-- )
    {
        int n, k;

        cin >> n >> k;

        string s;

        cin >> s;

        int total = 1;

        string temp = s;

        if( k > 0 )
        {
            while( true )
            {
                string left = temp, right = temp, rev_l = temp, rev_r = temp;

                reverse( rev_l.begin(), rev_l.end() );
                reverse( rev_r.begin(), rev_r.end() );

                left.insert(0,rev_l);
                right.insert(right.size(),rev_r);

                temp = left;

                if( left != right )
                    total++;
                else
                    break;
            }
        }

        cout << total << endl;
    }
}

