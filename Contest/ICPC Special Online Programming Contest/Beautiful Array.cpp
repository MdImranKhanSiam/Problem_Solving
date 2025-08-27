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
        ll n, k;

        cin >> n >> k;

        vector<ll>store;

        for( int i = 0; i < n; i++ )
        {
            ll value;

            cin >> value;

            store.push_back(value);
        }

        sort(store.begin(),store.end());

//        for( auto p : store )
//        {
//            cout << p << " ";
//        }
//
//        cout << endl;

        vector<ll>done(n,0);

        ll limit = n/2, op = 0;

        for( int j = 1; j <= limit; j++ )
        {
            ll index1 = -1, index2 = -1, Min = LLONG_MAX;

            ll first = -1, second = -1;

            for( int i = 0; i < n; i++ )
            {

                if( done[i] != 1 )
                {
                    if( first == -1 )
                    {
                        first = i;
                    }
                    else
                    {
                        second = i;

                        ll diff = store[second]-store[first];

                        if( diff < Min && diff % k == 0 )
                        {
                            Min = diff;

                            index1 = first;

                            index2 = second;


                        }

                        first = second;

                        second = -1;
                    }
                }
            }

            if( index1 == -1 )
            {
                op = -1;

                break;
            }

            done[index1] = 1;

            done[index2] = 1;

//            cout << Min << endl;
//
//            cout << "Index: " << index1 << endl;
//
//            cout << "Index: " << index2 << endl;

            op += Min;
        }

        cout << op << endl;
    }
}


