#include <bits/stdc++.h>
using namespace std;
//Using Memoization 
int recur(int n,int steps,int a[]){
   int one=INT_MAX,two=INT_MAX,three=INT_MAX;
 if(a[n]!=0){
 	return a[n];
 }  
   if(n==1){
   	return steps;
   }
   if(n%2==0){
   two= recur(n/2,steps+1,a);
   }

   if(n%3==0){
   three= recur(n/3,steps+1,a);
   }
   one= recur(n-1,steps+1,a);
   return a[n]=min(one,min(two,three));
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n,a[200]={0};
 
    cin>>n;
    cout<<recur(n,0,a);
 	return 0;
}
