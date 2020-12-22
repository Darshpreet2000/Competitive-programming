#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
ll mod=1000000007;
void Solve(){
  ll n,k;
  cin>>n;
  ll a[n+1];
  for(ll i=1;i<=n;i++) cin>>a[i];
  cin>>k;
  ll b[k+1]={0};
  b[0]=1;
  for(ll i=1;i<=n;i++)  {
    for(ll j=1;j<=k;j++){
        if(a[i]<=j){
           if(b[j-a[i]]!=0){
             if((j-a[i])==0){
                b[j]+=1;
                b[j]=b[j]%mod;
             }
             else
              b[j]+=(b[j-a[i]])%mod;
                b[j]=b[j]%mod;

           }
        }
    }

  }

  cout<<b[k]<<"\n";
  return;
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


