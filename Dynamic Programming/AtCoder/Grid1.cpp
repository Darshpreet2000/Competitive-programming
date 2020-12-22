#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
#define mod 1000000007
void Solve(){
   ll n,m;
   cin>>n>>m;
   char s[n][m];
   for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin>>s[i][j];
     }
   }
    ll a[n][m];
    for(ll i=0;i<n;i++){
            if(s[i][0]!='#')
             a[i][0]=1;
            else{
                a[i][0]=0;
               for(;i<n;i++)
                    a[i][0]=0;
                break;
            }
   }
    for(ll i=0;i<m;i++){
            if(s[0][i]!='#')
             a[0][i]=1;
            else{
                a[0][i]=0;
                for(;i<m;i++)
                    a[0][i]=0;
                break;
            }
   }
   for(ll i=1;i<n;i++){
    for(ll j=1;j<m;j++){
        if(s[i][j]!='#'){
            if(a[i-1][j]!=0&&a[i][j-1]!=0){
               a[i][j]=(a[i-1][j]+a[i][j-1])%mod;
            }
            else if(a[i-1][j]==0){
               a[i][j]=a[i][j-1];
            }
            else{
               a[i][j]=a[i-1][j];
            }
        }
        else{
            a[i][j]=0;
        }
     }
   }
   cout<<a[n-1][m-1]%mod<<"\n";


}
int main(){
    fast
    ll T=1;
   // cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


