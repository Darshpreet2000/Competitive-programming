#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll cost(ll n,ll a[],ll dp[]){
    if(n==1){
        return 0;
    }
     if(n==0){
        return 999999;
     }
     if(dp[n]!=0)
        return dp[n];
    ll ans=min((abs(a[n]-a[n-1])+cost(n-1,a,dp)),(abs(a[n]-a[n-2])+cost(n-2,a,dp)));
   return dp[n]=ans;
}
int main(){

    ll n,k;
    cin>>n;
    cin>>k;
    ll dp[n+2];
    ll a[n+1];
    for(ll i=1;i<=n;i++)
        cin>>a[i];
        dp[1]=0;

    for(ll i=2;i<=n;i++){
       dp[i]=999999999;
       for(ll j=i-1;j>=1&&((j)>=i-k);j--){
          dp[i]=min((abs(a[i]-a[j])+dp[j]),dp[i]);
       }
    }
    cout<<dp[n]<<"\n";
return 0;
}
