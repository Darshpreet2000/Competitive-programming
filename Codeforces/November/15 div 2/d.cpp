#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
      ll n,m;
      cin>>n>>m;
      string a,b;
      cin>>a>>b;
      ll dp[n+1][m+1];
      ll ans=INT_MIN;
      memset(dp,0,sizeof dp);
      for(ll i=1;i<=n;i++){
         for(ll j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=max(dp[i-1][j-1]+2,dp[i][j]);
            }
            else{
                dp[i][j]=max(dp[i][j],max(dp[i-1][j]-1,dp[i][j-1]-1));
            }
           ans=max(ans,dp[i][j]);
         }
      }
      cout<<ans<<"\n";
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


