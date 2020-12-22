#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
ll recur(ll x,ll odd,ll even,ll player,vector<vector<ll>> &dp){
       //base case
       if(x==0){
           if(odd&1){
              return 0;
           }
           else
            return 1;
       }
       if(dp[odd][even]!=-1)
        return dp[odd][even];
       ll next=player^1;
       ll o1=-1,o2=-1;
       if(odd>0)
        o1=recur(x-1,odd-1,even,next,dp);
       if(even>0)
        o2=recur(x-1,odd,even-1,next,dp);
       if(o1==player||o2==player){
           return dp[odd][even]=player;
       }
       else{
         return dp[odd][even]=next;
       }
}
void Solve(){
    ll n,x;
    cin>>n>>x;
    ll s=0;
    vector<vector<ll>>dp(n+1, vector<ll>(n+1, -1));
    ll odd=0,even=0;
    ll inp;
    for(ll i=0;i<n;i++){
        cin>>inp;
        if(inp&1)
            odd++;
        else
            even++;
    }
    ll player=0;
    ll res=recur(x,odd,even,player,dp);
     if(res==0)
        cout<<"Walter\n";
     else
        cout<<"Jesse\n";
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


