#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){

  ll n;
  cin>>n;
  ll a[n+1];
  for(ll i=1;i<=n;i++){
    cin>>a[i];
  }
  sort(a+1,a+n+1);
  if(n==1){
    cout<<a[1];
  }
  else if(n==2){
    cout<<max(a[1],a[2]);
  }
  else if(n==3){
    ll o1=max(a[1]+a[2],a[3]);
    ll o2=max(a[1],a[2]+a[3]);
    cout<<min(o1,o2);

  }
  else if(n==4){
        ll b[n]={0};
        b[0]=max(a[1],a[2]+a[3]+a[4]);
        b[1]=max(a[1]+a[2]+a[3],a[4]);
        b[2]=max(a[1]+a[2],a[3]+a[4]);
        b[3]=max(a[2]+a[3],a[1]+a[4]);
        b[4]=max(a[1]+a[3],a[2]+a[4]);
      sort(b,b+n);
      cout<<b[0];
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


