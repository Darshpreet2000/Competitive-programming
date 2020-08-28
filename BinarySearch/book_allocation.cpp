#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool assignBooks(std::vector<ll> v,ll m,ll pages){
  ll sumofpages=0;
     for(int i=0;i<v.size();i++){
     	if(sumofpages+v[i]<=pages){
          sumofpages+=v[i];
     	}
     	else{
     		m--;
     		sumofpages=v[i];	
     		if(m==0) return false;
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

	ll n,m,input,sum=0;
	std::vector<ll> v;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>input;
		sum+=input;
		v.push_back(input);
	}

	ll beg=v[n-1],end=sum,ans;
	while(beg<=end){
       ll mid=(beg+end)/2;
        //try to allocate mid pages to each student 
       bool assign=assignBooks(v,m,mid);
       if(assign){
          end=mid-1;
          ans=mid;
       }
       else{
         beg=mid+1;
       }
	}
	cout<<ans;
  return 0;
}		