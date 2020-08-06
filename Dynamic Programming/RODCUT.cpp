#include <bits/stdc++.h>
using namespace std;


long long int divide(long long int n,long long int dp[]){
  if(dp[n]!=0){
  	return dp[n];
  }
 long long int count=0;
 for(long long int i=n-1;i>=0;--i){
    count+= divide(i,dp);	
 }

  return dp[n]=count;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
   long long int t,dp[100]={0};
   cin>>t;
   while(t--){
   long long int n;
    dp[0]=1;
    cin>>n;
    cout<<divide(n,dp)<<"\n";
}
	return 0;
}
