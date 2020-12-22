#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[201][405]={0};
ll a[202];
ll solve(ll indx,ll n,ll t){
     if(indx==n)
        return 0;
     if(t==2*n+1)
        return INT_MAX;
      if(dp[indx][t]!=0)
            return dp[indx][t];
     ll ans=INT_MAX;
     ans=min(ans,abs(a[indx]-t)+solve(indx+1,n,t+1));

     ans=min(ans,solve(indx,n,t+1));
     return dp[indx][t]=ans;
}
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n;
       memset(dp, 0, sizeof dp);
       cin>>n;
       for(ll i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a,a+n);
       cout<<solve(0,n,1)<<"\n";
    }
return 0;
}
