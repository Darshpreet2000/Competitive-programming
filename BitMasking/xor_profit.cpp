#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif
  int a,b,max=0;
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    
    for(int j=a;j<=b;j++){
    	if((i^j)>max){
    	max=(i^j);
    }
    }
  }
  cout<<max;
 return 0;
}