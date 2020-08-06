#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
  long long int n,k;
  cin>>n>>k;
  long long int a[n+1],pos[n+1];
  for(long long int i=0;i<n;i++){
  	cin>>a[i];
  	pos[a[i]]=i;
  }
  long long int temp=n,i=0;
  while(k&&i<n){
  	   if(a[i]!=temp){
       	   long long int index=pos[temp];
                pos[a[i]]=index;
                swap(a[i],a[index]);
       	  k--;
       }
       i++;
       temp--;

  }

  for(long long int i=0;i<n;i++){
  	cout<<a[i]<<" ";
  }
	return 0;
}
