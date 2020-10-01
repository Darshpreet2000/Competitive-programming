#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n;

    cin>>n;
    ll a[n+1];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    map<ll,vector<ll>> m;
    ll sum=0;
    ll ans=0;
    m[0].push_back(-1);
    for(ll i=0;i<n;i++){
       sum+=a[i];
        if(m.count(sum)>=1){
        for(ll k=0;k<m[sum].size();k++){
         cout<<"Subarray is "<<m[sum][k]<<" "<<i<<"\n";
        }
      }
        m[sum].push_back(i);

    }
return 0;
}
