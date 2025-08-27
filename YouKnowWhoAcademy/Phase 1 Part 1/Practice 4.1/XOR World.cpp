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
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);
//
//    ll a, b;
//
//    cin >> a >> b;
//
//    ll result = 0;
//
//    for( int i = a; i <= b; i += 2 )
//    {
//        result = i ^ (i+1);
//
//        cout << i << ", " << i+1 << ": " << result << endl;
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

    ll a, b;

    cin >> a >> b;

    ll x = (b+1)/4;

    ll start;

    start = (x*4)-1;

    start++;

    ll full_range = 0;

    for( ll i = start; i <= b; i++ )
    {
        full_range ^= i;
    }

    ll y = ((a-1)+1)/4;

    start = (y*4)-1;

    start++;

    ll previous_range = 0;

    for( ll i = start; i <= a-1; i++ )
    {
        previous_range ^= i;
    }

    ll result = full_range ^ previous_range;

    cout << result << endl;
}
