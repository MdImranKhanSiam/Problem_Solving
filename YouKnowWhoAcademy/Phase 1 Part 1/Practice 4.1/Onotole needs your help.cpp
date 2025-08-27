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
//    ll n;
//
//    cin >> n;
//
//    vector<ll>store;
//
//    for( int i = 0; i < n; i++ )
//    {
//        ll value;
//
//        cin >> value;
//
//        store.push_back(value);
//    }
//
//    sort(store.begin(),store.end());
//
//    ll target;
//
//    for( int i = 0; i < n; i++ )
//    {
//        ll current = store[i];
//
//        if( i == 0 )
//        {
//            if( current != store[i+1] )
//            {
//                target = current;
//
//                break;
//            }
//        }
//        else if( i == n-1 )
//        {
//            if( current != store[i-1] )
//            {
//                target = current;
//
//                break;
//            }
//        }
//        else
//        {
//            if( current != store[i-1] && current != store[i+1] )
//            {
//                target = current;
//
//                break;
//            }
//        }
//    }
//
//    cout << target << endl;
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

    ll n;

    cin >> n;

    ll result = 0;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        result ^= value;
    }

    cout << result << endl;
}
