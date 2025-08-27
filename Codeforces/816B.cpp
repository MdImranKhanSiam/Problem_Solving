#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define endl "\n"

ll length = 200000;

vector<ll>DA(length+1,0);

void Update_DA( ll first, ll last )
{
    DA[first]++;

    if( last < length )
    {
        DA[last+1]--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, k, q;

    cin >> n >> k >> q;

    for( ll i = 0; i < n; i++ )
    {
        ll point1, point2;

        cin >> point1 >> point2;

        Update_DA(point1,point2);
    }

    vector<ll>Array(1,0), Prefix_Array(1,0);

    for( ll i = 1; i <= length; i++ )
    {
        if( i == 1 )
        {
            Array.push_back(DA[i]);
        }
        else
        {
            Array.push_back(DA[i]+Array[i-1]);
        }
    }

    for( int i = 1; i <= length; i++ )
    {
        if( Array[i] >= k )
        {
            Array[i] = 1;
        }
        else
        {
            Array[i] = 0;
        }
    }

    for( ll i = 1; i <= length; i++ )
    {
        Prefix_Array.push_back(Prefix_Array[i-1]+Array[i]);
    }

    for( ll i = 0; i < q; i++ )
    {
        int range1, range2;

        cin >> range1 >> range2;

        cout << Prefix_Array[range2]-Prefix_Array[range1-1] << endl;
    }
}

