#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
    ll n;
    cin>>n;
    unordered_map<ll,ll> a;
    bool ispossible=false;
    for(ll i=1;i<=n;i++){
        ll inp;
        cin>>inp;
        if(a[inp]==0)
            a[inp]++;
        else if(a[inp]>=1){
            ispossible=true;
        }
    }
    if(ispossible){
        cout<<"YES"<<"\n";
    }
    else
        cout<<"NO"<<"\n";
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


