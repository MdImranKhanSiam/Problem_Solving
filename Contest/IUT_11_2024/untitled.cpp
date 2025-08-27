#include<bits/stdc++.h>

using namespace std;

int main(){
vector<int >v,n;
vector<int >s;
for(int i=0;i<8;i++){
        int f;
cin>>f;
   v.push_back(f);
    n.push_back(f);
}
int sum=0;
sort(n.begin(),n.end());
int mx=0;
for(int i=7;i>2;i--){
      for(int j=0;j<8;j++){
       if( n[i]==v[j]){
    s.push_back(j+1);
       sum=sum+v[j];
       }
      }


}
cout<<sum<<endl;
sort(s.begin(),s.end());
for(auto u:s){
    cout<<u<<" ";
}}
