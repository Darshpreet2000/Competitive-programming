#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){

    ll n,a,c,C;
    cin>>n>>C;
    ll sum=0;
    vector<ll> v(n+1),w(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a>>c;
        sum+=c;
        w[i]=a;
        v[i]=c;
    }
      ll dp[n+1][sum+1]={0};

     for(ll j=0;j<=sum;j++){
    dp[1][j]=9999999999;
     }

   dp[1][0]=0;
   dp[1][v[1]]=w[1];
   // cout<<recur(n,C,0,v,w,dp);
   for(ll i=2;i<=n;i++){
      for(ll j=0;j<=sum;j++){
           dp[i][j]=dp[i-1][j];
        if(v[i]<=j){

             dp[i][j]=min(w[i]+dp[i-1][j-v[i]],dp[i][j]);
        }
      }
   }
   ll ans=0;
   for(ll i=0;i<=sum;i++)
    if(dp[n][i]<=C)
        ans=i;

   cout<<ans;
return 0;
}
