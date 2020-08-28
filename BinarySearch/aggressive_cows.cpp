#include<bits/stdc++.h>
using namespace std;

#define ll long long int
bool checkCowsCanPlace(std::vector<ll> v,ll cows,ll space){
     ll pos=v[0];
     cows--;
     for(ll i=1;i<v.size();i++){
     	if(v[i]-pos>=space){
     		pos=v[i];
     		cows--;
     		if(cows==0)
     			return true;
     	}
     }
     return false;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("D://Competitive-programming//input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("D://Competitive-programming//output.txt", "w", stdout);
#endif
     
     ll t;
     cin>>t;
   while(t--){
     ll i,n,c,num;
     cin>>n>>c;
     std::vector<ll> v;
     for(i=0;i<n;i++){
     	cin>>num; 
     	v.push_back(num);
     } 
     sort(v.begin(), v.end());
     // 0 to maxSpace check
     //binary search between 0 to n-1  
     ll beg=0,ans=0;
     ll end=v[n-1]-v[0];
     while(beg<=end){
        ll mid=(beg+end)/2;
       bool cowsCanPlace=checkCowsCanPlace(v,c,mid);
      
        if(cowsCanPlace){
           beg=mid+1; 
           
       ans=mid;   
        }
        else{
          end=mid-1;
        }
     }
     cout<<ans<<"\n";
    } 
  return 0;
}		