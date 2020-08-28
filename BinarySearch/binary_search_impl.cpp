#include<bits/stdc++.h>
using namespace std;
//Binary Search Algo
#define ll long long int
ll searchIterative(std::vector<ll> v, ll search){
  ll beg=0,end,mid;

   end=v.size();
   while(beg<=end){
      mid=(beg+end)/2;
      if(search>v[mid]){
        beg=mid+1;
      }
      else if(search<v[mid]){
        end=mid-1;
      }
      else{
        cout<<" Position ";
        return mid;
      }
  }
  return mid;
}

ll searchRecursive(std::vector<ll> v, ll search,ll beg,ll end){
     ll mid=(beg+end)/2;
  
  if(beg>end){
  	return mid;
  }
      if(search>v[mid]){
        beg=mid+1;
     mid= searchRecursive(v,search,beg,end);
      }
      else if(search<v[mid]){
        end=mid-1;
      mid=  searchRecursive(v,search,beg,end);
      }
      else if(v[mid]==search){
        cout<<" Position ";
        return mid;
      }
  
  return mid;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("D://Competitive-programming//input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("D://Competitive-programming//output.txt", "w", stdout);
#endif
   ll n,i,search,beg=0,end,mid,input;
   std::vector<ll> v;
   //Input
   cin>>n;
   for(i=0;i<n;i++){
    	cin>>input;
    	v.push_back(input);
   }
   cout<<"Enter number to search"<<"\n";
   cin>>search;
   //ll pos=searchIterative(v,search);
   ll pos=searchRecursive(v,search,0,v.size());
   if(v[pos]!=search)
   cout<<"Not Found";
   else
   cout<<"Found at "<<pos;  
  return 0;
}		