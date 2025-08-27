#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

#define ll long long int

#define ull unsigned long long int

int main()
{


    int a, b, c, inter=0, gremio=0, empates=0, grenais=0;
    while ( true )
    {


        cin>>a;
        cin>>b;
        if(a<b)
        {
            gremio++;
        }
        if(a>b)
        {
            inter++;
        }
        if(a==b)
        {
            empates++;
        }
        grenais++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>c;
        if( c==1 )
        {
            continue;
        }

        if( c==2 )
        {

            break;
        }

    }
    cout<<grenais<<" grenais"<<endl;
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<empates<<endl;
     if (inter>gremio)
     {
         cout<<"Inter venceu mais"<<endl;
     }
     else if (inter<gremio)
     {
         cout<<"Gremio venceu mais"<<endl;
     }
     else
     {
         cout<<"Não houve vencedor"<<endl;
     }
}
