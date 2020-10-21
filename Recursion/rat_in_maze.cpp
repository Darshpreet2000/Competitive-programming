#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int b[1002][1002]={0};
bool path(char a[1002][1002],ll n,ll m,ll i,ll j){
   if(i==n-1&&j==m-1){
               b[i][j]=1;

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<"\n";
        }
        exit(0);
     return true;
   }
     if(i>=n||j>=m)
        return false;
     if(a[i][j]=='X')
        return false;

       b[i][j]=1;

   bool up=  path(a,n,m,i,j+1);

   bool down=  path(a,n,m,i+1,j);

       b[i][j]=0;

     return (up||down);
}
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
       ll n,m;
       cin>>n>>m;
       char a[1002][1002];
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
       }
       if(!path(a,n,m,0,0)){
        cout<<-1;
       }
    }
return 0;
}
