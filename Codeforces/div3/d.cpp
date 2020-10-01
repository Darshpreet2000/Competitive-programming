#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n;

    cin>>n;
    ll a[n+1];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    map<ll,ll> m;
    ll sum=0;
    ll ans=0;
    m[0]=1;
    for(ll i=0;i<n;i++){
       sum+=a[i];

        if(m.count(sum)>=1){
            ans++;
            m.clear();
            sum=a[i];
            m[0]=1;
      }
        m[sum]+=1;

    }
    cout<<ans<<"\n";
return 0;
}
