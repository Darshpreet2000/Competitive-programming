#include <bits/stdc++.h>
using namespace std;
int find(int i,int j,int a[],int y,int b[100][100]){
	if(i>j){
		return 0;
	}
 if(b[i][j]!=0){
 	return b[i][j];
 }
  int costl=find(i+1,j,a,y+1,b)+a[i]*y;
  int costr=find(i,j-1,a,y+1,b)+a[j]*y;

  return b[i][j]=max(costl,costr);
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int a[100],b[100][100];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i){
     cin>>a[i];
    }
    cout<<find(0,n-1,a,1,b);
	return 0;
}
