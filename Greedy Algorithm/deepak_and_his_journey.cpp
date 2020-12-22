#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
            ll n,m;
    cin>>n;
    m=n;
      vector<ll> c,l;
      for(ll i=0;i<n;i++){
        ll inp;
        cin>>inp;
        c.push_back(inp);
      }
      for(ll i=0;i<m;i++){
        ll inp;
        cin>>inp;
        l.push_back(inp);
      }
      ll min_cost=c[0];
      ll total=c[0]*l[0];
      for(ll i=1;i<n;i++){
        if(min_cost>c[i]){
                min_cost=c[i];
            total+=min_cost*l[i];
        }
        else{

            total+=min_cost*l[i];
        }
      }
        cout<<total<<"\n";
    }
return 0;
}
