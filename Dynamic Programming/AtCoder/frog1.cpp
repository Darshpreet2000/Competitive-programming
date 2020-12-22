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

    ll n;
    cin>>n;
    ll dp[n+2]={0};
    ll a[n+1];
    for(ll i=1;i<=n;i++)
        cin>>a[i];
        dp[1]=0;
        dp[2]=abs(a[2]-a[1]);
    for(ll i=3;i<=n;i++){

        dp[i]=min((abs(a[i]-a[i-1])+dp[i-1]),(abs(a[i]-a[i-2])+dp[i-2]));
    }
    cout<<dp[n]<<"\n";
  // cout<<cost(n,a,dp)<<"\n";
return 0;
}
