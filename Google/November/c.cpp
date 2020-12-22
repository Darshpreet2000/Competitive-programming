#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
ll best(vector<ll> v){
      ll pos=v.size()/2;
      ll e=v[pos];
      ll sum=0;
      for(auto var:v){
        sum+=abs(var-e);
      }
      return sum;
}
void Solve(ll t){

      ll n;
      cin>>n;
      vector<ll> x,y;
      ll a,b;
      for(ll i=1;i<=n;i++){
        cin>>a>>b;
          x.push_back(a);

          y.push_back(b);
      }
      sort(y.begin(),y.end());
      ll costy=best(y);
      sort(x.begin(),x.end());
      for(ll i=0;i<n;i++){
          x[i]-=i;
      }
      sort(x.begin(),x.end());
      ll costx=best(x);
      cout<<"Case #"<<t<<": "<<(costx+costy)<<"\n";

}
int main(){
    fast
    ll count=0;
    ll T;
    cin>>T;
    while(T--){
      Solve(++count);
    }
return 0;
}

