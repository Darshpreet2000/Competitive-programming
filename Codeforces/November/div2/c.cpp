#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
bool canPlaceOrder(vector<ll> a,vector<ll> b,ll t){
             vector<ll> indexes;
             for(ll i=1;i<a.size();i++){
                 if(a[i]<=t){
                    continue;
                 }
                 else{
                    indexes.push_back(i);
                 }
             }
             ll cost=0;

            for(auto i:indexes){
                cost+=b[i];

                if(cost>t)
                    return false;
            }

    return true;
}
void Solve(){

      ll n;
      cin>>n;
      vector<ll> a(n+1),b(n+1);
      ll sum_b=0;
      ll max_a=0;
      ll min_a=inf;
      for(ll i=1;i<=n;i++){
        cin>>a[i];
        max_a=max(max_a,a[i]);
        min_a=min(min_a,a[i]);
      }

      for(ll i=1;i<=n;i++){
        cin>>b[i];
         sum_b+=b[i];
      }
      //do binary search
      ll mx=max_a;

      ll mn=min(min_a,sum_b);

      ll beg=mn,end=mx;
      ll ans=inf;
      while(beg<=end){
         ll mid=(beg+end)/2;
         bool check =canPlaceOrder(a,b,mid);
         if(check){
            ans=min(ans,mid);
            end=mid-1;
         }
         else
            beg=mid+1;
      }
      cout<<ans<<"\n";
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

