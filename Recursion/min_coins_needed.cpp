#include<bits/stdc++.h>
using namespace std;
int a[3]={1,3,6};
int o=INT_MAX,t=INT_MAX,s=INT_MAX;

int coin(int n,int v){
   if(n==0){   //Base Case
   	 return v;
   }
   if(a[0]<=n){
   	//use it
   	int change=n-a[0];
   o=coin(change,v+1);
   }
   if(a[1]<=n){
   	//use it
   	int change=n-a[1];
   t=coin(change,v+1);
   }
   if(a[2]<=n){
   	//use it
   	int change=n-a[2];
   s=coin(change,v+1);
   }
  return min(o,(t,s));
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("D://Competitive-programming//input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("D://Competitive-programming//output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    cout<<coin(n,0);

  return 0;
}		