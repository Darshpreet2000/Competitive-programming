#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll getBITS(ll n){
    ll cnt=0;
    ll bits=0;
    while(n!=0){
        ll mod=(n%2);
        n/=2;
        bits++;
        if(mod==1)
            cnt=bits;
    }

    return cnt;
}
int main(){
    ll T;
    cin>>T;
    while(T--){
    ll n;
    cin>>n;

    ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        map<ll,ll> m;
      // now find the MSB of each element
       for(ll i=0;i<n;i++){
          if(m.find(getBITS(a[i]))==m.end()){
            m.insert(make_pair(getBITS(a[i]),1));
          }
          else{
           auto it=m.find(getBITS(a[i]));

           ll num=it->second;
           it->second=num+1;
          }
       }
       ll ans=0;
       for(auto var:m){
         if(var.second>=2){
            ll num=var.second;
            ans+=(num)*(num-1)/2;
         }
       }
       cout<<ans<<"\n";
    }
return 0;
}
