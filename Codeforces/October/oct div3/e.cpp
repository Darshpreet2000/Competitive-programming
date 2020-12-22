#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll fact(ll n,ll r){

    if(r==0||r==n)
        return 1;

  return fact(n-1,r-1)+fact(n-1,r);
}
ll fac(ll n){
   if(n==1||n==0)
    return 1;
   return n*fac(n-1);
}
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
      ll n;
      cin>>n;
      ll ans=fact(n,n/2)*fac(n/2-1)*fac(n/2-1);
      cout<<ans/2<<"\n";
    }
return 0;
}
