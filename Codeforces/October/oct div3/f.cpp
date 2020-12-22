#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T=1;
 //   cin>>T;
    while(T--){
      ll n,m,k;
      cin>>n>>m>>k;
      ll dp[n+1][m+1][n*m+1][k+1]={0};
      ll a[n+1][m+1];
      for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>a[i][j];
        }
      }
      ll cnt=0,remaind=0;
         for(ll i=1;i<=n;i++){
            for(ll j=1;j<m;j++){
                dp[i][j][cnt][remaind]=max(dp[i][j][cnt][remaind],dp[i][j-1][cnt][remaind]);


                dp[i][j][cnt+1][(remaind+a[i][j])%k]=max(dp[i][j][cnt][remaind],dp[i][j-1][cnt][remaind]);
            }
         }
    }
return 0;
}
