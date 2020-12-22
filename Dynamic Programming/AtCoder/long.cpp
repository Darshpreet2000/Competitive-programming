#include<bits/stdc++.h>
using namespace std;
#define ll long long int

 ll dp[100001]={0};

 vector<vector<ll>> v(100001);
ll recur(ll src){

         if(v[src].size()==0){
            return 0;
         }
         if(dp[src]!=0)
            return dp[src];
         ll a=0;
         for(ll k=0;k<v[src].size();k++){
           a=max(a,1+recur(v[src][k]));
         }
         return dp[src]=a;
}
int main(){

 ll n,m;
 cin>>n>>m;
 vector<ll> vert;
 for(ll i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    v[a].push_back(b);
    vert.push_back(a);
 }
 ll a=0;
 for(ll k=0;k<vert.size();k++)
           a=max(a,recur(vert[k]));

         cout<<a<<"\n";
return 0;
}
