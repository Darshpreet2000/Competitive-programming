#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mx=1000000007;
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
      ll n,x,pos;
      cin>>n>>x>>pos;
      ll l,mid,r,lower,greater;
      l=0;
      r=n;
      mid=(l+r)/2;
      lower=x-1;
      greater=n-x;
      ll ans=1;
      while(l<r){

        mid=(l+r)/2;
        if(mid==pos){
               break;
        }
        else if(mid>pos){
           ans*=(greater)%mx;
           greater--;
          r=mid;
        }
        else if(mid<pos){
           ans*=(lower)%mx;
           lower--;
           l=mid+1;
        }

      }
       lower+=greater;
        while(lower>0){
            ans*=(lower)%mx;
            ans=ans%mx;
            lower--;
        }

      cout<<ans<<"\n";
   }
return 0;
}
