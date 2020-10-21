#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll findPos(ll n){
    ll indx=0;
    while(n!=0){
       n=n>>1;
       if(n!=0)
         indx++;
    }
    return pow(2,indx);
}
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
      ll n;
      cin>>n;
      ll a[n+1];
      int cur_xor=0;
      for(ll i=0;i<n;i++)
        cin>>a[i];
      for(ll i=0;i<n-1;i++){
        for(ll j=i+1;j<n;j++){
            cout<<" xor val is "<<a[i]<<" "<<a[j]<<"\n";
            cur_xor=((a[i])^(a[j]));
            cout<<findPos(cur_xor)<<"\n";
        }
      }

    }
return 0;
}
