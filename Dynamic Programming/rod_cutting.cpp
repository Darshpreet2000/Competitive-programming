#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

ll n;
cin>>n;
    ll l[n+1],p[n+1];
    ll i;
    for(i=1;i<=n;i++){
        cin>>p[i];
    }
    ll dp[n+1]={0};
    for(ll len=1;len<=n;len++){
        ll ans=INT_MIN;
        for(i=1;i<=len;i++){
            ans=max(ans,dp[len-i]+p[i]);
        }
        dp[len]=ans;
    }
    cout<<dp[n]<<"\n";


return 0;
}
