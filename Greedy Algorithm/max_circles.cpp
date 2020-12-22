#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
       ll n;
       cin>>n;
       ll a,c;
       vector<pair<ll,ll>> v;
       for(ll i=0;i<n;i++){
          cin>>a>>c;
          v.push_back({a+c,a-c});
       }
       sort(v.begin(),v.end());
       int curr=v[0].first;
    int done=1;
    for(int i=1;i<n;++i){

        if(v[i].second>=curr){

            done++;

            curr=v[i].first;

        }

    }

    cout<<n-done<<endl;
    }
return 0;
}
