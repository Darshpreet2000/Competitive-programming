#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("D://Competitive-programming//input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("D://Competitive-programming//output.txt", "w", stdout);
#endif

   std::vector<int> v;
   int n,num,search;
   cin>>n;
   for(int i=0;i<n;i++){
   	  cin>>num;
   	  v.push_back(num);
   }
cin>>search;
  // Need to find number from rotated & sorted array

   int beg=0,end=n-1;
   while(beg<=end){
       int mid=(beg+end)/2;
       if(v[mid]==search){
       	 cout<<mid;
       	 break;
       }
       else if(v[beg]<v[mid]){
            //binary search here
           if(search<=v[mid] and search>=v[beg])
       	     end=mid-1;
       	  else
             beg=mid+1;
       }
       else{
       	  if(search>=v[mid]&&search<=v[end]){
              beg=mid+1;
       	  }
       	  else{
       	  	end=mid-1;
       	  }

       }
   }

  return 0;
}		