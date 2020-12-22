#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
//finding kth smallest element
//store in min heap
void Solve(){
       ll n;
       cin>>n;
       priority_queue <ll, vector<ll>, greater<ll> > pq;
       ll inp;
       for(ll i=0;i<n;i++){
          cin>>inp;
          pq.push(inp);
       }
       ll k;
       cin>>k;
       while(k!=1){
          k--;
          pq.pop();
       }
       cout<<pq.top();

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

