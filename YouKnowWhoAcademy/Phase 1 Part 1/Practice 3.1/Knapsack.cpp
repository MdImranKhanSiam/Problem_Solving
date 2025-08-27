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
//ll knapsack( ll n, ll capacity, vector<pair<ll,ll>>&item, ll bit )
//{
//    if( bit == pow(2,n) )
//    {
//        return 0;
//    }
//
//    ll current = 0, weight = 0, value = 0;
//
//    for( int i = 0; i < n; i++ )
//    {
//        if( ((bit >> i) & 1) == 1 )
//        {
//            weight += item[i].first;
//
//            value += item[i].second;
//        }
//    }
//
//    if( weight <= capacity )
//    {
//        current = value;
//    }
//
//    return max(current,knapsack(n,capacity,item,bit+1));
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);
//
//    ll n, c;
//
//    cin >> n >> c;
//
//    vector<pair<ll,ll>>item;
//
//    for( int i = 0; i < n; i++ )
//    {
//        ll w, v;
//
//        cin >> w >> v;
//
//        item.push_back(make_pair(w,v));
//    }
//
//    cout << knapsack(n,c,item,1) << endl;
//}

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

void knapsack( ll n, ll c, vector<pair<ll,ll>>&item, ll &Max, ll index, ll weight, ll value )
{
    if( index == n )
    {
        if( weight <= c && value > Max )
        {
            Max = value;
        }

        return;
    }

    knapsack(n,c,item,Max,index+1,weight,value);

    knapsack(n,c,item,Max,index+1,weight+item[index].first,value+item[index].second);
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, c;

    cin >> n >> c;

    vector<pair<ll,ll>>item;

    for( int i = 0; i < n; i++ )
    {
        ll value1, value2;

        cin >> value1 >> value2;

        item.push_back(make_pair(value1,value2));
    }

    ll Max = 0;

    knapsack(n,c,item,Max,0,0,0);

    cout << Max << endl;
}
