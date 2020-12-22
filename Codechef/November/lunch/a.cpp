#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
   ll n;
   cin>>n;
   ll f[n+1],c[n+1];
   ll prefix[n+1]={0};
   prefix[0]=0;
   for(ll i=1;i<=n;i++){
     cin>>f[i];
     prefix[i]=0;
     prefix[i]+=prefix[i-1]+f[i];
   }
   for(ll i=1;i<=n;i++){
     cin>>c[i];
   }
   ll sum=0;
   ll min_coins_needed=99999999;
   for(ll i=1;i<=n;i++){
    //   ll left=prefix[i]-f[i];
     //  ll right=prefix[n]-prefix[i];
      // ll total=left+right;
       // we need n fuel
     //  cout<<" i is "<<i<<" left "<<left<<" "<<right<<"\n";
    //   ll needToBuy=n-total;
       ll needToBuy=n;
      // if((total)>=n)
       // needToBuy=1;
       if(f[i]>=needToBuy){
         ll cost=needToBuy*c[i];
         min_coins_needed=min(min_coins_needed,cost);
       }

   }
   cout<<min_coins_needed<<"\n";
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


