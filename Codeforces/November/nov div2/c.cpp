#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18

void Solve(){
     ll n,m;
     cin>>n>>m;
     vector<vector<ll>> a(n+2, vector<ll> (m+2, 0));
     for(ll i=1;i<=n;i++){
         for(ll j=1;j<=m;j++){
            cin>>a[i][j];
         }
     }
     for(ll i=1;i<=n;i++){
         for(ll j=1;j<=m;j++){
             // check if it causes any problem
              ll e=a[i][j];
              ll top=a[i-1][j];
              ll bottom=a[i+1][j];
              ll right=a[i][j+1];
              ll left=a[i][j-1];
               if(e==top||e==left||e==right||e==bottom){
                  if((e+1)!=top&&(e+1)!=left){
                     a[i][j]++;
                  }
               }
            //check before incrementing if it may cause any problem to top or left

         }
     }
     for(ll i=1;i<=n;i++){
         for(ll j=1;j<=m;j++){
             // check if it causes any problem


                 cout<<a[i][j]<<" ";

            //check before incrementing if it may cause any problem to top or left

         }
         cout<<"\n";
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


