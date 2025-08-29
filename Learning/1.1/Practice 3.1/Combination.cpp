

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
//ll combination( ll n, ll r, ll index )
//{
//    if( index > pow(2,n) )
//    {
//        return 0;
//    }
//
//    ll result = 0;
//
//    if( __builtin_popcount(index) == r )
//    {
//        result++;
//    }
//
//    return result+combination(n,r,index+1);
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);
//
//    ll n, r;
//
//    cin >> n >> r;
//
//    cout << combination(n,r,1);
//}


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

ll combination( ll n, ll r )
{
    if( n < 0 || n < r || r < 0 )
    {
        return 0;
    }

    if( n == 0 )
    {
        return 1;
    }

    return combination(n-1,r)+combination(n-1,r-1);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, r;

    cin >> n >> r;

    cout << combination(n,r) << endl;
}
