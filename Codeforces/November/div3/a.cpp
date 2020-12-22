#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
  ll n;
  cin>>n;
  if(n<=2){
    for(ll i=n;i>=1;i--)
      cout<<i<<" ";
  }
  else if(n%2==0){
    for(ll i=n;i>=1;i--){
     if(i==n/2){
        cout<<(n/2-1);
     }
    else if(i==(n/2-1)){
      cout<<n/2;
     }
     else
      cout<<i;
      cout<<" ";
    }
  }
  else{
     for(ll i=n;i>=1;i--){
     if(i==(n/2+1)){
        cout<<(n/2);
     }
    else if(i==(n/2)){
      cout<<(n/2+1);
     }
     else
      cout<<i;

      cout<<" ";
    }

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


