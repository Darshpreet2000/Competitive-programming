#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n,q;
       cin>>n>>q;
       ll a[n];
       for(ll i=0;i<n;i++){
          cin>>a[i];
       }
       ll tempmin=0,peak=0;
       ll ans=0;
       ll cur=a[0];
       bool ismax=true;
       for(ll i=1;i<n;i++){
        if(ismax){
           if(a[i]>a[i-1]){
              cur=a[i];
           }
           else{
                ans+=a[i-1];
                cur=a[i];
                ismax=false;
           }
         }
         else{
            if(a[i]<a[i-1]){
                cur=a[i];
            }
            else{
                ans-=a[i-1];
                cur=a[i];
                ismax=true;
            }
         }
       }
        if(ismax)
            ans+=cur;
       cout<<ans<<"\n";
    }
return 0;
}
