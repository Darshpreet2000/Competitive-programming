#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll calc(ll i,ll arr[]){
	ll sum=0;
    ll k=i;
      ll temp=(k*(k+1)/2)%1000000007;
      sum+=temp;
      sum=sum%1000000007;
	
	return sum%1000000007;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif
    ll n;
    cin>>n;
    //Make a set
    set<ll> m;
    ll arr[n],j=0,sum=0,beg=0,end=n;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      while(j<n&&m.find(arr[j])==m.end()){
	         m.insert(arr[j]);
     	j++;
      } 
     	     beg=j-i;
	         sum+=calc(beg,arr);
	         m.erase(arr[i]);
	     	 
    }
    cout<<sum%1000000007;
	return 0;
}


