#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
    ll n,W;
    cin>>n>>W;
    vector<ll> v;
    ll inp;
    ll sum=0;
    bool flag=false;
    ll a[200001];
    for(ll i=0;i<n;i++){
       cin>>a[i];
    }

    for(ll i=0;i<n;i++){
        inp=a[i];
        if(inp<=W){
          if(inp*2>=W){
            flag=true;
           ll ans=i+1;
            cout<<1<<"\n";
            cout<<ans<<"\n";
            break;
          }
          else {
             sum+=inp;
             v.push_back(i+1);
             if(sum*2>=W)
                break;
          }
       }
    }


    if(flag==false){
            if(sum*2<W){
              cout<<-1<<"\n";
            }
            else{
            cout<<v.size()<<"\n";
            for(ll i=0;i<v.size();i++){
                    cout<<v[i]<<" ";
            }
          }
    }

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


