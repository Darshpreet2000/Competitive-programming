#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool tryToPaint(std::vector<ll> v,ll k,ll time){
   ll timeTaken=time;
  for(ll i=0;i<v.size();i++){
        if(k==0){
        		return false;
        	}
        if(timeTaken-v[i]>=0){
        	timeTaken-=v[i];
        }
        else{
        	k--;
        	timeTaken=time;
        	
        }
  }
return true;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("D://Competitive-programming//input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("D://Competitive-programming//output.txt", "w", stdout);
#endif
  ll sum=0,n,k,input,max=0;
  cin>>k>>n;
  std::vector<ll> v;
  for(ll i=0;i<n;i++){
  	cin>>input;
  	sum+=input;
  	if(input>max)
  		max=input;
  	v.push_back(input);
  }
  ll beg=max,end=sum,ans;
  while(beg<=end){
  	ll mid=(beg+end)/2;
     bool painted=tryToPaint(v,k,mid);
     if(painted){
         ans=mid;
         end=mid-1;
     }
     else{
       beg=mid+1;
     }
  }
  cout<<ans;
  return 0;
}		