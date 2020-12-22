#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
      ll n;
      cin>>n;
      ll a[n];

      ll b[n];
      for(ll i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      for(ll i=0;i<n;i++){
           if(i>=n/2){
            b[i]=a[i];
           }
      }
      ll sum_max=0;
      for(ll i=0;i<n/2;i++){
          sum_max+=abs(a[i]-b[i+n/2]);
      }
      ll sum=0;
      for(ll i=0;i<n;i++){
            if(i%2==0)
       sum+=a[i];
      else
         sum=(sum-a[i]);
      }
      cout<<abs(sum)<<" "<<sum_max<<"\n";

    }
return 0;
}
