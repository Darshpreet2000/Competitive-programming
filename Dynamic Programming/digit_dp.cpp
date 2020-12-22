#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
ll dp[20][180][2];
ll count(ll indx,bool tight,ll zeroes,vector <ll> &digit){
           if(indx-1==digit.size()){
            return 1;
           }

           if(dp[indx][zeroes][tight]!=-1&&tight!=1){
             return dp[indx][zeroes][tight];
           }
           ll ret=0;
           ll k=(tight)?digit[indx-1]:9;
           for(ll i=0;i<=k;i++){
                bool newtight=0;
                  if(i==digit[indx]){
                    newtight=tight;
                  }
                 if(i==0&&indx==zeroes){
                    //this is my first index
                   ret+=count(indx+1,1,zeroes+1,digit);
                 }
               if((indx-zeroes)%2==0&&i%2==0){
              ret+=count(indx+1,newtight,zeroes,digit);
                 }
                if((indx-zeroes)%2!=0&&i%2!=0){
              ret+=count(indx+1,newtight,zeroes,digit);
                 }

           }

           if(tight!=1){
            dp[indx][zeroes][tight]=ret;
           }
           return ret;

}
int main(){

    ll l,r;
    cin>>l;
    //cin>>r;
    vector<ll> v,c;
    memset(dp,-1,sizeof dp);
    while(l){
        ll num=l%10;
        l/=10;
        v.push_back(num);
    }
    memset(dp,-1,sizeof dp);
    reverse(v.begin(),v.end());
    ll ans1= count(1,1,0,v);
    cout<<ans1<<"\n";
return 0;
}

