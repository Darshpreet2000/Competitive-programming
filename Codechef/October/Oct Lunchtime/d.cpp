#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> v;
void subs(ll n,ll a[],ll i,ll ans){
      if(i==n){
          v.push_back(ans);
        return;
      }
      subs(n,a,i+1,ans+a[i]);

      subs(n,a,i+1,ans);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T;
    cin>>T;
    while(T--){
       ll n;
       v.clear();
       cin>>n;
       ll a[n+1];
       ll sum=0;
       ll newtotal=0;
       for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        newtotal|=a[i];

        newtotal|=sum;
       }


       cout<<newtotal<<"\n";
    }
return 0;
}

