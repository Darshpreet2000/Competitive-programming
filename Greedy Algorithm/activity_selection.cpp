#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T;
    cin>>T;
    while(T--){
       ll n;
       cin>>n;
       vector<pair<ll,ll>> v;
       ll a,c;
       for(ll i=0;i<n;i++){
          cin>>a>>c;
          v.push_back({c,a});
       }
       sort(v.begin(),v.end());
       // second gives start
       ll cur=v[0].first;
       ll ans=1;
       for(ll i=1;i<n;i++){
         if(cur<=v[i].second){
            ans++;
            cur=v[i].first;
         }
       }
       cout<<ans<<"\n";
    }

return 0;
}
