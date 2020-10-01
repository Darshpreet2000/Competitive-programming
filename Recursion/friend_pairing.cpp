#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll count(ll n){
  if(n==1||n==0)
    return 1;

   return count(n-1)+count(n-2)*(n-1);
}
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n;
       cin>>n;
       cout<<count(n)<<"\n";
    }
return 0;
}
