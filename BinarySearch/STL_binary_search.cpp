#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("D://Competitive-programming//input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("D://Competitive-programming//output.txt", "w", stdout);
#endif
   std::vector<int> v;
   int n,num;
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>num;
      v.push_back(num);
   } 
   int search;
   cin>>search;
   bool present=binary_search(v.begin() ,v.end(),search);

   if(present){
       auto low=lower_bound(v.begin(), v.end(),search);

       auto up=upper_bound(v.begin(), v.end(),search);
  
       cout<<low-v.begin()<<" "<<up-v.begin()<<"\n";
       cout<<"Frequency is "<<(up-v.begin()) - (low-v.begin());
   }
   else{
   	cout<<"Number not found";
   }
  return 0;
}		