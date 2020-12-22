#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll recur(vector<vector<ll>> v,ll n,ll ans,ll src){
         if(n==0){
            return ans;
         }

         ll a=0;
         for(ll k=0;k<v[src].length();k++){
           a=max(a,recur(v,n-1,ans+1,v[src][k]));
         }
         return a;
}
int main(){

 ll n,m;
 cin>>n>>m;

 vector<vector<ll>> v;
 for(ll i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    v[a].push_back(b);
 }
  cout<<recur(v,n,0,v[0][0]);

return 0;
}
