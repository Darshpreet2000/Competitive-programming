#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool compare(ll a,ll b){
   return a>b;
}
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n;
       cin>>n;
       ll inp;
      vector<vector<ll>> v(n+1);
      for(ll i=1;i<=n;i++){
         cin>>inp;
         v[inp].push_back(i+1);
      }
       //dfs & assign
    }

return 0;
}
