#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18


void Solve(){
  ll n,q,s;
  cin>>n>>q>>s;
  vector<ll> v(n+1);
  for(ll i=1;i<=n;i++)
    cin>>v[i];
  ll last=0;
  ll L,R,x,y;
  ll max_so_far=0;
  ll count=0;
  while(q--){
    cin>>x>>y;
    L=(x+s*last-1)%n+1;
    R=(y+s*last-1)%n+1;
    vector<ll> s(v.size(), 0);
    if(L>R)
        swap(L,R);
    ll counter = 1;
    s[0] = v[L];
    for (ll i = L; i <=R; i++) {
        auto b = s.begin();
        auto e = s.begin() + counter;
        auto iterators = lower_bound(b, e, v[i]);
        if (iterators == s.begin() + counter)
            s[counter++] = v[i];
        else if(iterators != s.begin() + counter)
             *iterators = v[i];
    }
    if(v[L]==0&&v[R]==0&&counter==1)
     counter=0;
    cout<<counter<<"\n";
    last=counter;
  }
}
int main(){
    fast
    ll T=1;
   // cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


