#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
  ll n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  ll cont=k+1;
   vector<ll> m,f,c;
   ll ans=0;
   ll prev=0;
  for(ll i=0;i<s.length();i++){
     if(s[i]=='X'){
        m.clear();
        f.clear();
        prev=0;
     }
     else if(s[i]=='I'){
        f.push_back(i);
     }
     else if(s[i]=='M'){
        m.push_back(i);
     }
     if(s[i]==':'){
        prev++;
       c.push_back(prev);
     }
     else
        c.push_back(prev);
     if(f.size()>0&&m.size()>0){
            ll power=cont;
            if(s[i]=='M'){
                    vector<ll> removei;
                for(ll j=0;j<f.size();j++){
                        power=cont;
                 power-=abs(i-f[j]);
                 power=power-(c[i]-c[f[j]]);
                 if(power>0){
                    ans++;
                    f.erase(f.begin()+j);

                    m.erase(m.begin()+m.size()-1);
                    break;
                 }
                }

            }
            else if(s[i]=='I')
            for(ll j=0;j<m.size();j++){
                    power=cont;
             power-=abs(i-m[j]);
             power=power-(c[i]-c[m[j]]);
             if(power>0){
                ans++;

                f.erase(f.begin()+f.size()-1);

                m.erase(m.begin()+j);
                break;
             }
            }
     }
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


