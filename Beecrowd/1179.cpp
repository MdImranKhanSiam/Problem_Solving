#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int  input, i,;
    for( i=0 ; i<15 ; i++ )
    {
        cin>>input;
    }

    while(true)
    {

    for( i=0; i<5; i++ )
        {
        if(input%2==0)
        {
            cout<<"par["<<i<<"] = "<<input<<endl;
        }
    for( i=0; i<5; i++ )
        {
        if(input%2!=0)
        {
            cout<<"par["<<i<<"] = "<<input<<endl;
        }
        }
    }
    }


}
