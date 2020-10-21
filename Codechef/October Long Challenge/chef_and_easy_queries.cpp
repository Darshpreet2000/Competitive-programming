#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll ans=999999999,today,day=1,queriesLeft=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            a[i]+=queriesLeft;
            queriesLeft=0;
            if(a[i]-k>=0){
                    a[i]-=k;
                queriesLeft=a[i];
            }
            else{
                if(ans==999999999){
                    ans=a[i];
                     day=i+1;
                }
            }
        }
        if(queriesLeft>0){
              ll mod=queriesLeft%k;
          // I will have mod queries on the day+1 check if mod is 0
          if(ans<k){

          }
          else{
            day=queriesLeft/k+n+1;
          }
        }

        cout<<day<<"\n";

    }
return 0;
}
