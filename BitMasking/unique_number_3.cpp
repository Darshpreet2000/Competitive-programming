#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif
  ll n;
  cin>>n;
  ll a[n],b[64]={0};
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }

 for(int i=0;i<n;i++){
    ll num=a[i];
   int j=0; 
    while(num>0){
      b[j]+=num&1;
      num=num>>1;
      j++;
     }
 }

   int p=1,ans=0;
 for(int i=0;i<64;i++){
    b[i]%=3;
    ans+=b[i]*p;
    p*=2;
 }
 cout<<ans;

	return 0;

}