#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif
    long long int n,p,ans=1;
    cin>>n>>p;

    while(p){
    	int num=p&1;
    	if(num==1){
    		ans*=n;
    	}
    	p=p>>1;
    	n*=n;
    }
    cout<<ans;
	return 0;
}