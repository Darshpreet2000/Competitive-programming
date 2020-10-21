#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[1000][1000];
ll recur(ll a[],ll i,ll j){
   if(i>=j){
    return 0;
   }
	if (i<1000&&j<1000&&dp[i][j] != -1) {
		return dp[i][j];
	}

   ll c1= a[i]+min(recur(a,i+2,j),recur(a,i+1,j-1));

   ll c2= a[j]+min(recur(a,i,j-2),recur(a,i+1,j-1));
       if(i<1000&&j<1000)
        dp[i][j] = max(c1, c2);
   return max(c1, c2);
}
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
       ll n;
       cin>>n;
       ll a[n];
       memset(dp, -1, sizeof(dp));
       for(ll i=0;i<n;i++)
         cin>>a[i];
       cout<<recur(a,0,n-1);
    }
return 0;
}
