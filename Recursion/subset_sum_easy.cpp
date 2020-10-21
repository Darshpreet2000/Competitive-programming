#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool subset(ll a[],ll i,ll n, vector<ll> v,ll sum){
      if(sum==0&&v.size()>=1){
        return true;
      }
      if(i==n)
        return false;

      // include
      v.push_back(a[i]);
    bool val = subset(a,i+1,n,v,sum+a[i]);
      v.pop_back();
      if(val)
        return val;
    bool val2 = subset(a,i+1,n,v,sum);

      return (val or val2);
}
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n;
       cin>>n;
       ll a[n];
       for(ll i=0;i<n;i++)
            cin>>a[i];

       vector<ll> v;

       if(subset(a,0,n,v,0))
        cout<<"Yes"<<"\n";
       else
        cout<<"No"<<"\n";
    }
return 0;
}
