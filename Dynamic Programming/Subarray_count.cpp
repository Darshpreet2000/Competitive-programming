#include <bits/stdc++.h>
using namespace std;
int finds(int a[],int i,int j){

  int suml=1;

   for(int k=0;k<j;k++){
   	if(a[i]<a[k]){
     suml+= finds(a,k,j);
   	}
   }
 
 return suml;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
   int n,a[100];
   cin>>n;
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
  cout<<finds(a,0,n);
	return 0;
}
