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
//    double n;
//
//    cin >> n;
//
//    cout << round(n) << endl;
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

    double n, nn;

    cin >> n;

    ll temp = n;

    nn = temp;

    if( n-nn < (nn+1)-n )
    {
        temp = nn;
    }
    else
    {
        temp = nn+1;
    }

    cout << temp << endl;
}
