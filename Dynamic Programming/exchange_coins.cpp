#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
#define MAX 100000
ll f(ll n,ll dp[]){
    if(n<=11)
    return n;
     if(n<MAX&&dp[n]!=0)
        return dp[n];
        ll op1=f(n/2,dp)+f(n/3,dp)+f(n/4,dp);
  if(n<MAX)
        return dp[n]=max(n,op1);
    else
        return max(n,op1);
}
void Solve(){
    ll n;
    cin>>n;
    ll dp[MAX]={0};
    cout<<f(n,dp);
}
int main(){
    fast
    ll T=1;
  //  cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


