#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool tryToPaint(std::vector<ll> v,ll k,ll time){
   ll total=0,n_p=1;
  for(ll i=0;i<v.size();i++){
        if(v[i]>time){
            return false;
        }
        total+=v[i];
        if(total>time){
            n_p++;
            total=v[i];
            if(n_p>k)
                return false;
        }
  }
return n_p<=k?true:false;
}
int main(){

  ll sum=0,n,k,input,max=-10000;
  cin>>k>>n;
  std::vector<ll> v;
  for(ll i=0;i<n;i++){
  	cin>>input;
  	sum+=input;
  	if(input>max)
  		max=input;
  	v.push_back(input);
  }
  ll beg=max,end=sum,ans=1e18;
  while(beg<end){
  	ll mid=beg+(end-beg)/2;
     bool painted=tryToPaint(v,k,mid);
     if(painted){
         ans=min(mid,ans);
         end=mid-1;
     }
     else{
       beg=mid+1;
     }
  }
  cout<<ans;
  return 0;
}
