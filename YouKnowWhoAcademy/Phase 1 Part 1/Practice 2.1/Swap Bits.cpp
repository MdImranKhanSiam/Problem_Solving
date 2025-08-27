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
//bool is_one( ll n, ll position )
//{
//    bool result = false;
//
//    if( (1LL & ( n >> position )) == 1LL )
//    {
//        result = true;
//    }
//
//    return result;
//}
//
//bool similar( ll n, ll right, ll left )
//{
//    bool result = false;
//
//    if( is_one(n,right) == is_one(n,left) )
//    {
//        result = true;
//    }
//
//    return result;
//}
//
//void toggle( ll &n, ll position )
//{
//    n = n ^ (1 << position);
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);
//
//    int tc;
//
//    cin >> tc;
//
//    while( tc-- )
//    {
//        ll n;
//
//        cin >> n;
//
//        for( int i = 0; i < 32; i += 2 )
//        {
//            ll right = i, left = i+1;
//
//            if( !similar(n,right,left) )
//            {
//                toggle(n,right);
//
//                toggle(n,left);
//            }
//        }
//
//        cout << n << endl;
//    }
//}


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
        ll n, result = 0;

        cin >> n;

        for( int i = 0; i < 32; i += 2 )
        {
            if( (n >> i) & 1LL )
            {
                result += 1LL << i+1;
            }

            if( (n >> i+1) & 1LL )
            {
                result += 1LL << i;
            }
        }

        cout << result << endl;
    }
}
