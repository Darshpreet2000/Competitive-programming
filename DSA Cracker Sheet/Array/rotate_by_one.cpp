#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
   ll n;
   cin>>n;
   ll a[n+1];
   for(ll i=1;i<=n;i++){
      cin>>a[i];
   }
   ll copy=a[n];
   for(ll i=n;i>1;i--){
     a[i]=a[i-1];
   }
   a[1]=copy;
   for(ll i=1;i<=n;i++)
    cout<<a[i]<<" ";
   cout<<"\n";

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


