#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, p, mod;

    cin >> n >> p >> mod;

    ll result = n;

    for( int i = 2; i <= p; i++ )
    {
        result *= n;

        if( result >= mod )
        {
            result %= mod;
        }
    }

    cout << result << endl;
}




//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//#define ll long long int
//
//#define ull unsigned long long int
//
//int main()
//{
//
//
//    int tc;
//
//    cin >> tc;
//
//    while( tc-- )
//    {
//
//        ll n, mod;
//
//        cin >> n >> mod;
//
//        cout << n%mod << endl;
//    }
//
//}
