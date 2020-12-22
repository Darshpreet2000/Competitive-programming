#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18

void Solve(){
     ll n,k;
     cin>>k>>n;
     int a[n+1];
     for(ll i=1;i<=n;i++){
        cin>>a[i];
     }
     int b[101][101]={0};
     for(ll i=1;i<=k;i++){
        for(ll j=i;j<=n;j++){
            ll fmax=0;
            for(ll m=j;m>=1;m--)
           fmax=max(fmax,b[i-1][m]+a[j]-a[m]);

          b[i][j]=max(b[i][j-1],fmax);
        }
     }
   cout<<b[k][n]<<"\n";
}
int main(){
    fast
    ll T;
    cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


