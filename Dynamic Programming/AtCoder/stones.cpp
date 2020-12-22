#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
ll n,k;
cin>>n>>k;
  vector<ll> v;
  for(ll i=1;i<=n;i++){
        ll ino;
        cin>>ino;
        v.push_back(ino);
  }
  ll dp[k+1]={0};
  for(ll i=1;i<=k;i++){
     for(auto move:v){
         if(move>i){
            continue;
         }
            if(dp[i-move]==0)
                dp[i]=1;
     }
  }
  if(dp[k]==0){
    cout<<"Second";
  }
  else
    cout<<"First";

}
int main(){
    fast
    ll T=1;
    //cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


