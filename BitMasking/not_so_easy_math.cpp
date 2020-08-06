#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif
    ll primes[]={2,3,5,7,11,13,17,19};
    ll t;
    cin>>t;
    ll subsets=(1<<8)-1;
    while(t--){
     	ll n;
     	cin>>n;
        ll ans=0;
    for(int i=1;i<=subsets;i++){
         int j=0;
         ll denom=1ll;
    	 int setbits= __builtin_popcount(i);
         for(j=0;j<=7;j++){
         	if(1&(1<<j)){
               denom*=primes[j];
         	}
         }
         if(setbits&1){
            ans+=n/denom;
         }else{
            ans-=n/denom;
         }
    }
   cout<<ans<<"\n";
  }
	return 0;
}