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
   ll n,a,num=1;
     cin>>n;
   for(ll i=0;i<n;i++){
      cin>>a;
      num*=a;
   }  
   cout<<num;
	return 0;
}