#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
   ll n;
   cin>>n;
   ll a[n+1];
   ll f[n+1]={0};
   memset(f,0,sizeof f);
   for(ll i=1;i<=n;i++){
      cin>>a[i];
      f[a[i]]++;
   }
   ll minf=99999999;

   ll num=99999999;
   for(ll i=1;i<=n;i++){
       if(f[i]>=1&&f[i]<minf){
        minf=f[i];
        num=i;
      }
   }
   ll count=0;
   ll prev=1;
   for(ll i=1;i<=n;i++){
       if(a[i]==num){
          if(abs(prev-i)>=1){
            if(abs(prev-i)==1&&a[prev]==num){

            }
            else
            count++;
          }
          prev=i;
       }
   }
   if(abs(prev-n)>=1){
      if(abs(prev-n)==1&&a[prev]==num){

      }
      else
        count++;
   }

   ll maxf=0;

   num=0;
   for(ll i=1;i<=n;i++){
       if(f[i]>=1&&f[i]>maxf){
        maxf=f[i];
        num=i;
      }
   }
   ll countm=0;
prev=1;
   for(ll i=1;i<=n;i++){
       if(a[i]==num){
          if(abs(prev-i)>=1){
            if(abs(prev-i)==1&&a[prev]==num){

            }
            else{
            countm++;
            }
          }
          prev=i;
       }
   }
   if(abs(prev-n)>=1){
      if(abs(prev-n)==1&&prev==num){

      }
      else
        countm++;
   }


   cout<<min(count,countm)<<"\n";
}
int main(){
    fast
    ll T;
    cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


