#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
     ll a,b;
     cin>>a>>b;
     if(a==b){
        cout<<a+b<<"\n";
     }
     else{
      ll m=max(a,b);
        cout<<(m+m-1)<<"\n";
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


