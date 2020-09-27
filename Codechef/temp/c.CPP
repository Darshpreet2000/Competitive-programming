#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
      ll n;
      cin>>n;
      vector<ll> v;
      while(n!=0){
        ll num=n%2;
        n/=2;
        v.push_back(num);
      }
      for(ll i=v.size()-1;i>=0;i--){
        cout<<v[i];
      }
      cout<<"\n";
    }
return 0;
}
