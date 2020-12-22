#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
 ll n,m,k,in,sum=0,count=0,inp;
 cin>>n>>m>>k;
 for(ll i=0;i<n;i++){
        sum=0;
     for(ll j=0;j<k+1;j++){
        cin>>inp;
          if(j<k){
            sum+=inp;
          }
     }
     if(inp<=10&&sum>=m){
            count++;

     }
 }
 cout<<count<<"\n";
}
int main(){
    fast
    ll T=1;
   // cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


