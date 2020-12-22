#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll n,m;
   cin>>n>>m;
   ll a[n+2][m+2];
   for(ll i=0;i<n;i++)
     for(ll j=0;j<m;j++)
        cin>>a[i][j];
    ll dp1[n+2][m+2],dp2[n+2][m+2],dp3[n+2][m+2],dp4[n+2][m+2];
   ll i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            dp1[i][j]=a[i][j]+max(dp1[i-1][j],dp1[i][j-1]);
        }
    }
    for (int j = m; j >= 1; --j){
      for (int i = 1; i <= n; ++i){
            dp2[i][j] = a[i][j] + max(dp2[i - 1][j], dp2[i][j + 1]);
        }
    }
  for (int i = n; i >= 1; --i)
    for (int j = 1; j <= m; ++j)
        dp3[i][j] = a[i][j] + max(dp3[i + 1][j], dp3[i][j - 1]);
for (int i = n; i >= 1; --i)
    for (int j = m; j >= 1; --j)
        dp4[i][j] = a[i][j] + max(dp4[i][j + 1], dp4[i + 1][j]);

return 0;
}
