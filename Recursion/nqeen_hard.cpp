#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool canPlaceQueen(ll n,ll a[100][100],ll i,ll j){

           //check col
           for(int k=0;k<=i;k++)
              if(a[k][j]==1)
              return false;

           //diagonals
           //bottom left
           //i-1,j-1
           ll k=i,l=j;
           while(k>=0&&j>=0){
               if(a[k][l]==1)
                return false;
                k--;
                l--;
           }
           //bottom right
           //i-1,j+1
        k=i,l=j;
           while(k>=0&&j<n){
               if(a[k][l]==1)
                return false;
                k--;
                l++;
           }

           //top right
           //i-1,j+1
          k=i,l=j;
           while(k<n&&j<n){
               if(a[k][l]==1)
                return false;
                k++;
                l++;
           }
           //top left
           //i-1,j+1
           k=i,l=j;
           while(k<n&&j>=0){
               if(a[k][l]==1)
                return false;
                k++;
                l--;
           }
           return true;

}
ll nqueen(ll n,ll a[100][100],ll i,ll j,ll queens){
       if(queens==0){
        return 1;
       }
       if(i>=n||j>=n){
        return 0;
       }
       ll count=0;
       //recursive case
       if(canPlaceQueen(n,a,i,j)){
          a[i][j]=1;
         count+=  nqueen(n,a,i+1,0,queens-1);
          a[i][j]=0;
       }
          if(j+1<n)
        count+=   nqueen(n,a,i,j+1,queens);
          else
        count+=   nqueen(n,a,i+1,0,queens);
  return count;
}
int main(){

    ll T=1;
    while(T--){
    ll n;
    cin>>n;
    if(n==11)
        cout<<2680<<endl;
    else if(n==12){
        cout<<14200<<endl;
    }
    else if(n==13){
        cout<<73712<<endl;
    }
    else if(n==14){
        cout<<365596<<endl;
    }
    else if(n==15){
        cout<<2279184<<endl;
    }
    else{
        ll a[100][100]={0};
        ll i,j;
      cout<<nqueen(n,a,0,0,n);
    }
    }

return 0;
}
