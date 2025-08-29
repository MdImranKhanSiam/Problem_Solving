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
//bool expression( ll n, vector<ll>&store, ll target, ll bit )
//{
//    if( bit == pow(2,n) )
//    {
//        return false;
//    }
//
//    bool current = false;
//
//    ll sum = 0;
//
//    for( int i = 0; i < n; i++ )
//    {
//        if( ((bit >> i) & 1) == 1 )
//        {
//            sum += store[i];
//        }
//        else
//        {
//            sum -= store[i];
//        }
//    }
//
//    if( sum == target )
//    {
//        current = true;
//    }
//
//    return current || expression(n,store,target,bit+1);
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);
//
//    ll n, target;
//
//    cin >> n >> target;
//
//    vector<ll>store;
//
//    for( int i = 0; i < n; i++ )
//    {
//        ll value = i;
//
//        cin >> value;
//
//        store.push_back(value);
//    }
//
//    if( expression(n,store,target,0) )
//    {
//        cout << "YES";
//    }
//    else
//    {
//        cout << "NO";
//    }
//
//    cout << endl;
//}


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void expression( ll n, ll target, vector<ll>&store, bool &result, ll index, ll sum )
{
    if( index == n )
    {
        if( sum == target )
        {
            result = true;
        }

        return;
    }

    expression(n,target,store,result,index+1,sum+store[index]);

    expression(n,target,store,result,index+1,sum-store[index]);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, target;

    cin >> n >> target;

    vector<ll>store;

    for( int i = 0; i < n; i++ )
    {
        ll value;

        cin >> value;

        store.push_back(value);
    }

    bool result = false;

    expression(n,target,store,result,1,store[0]);

    if( result == true )
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
}
