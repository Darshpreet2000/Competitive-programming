#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n,m;
       cin>>n>>m;
       ll a[n];
       ll sum=0;
       for(ll i=0;i<n;i++){
         cin>>a[i];
         sum+=a[i];
       }
       if(sum!=m){
        cout<<"NO"<<"\n";
       }
       else
        cout<<"YES"<<"\n";
    }
return 0;
}
