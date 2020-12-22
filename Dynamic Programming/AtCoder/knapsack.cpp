#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll recur(ll n,ll c,ll i,vector<ll> v,vector<ll> w,ll dp[][100002]){
            if(i==n)
                return 0;
                if(dp[i][c]!=0)
                    return dp[n][c];
            //take the current bag
            ll take=0,ignore=0;
            if(w[i]<=c)
            take=v[i]+recur(n,c-w[i],i+1,v,w,dp);
            // ignore current

            ignore=recur(n,c,i+1,v,w,dp);
            return dp[n][c]=max(ignore,take);
}
int main(){

    ll n,a,c,C;
    cin>>n>>C;
    vector<ll> v(n+1),w(n+1);
    ll dp[n+1][C+2]={0};
    for(ll i=1;i<=n;i++){
        cin>>a>>c;

        w[i]=a;
        v[i]=c;
    }
for(ll i=0;i<=n;i++){
     for(ll j=0;j<=C;j++){
    dp[i][j]=0;
     }
   }
   // cout<<recur(n,C,0,v,w,dp);
   for(ll i=1;i<=n;i++){
      for(ll j=1;j<=C;j++){
        if(j<w[i]){
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
        else{
            // take the current item
            ll value=v[i];
            //capacity left
            ll cap=j-w[i];
            dp[i][j]=max(value+dp[i-1][cap],dp[i-1][j]);
        }
      }
   }
   cout<<dp[n][C];
return 0;
}
