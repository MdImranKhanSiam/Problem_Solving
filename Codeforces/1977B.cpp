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
        ll x;

        cin >> x;

        vector<ll>data, answer;

        ll value = x;

        while( value != 0 )
        {
            for( int i = 0; i <= 31; i++ )
            {
                ll result1 = pow(2,i);

                if( result1 > value )
                {

                    ll result2 = pow(2,i-1);

                    data.push_back(result2);

                    value -= result2;

                    break;
                }
            }
        }

        while( true )
        {
            bool check = true;

            vector<ll>bits;

            for( int i = 0; i <= 31; i++ )
            {
                ll bit = 0, target = pow(2,i);

                for( auto point : data )
                {
                    if( abs(point) == target )
                    {
                        if( point > 0 )
                        {
                            bit = 1;
                        }
                        else
                        {
                            bit = -1;
                        }

                        break;
                    }
                }

                bits.push_back(bit);
            }

            vector<ll>store;

            bool done = false;

            for( int i = 0; i <= 30; i++ )
            {
                if( done == false && bits[i] != 0 && bits[i+1] != 0 )
                {
                    done = true;

                    check = false;

                    ll diff, result1, result2;

                    result1 = pow(2,i)*bits[i];

                    result2 = pow(2,i+1)*bits[i+1];

                    diff = abs(result2);

                    result1 -= diff;

                    result2 += diff;

                    store.push_back(result1);

                    store.push_back(result2);

                    bits[i+1] = 0;
                }
                else if( abs(bits[i]) == 1 )
                {
                    store.push_back(pow(2,i)*bits[i]);
                }
            }

            if( check == true )
            {
                for( int i = 0; i <= 31; i++ )
                {
                    answer.push_back(bits[i]);
                }

                break;
            }

            data.clear();

            ll length = store.size();

            for( int i = 0; i < length; i++ )
            {
                if( store[i] == 0 )
                {
                    continue;
                }

                ll total = 1;

                for( int j = i+1; j < length; j++ )
                {
                    if( store[j] == store[i] )
                    {
                        store[j] = 0;

                        total++;
                    }
                }

                if( total == 1 )
                {
                    data.push_back(store[i]*total);
                }
                else
                {
                    store[i] *= total;

                    i--;
                }
            }
        }

        cout << 32 << endl;

        for( auto point : answer )
        {
            cout << point << " ";
        }

        cout << endl;
    }
}
