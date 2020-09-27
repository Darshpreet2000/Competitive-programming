#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll power(ll a,ll n){
     if(n==0)
      return 1;
    return a*power(a,n-1);
}
ll fast_power(ll a, ll n){
 // a(a^n/2)^2
   if(n==0)
    return 1;
    if(n==1)
        return a;
    if(n%2!=0){
     ll ans= a*fast_power(a,(n-1)/2);
        return ans*ans;
    }
   else{
     ll ans= fast_power(a,(n)/2);
        return ans*ans;
   }

}
int main(){

  ll a,n;
  cin>>a>>n;
  cout<<fast_power(a,n);

return 0;
}
