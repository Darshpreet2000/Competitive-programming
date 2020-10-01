#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n;
int a[100][100];
ll cal(ll r,ll c,ll ans){

if((r>=n||c>=n)||a[r][c]!=1||(r<0||c<0))
        return ans;
          ll b[8]={0};
          a[r][c]=0;
      b[0]=cal(r-2,c-1,ans);
    b[1]= cal(r-2,c+1,ans);
     b[2]= cal(r-1,c-2,ans);
    b[3]=   cal(r-1,c+2,ans);
   b[4]=    cal(r+1,c-2,ans);
    b[5]=   cal(r+1,c+2,ans);
    b[6]=   cal(r+2,c-1,ans);
    b[7]=  cal(r+2,c+1,ans);
    sort(b,b+8);
          a[r][c]=1;
    return ans+b[7]+1;
}
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
      cin>>n;
      ll count=0;
      for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]==1)
                count++;
        }
      }
       ll ans=cal(0,0,0);
       cout<<count-ans;
    }
return 0;
}
