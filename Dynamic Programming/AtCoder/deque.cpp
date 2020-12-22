#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
ll dp[3001][3001]={0};
ll recur(ll i,ll j,vector<ll> &v){
    if(i>j)
        return 0;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    ll t=(i-1)+(v.size()-1-j);
    if(t%2==0)
    return dp[i][j]=max(v[i]+recur(i+1,j,v),v[j]+recur(i,j-1,v));
    else
    return dp[i][j]=min(recur(i+1,j,v),recur(i,j-1,v));

}
void Solve(){
    ll n;
    cin>>n;
    ll s=0;
    vector<ll> v(n+1);
    for(ll i=1;i<=n;i++){
     cin>>v[i];
       s+=v[i];
    }
    memset(dp,-1,sizeof dp);
    ll x=recur(1,n,v);
    ll y=s-x;
    cout<<(x-y);

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


