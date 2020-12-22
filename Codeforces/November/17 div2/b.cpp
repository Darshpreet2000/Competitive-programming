#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
     ll n,k;
     cin>>n>>k;
     ll size=n*k;
     ll a[n*k+1];
     ll take=n/2;
     ll num=k;
     ll sum=0;
     ll selecting=1+n/2;
     ll next=size-selecting*k;
     for(ll i=0;i<size;i++){
        cin>>a[i];
        if(i==next){
            sum+=a[i];
            k--;
          next=size-selecting*k;
        }
     }
     cout<<sum<<"\n";
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


