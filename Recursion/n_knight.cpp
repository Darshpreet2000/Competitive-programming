#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool canPlaceKnights(ll n,ll a[100][100],ll i,ll j){
       ll k=1,l=-2;
       ll cnt=0;
       for(cnt=0;cnt<=1;cnt++){
           if(i+k>=0&&i+k<n&&j+l>=0&&j+l<n){
               if(a[i+k][j+l]==1)
                return false;
           }
           l=2;
       }
       k=2,l=-1;
       cnt=0;
       for(cnt=0;cnt<=1;cnt++){
           if(i+k>=0&&i+k<n&&j+l>=0&&j+l<n){
               if(a[i+k][j+l]==1)
                return false;
           }
           l=1;
       }
       k=-2,l=-1;
       cnt=0;
       for(cnt=0;cnt<=1;cnt++){
           if(i+k>=0&&i+k<n&&j+l>=0&&j+l<n){
               if(a[i+k][j+l]==1)
                return false;
           }
           l=1;
       }
       k=-1,l=-2;
       cnt=0;
       for(cnt=0;cnt<=1;cnt++){
           if(i+k>=0&&i+k<n&&j+l>=0&&j+l<n){
               if(a[i+k][j+l]==1)
                return false;
           }
           l=2;
       }

 return true;
}
ll nknight(ll n,ll a[100][100],ll i,ll j,ll knights){
   //base case
   if(knights==0){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                if(a[i][j]==1)
                cout<<"{"<<i<<"-"<<j<<"}"<<" ";

        }
    return 1;
   }
   if(i>=n||j>=n){
    return 0;
   }
    // recursive case
  ll count=0;
  //cout<<i<<" "<<j<<" "<<canPlaceKnights(n,a,i,j)<<"\n";
   if(a[i][j]==0&&canPlaceKnights(n,a,i,j)){
        if(j+1<n){
         a[i][j]=1;
         count+=nknight(n,a,i,j+1,knights-1);
         a[i][j]=0;

        }
        else{
         a[i][j]=1;
         count+=nknight(n,a,i+1,0,knights-1);
            a[i][j]=0;

        }
   }

        if(j+1<n){

         count+=nknight(n,a,i,j+1,knights);

        }
        else{
         count+=nknight(n,a,i+1,0,knights);

        }

   return count;
}
int main(){

    ll T=1;
    while(T--){
            int n;
       cin>>n;
       ll a[100][100];
       memset(a,0,sizeof(a));
      ll num= nknight(n,a,0,0,n);
       cout<<"\n"<<num;
    }
return 0;
}
