#include <bits/stdc++.h>
using namespace std;

int main(){
	
    long long int n,k,q,a,b,x=INT_MAX,y=INT_MAX,z=INT_MAX;
         priority_queue< long long int> v;
     cin>>n>>k;
     for(int i=0;i<n;i++){
       cin>>q;
      if(q==1){
      	cin>>a>>b;
        long long int dis=a*a+b*b;
        if(v.size()<k)
                v.push(dis);
            else if(v.top()>dis){
                v.pop();
                v.push(dis);
            }
      }
      else{
         cout<<v.top()<<"\n";
      }
    }	
  	return 0;
}
