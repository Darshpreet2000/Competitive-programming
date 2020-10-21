#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n,m;
       cin>>n>>m;
       ll a[n+1][m+1];
       for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                cin>>a[i][j];
            }
       }
       ll cost=0;
       for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){

                 ll costc=abs(a[i][m-j+1]-a[i][j])+abs(a[n-i+1][j]-a[i][j]);
                 ll costd=abs(a[i][m-j+1]-a[n-i+1][j])+abs(a[n-i+1][j]-a[i][j]);
                 ll costr=abs(a[i][m-j+1]-a[n-i+1][j])+abs(a[i][m-j+1]-a[i][j]);

                if(costc<=costd&&costc<=costr){
                 cost+=costc;
                 a[i][m-j+1]=a[i][j];

                 a[n-i+1][j]=a[i][j];
                }
                else if(costd<=costc&&costd<=costr){
                 cost+=costd;

                 a[i][j]=a[n-i+1][j];

                 a[i][m-j+1]=a[n-i+1][j];

                 }
                 else{
                   cost+=costr;

                 a[i][j]=a[i][m-j+1];

                 a[n-i+1][j]=a[i][m-j+1];
               }
            }
       }
       cout<<cost<<"\n";

    }
return 0;
}
