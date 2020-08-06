#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
   #endif
    int n,a[200];
    cin>>n;
    a[1]=0;
    a[2]=1;
    a[3]=1;
    for (int i = 4; i < 200; ++i){
    a[i]=min(i%2==0?a[i/2]:INT_MAX,min(i%3==0?a[i/3]:INT_MAX,a[i-1]))+1;    
    }
   cout<<a[n];
	return 0;
}
