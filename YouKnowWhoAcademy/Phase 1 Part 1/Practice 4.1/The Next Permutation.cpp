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
//    int tc;
//
//    cin >> tc;
//
//    while( tc-- )
//    {
//        ll current;
//
//        string s;
//
//        cin >> current >> s;
//
//        bool found = false;
//
//        ll length =  s.size();
//
//        ll change_position = -1;
//
//        for( int i = length-1; i >= 0; i-- )
//        {
//            ll current = s.at(i)-48;
//
//            ll perfect = LLONG_MAX;
//
//            ll position;
//
//            for( int j = i+1; j < length; j++ )
//            {
//                ll value = s.at(j)-48;
//
//                if( value > current )
//                {
//                    if( value < perfect )
//                    {
//                        perfect = value;
//
//                        position = j;
//                    }
//                }
//            }
//
//            if( perfect != LLONG_MAX )
//            {
//                swap(s[i],s[position]);
//
//                change_position = i;
//
//                break;
//            }
//        }
//
//        cout << current << " ";
//
//        if( change_position == -1 )
//        {
//            cout << "BIGGEST";
//        }
//        else
//        {
//            string sorted_s;
//
//            for( int i = 0; i < length; i++ )
//            {
//                if( i <= change_position )
//                {
//                    cout << s.at(i);
//                }
//                else
//                {
//
//                    sorted_s.push_back(s.at(i));
//                }
//            }
//
//            sort(sorted_s.begin(),sorted_s.end());
//
//            cout << sorted_s;
//        }
//
//        cout << endl;
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
        ll current;

        string s;

        cin >> current >> s;

        bool found = next_permutation(s.begin(),s.end());

        cout << current << " ";

        if( found )
        {
            cout << s;
        }
        else
        {
            cout << "BIGGEST";
        }

        cout << endl;
    }
}
