#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n;
       cin>>n;
       ll a[n+1];
       ll sum=0;
       ll count=0;
       for(ll i=1;i<=n;i++){
         cin>>a[i];
         if(a[i]>0){
            count++;
            sum+=a[i];
         }
       }
       vector<ll> seq;
       for(ll i=1;i<=n;i++){
          if(i<=count&&a[i]<0){
            seq.push_back(i);
          }
          else if(i>count&&a[i]>0){
            seq.push_back(i);
          }
       }
       cout<<sum<<"\n";
       cout<<seq.size()<<" ";
       for(ll i=0;i<seq.size();i++){
          cout<<seq[i]<<" ";
       }
       cout<<"\n";
    }

return 0;
}
