#include<bits/stdc++.h>
using namespace std;
//Binary Search Algo
#define ll long long int

ll lower_bound(vector<ll> v,ll search){

   ll beg=0,end=v.size()-1,pos=-1,mid;
   //don't stop even if item is found
   while(beg<=end){
      mid=(beg+end)/2;
      if(v[mid]==search){

        end=mid-1;
        pos=mid;
      }
      else if(v[mid]>search){
        end=mid-1;
      }
      else
        beg=mid+1;
   }
  return pos;
}
ll upper_bound(vector<ll> v,ll search){

   ll beg=0,end=v.size()-1,pos=-1,mid;
   //don't stop even if item is found
   while(beg<=end){
      mid=(beg+end)/2;
      if(v[mid]==search){
        
         beg=mid+1;
        pos=mid;
      }
      else if(v[mid]>search){
        end=mid-1;
      }
      else
        beg=mid+1;
   }
  return pos;
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

   ll pos=lower_bound(v,search);
     cout<<"Lower Bound is at "<<pos<<"\n";

   pos=upper_bound(v,search);
     cout<<"Upper Bound is at "<<pos<<"\n";
  return 0;
}		