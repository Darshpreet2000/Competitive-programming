#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(ll t){
 ll n,k,s;
 cin>>n>>k>>s;
// recur(n,k,s,k-1);
   ll time=k-1;
   //1st option restart
   // 1 min to restart +
   ll restart=time+1+n;
   // previous
   ll previous=time+(k-s)+(n-s+1);
  cout<<"Case #"<<t<<": "<<min(restart,previous)<<"\n";
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


