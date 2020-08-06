#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif
  
 int n,a,b,ans=0;
 cin>>n;
 for(int i=0;i<n;i++){
    cin>>a>>b;
  ans=0;
   for(int i=a;i<=b;i++){
   int num=i;
    while( num>0){
    	num=num&(num-1);
    	ans++;
    }
   }

   cout<<ans<<"\n";
 }  
	return 0;
}