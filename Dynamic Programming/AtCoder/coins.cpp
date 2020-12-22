#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18

double dp[3001][3001];
double findp(ll i,ll x,vector<double> &v){

      if(x==0)
        return 1;
        if(i==0)
        return 0;
      if(dp[i][x]>-0.9)
        return dp[i][x];
     return dp[i][x]=v[i]*findp(i-1,x-1,v)+(1-v[i])*findp(i-1,x,v);
}
void Solve(){
      ll n;
      cin>>n;
      vector<double> v(n+1);
      for(ll i=0;i<=n;i++){

        for(ll j=0;j<=n;j++){
            dp[i][j]=-1;
         }

      }
      ll inp;
      for(ll i=1;i<=n;i++){
        cin>>v[i];
      }
      cout<<setprecision(10)<<findp(n,(n+1)/2,v)<<"\n";

}
int main(){
    fast
    ll T=1;
    //cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


