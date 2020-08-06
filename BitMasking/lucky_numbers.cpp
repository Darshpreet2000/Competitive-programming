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
    char n[50];
    ll ans=0;
    cin>>n;
    ll sum=(1<<(strlen(n)))-2;
     for(int i=(strlen(n)-1),pos=0;i>=0;i--,pos++){
     	if(n[i]=='7'){
           ans+=(1<<pos);
     	}
     }
       cout<<ans+sum+1;
	return 0;
}