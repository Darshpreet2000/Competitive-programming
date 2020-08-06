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
  ll n,s=0,w=0;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  ll bit=a[0]&1;
  for(int i=0;i<n;i++){
      if(a[i]&1==bit)
      	s^=a[i];
      else
      	w^=a[i];
  }
is(s<w)
cout<<s<<" "<<w;
	
else
cout<<w<<" "<<s;

	return 0;
}