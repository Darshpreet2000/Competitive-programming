#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
        ll n;
       cin>>n;
        ll a[n+1];
       for(ll i=0;i<n;i++)
        cin>>a[i];
       ll l[n+1],r[n+1];
       l[0]=a[0];
       r[n-1]=a[n-1];
       for(ll i=1;i<n;i++){
        l[i]=min(a[i],l[i-1]+1);
       }
       for(ll i=n-2;i>=0;i--){
        r[i]=min(a[i],r[i+1]+1);
       }
       for(ll i=0;i<n;i++){
        cout<<min(l[i],r[i])<<" ";
       }
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


