#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define endl "\n"

void Print_DA( vector<ll>&DA, vector<ll>&A, ll index )
{
    ll length = DA.size();

    for( ll i = 0; i < length; i++ )
    {
        if( i == 0 )
        {
            A[i] = DA[i];
        }
        else
        {
            A[i] = DA[i]+A[i-1];
        }

        if( i == index )
        {
            cout << A[i] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, q;

    cin >> n >> q;

    vector<ll>DA;

    ll previous;

    for( ll i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        if( i == 0 )
        {
            DA.push_back(value);
        }
        else
        {
            DA.push_back(value-previous);
        }

        previous = value;
    }

    vector<ll>Array(n);

    bool change = true;

    int total_a = 0, total_b = 0;

    for( ll i = 0; i < q; i++ )
    {
        ll mode;

        cin >> mode;

        if( mode == 1 )
        {
            change = true;

            ll a, b, u;

            cin >> a >> b >> u;

            DA[--a] += u;

            if( --b < n-1 )
            {
                DA[b+1] -= u;
            }
        }
        else
        {
            ll k;

            cin >> k;

            if( change == false )
            {
                cout << Array[--k] << endl;

                total_a++;
            }
            else
            {
                total_b++;

                change = false;

                Print_DA(DA,Array,--k);
            }
        }
    }

    cout << "Total: " << total_a << "  " << total_b << endl;
}

