#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> sieve(ll b){
vector<ll>  v;
v.push_back(b);
         for(ll i=2;i*i<=b;i++){
                if(b%i==0){
                  v.push_back(i);
                    if(i!=(b/i))
                  v.push_back(b/i);
                }
         }
         sort(v.begin(),v.end());
        return v;
}

ll findPrime(ll a,ll b){
      if(a%b!=0){
        return a;
      }
       vector<ll> v;
       v=sieve(b);
       ll c_a=a;
            ll ans=1;

        for(ll i=0;i<v.size();i++){
                a=c_a;
             while(a%v[i]==0){
                 a/=v[i];
                 if(a%b!=0){
                    ans=max(ans,a);
                    break;
                 }
             }
        }

      return ans;
}
void Solve(){
         ll a,b;

         cin>>a>>b;
         cout<<findPrime(a,b)<<"\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T;
    cin>>T;
    while(T--){
      Solve();
    }
return 0;
}

