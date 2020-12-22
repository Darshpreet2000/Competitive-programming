#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){

   string a,b;
   cin>>a>>b;
   ll n=a.length(),m=b.length();
   bool dp[n+1][m+1]={0};
   dp[0][0]=1;
   for(ll i=1;i<=m;i++){
        if(b[i-1]=='*'&&dp[0][i-1]){
          dp[0][i]=true;
        }
   }

   for(ll i=1;i<=n;i++){
      for(ll j=1;j<=m;j++){
           // if equal
           if(a[i-1]==b[j-1]){
             dp[i][j]=dp[i-1][j-1];
           }
           else if(b[j-1]=='*'){
              dp[i][j]=(dp[i-1][j]||dp[i][j-1]);
           }
           else if(b[j-1]=='?'){
                dp[i][j]=dp[i-1][j-1];
           }
           else{
             dp[i][j]=0;
           }

      }
   }

  if(dp[n][m]){
    cout<<"MATCHED"<<"\n";
  }
  else{
     cout<<"NOT MATCHED"<<"\n";
  }
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


