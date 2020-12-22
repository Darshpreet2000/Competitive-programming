#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
/*
ll recur(ll prev,ll r, ll a[][3]){
        if(r==n)
            return 0;
            if(dp[r][prev]!=0)
                return dp[r][prev];
     ll ans=0;
     for(ll j=0;j<3;j++){
        if(j!=prev){
           ans=max(ans,recur(j,r+1,a)+a[r][j]) ;
        }
     }
     return dp[r][prev]=ans;

}
*/
int main(){

    cin>>n;
    ll a[n+1][3];
    ll dp[n+1][3];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
  //  cout<<recur(-1,0,a);
   dp[0][0]=a[0][0];
   dp[0][1]=a[0][1];
   dp[0][2]=a[0][2];
   for(ll i=1;i<n;i++){
      dp[i][0]=a[i][0]+max(dp[i-1][1],dp[i-1][2]);

      dp[i][1]=a[i][1]+max(dp[i-1][0],dp[i-1][2]);

      dp[i][2]=a[i][2]+max(dp[i-1][0],dp[i-1][1]);
   }
   cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]))<<"\n";
return 0;
}
