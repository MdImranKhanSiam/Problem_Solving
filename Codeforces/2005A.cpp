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
        int n;

        vector<char>vowel = {'a','e','i','o','u'};

        cin >> n;

        if( n > 5 )
        {
            int dupli, extra;

            dupli = n/5;

            extra = n-(dupli*5);

            for( int i = 0; i < 5; i++ )
            {
                for( int j = 0; j < dupli; j++ )
                {
                    cout << vowel[i];
                }

                if( extra > 0 )
                {
                    cout << vowel[i];

                    extra--;
                }
            }
        }
        else
        {
            for( int i = 0; i < n; i++ )
            {
                cout << vowel[i];
            }
        }

        cout << endl;
    }
}

