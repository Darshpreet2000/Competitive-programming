#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
   ll n;
   cin>>n;
   ll a[n+1];
   ll b[n+1]={0};
   for(ll i=1;i<=n;i++){
     cin>>a[i];
     b[a[i]]++;
   }
    ll num=99999999;

   for(ll i=1;i<=n;i++){
     if(b[i]==1&&i<num){
         num=i;
     }
   }
   if(num==99999999){
    cout<<-1<<"\n";
   }
   else{
     for(ll i=1;i<=n;i++){
         if(a[i]==num){
            cout<<i<<"\n";
            break;
         }
     }
   }
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


