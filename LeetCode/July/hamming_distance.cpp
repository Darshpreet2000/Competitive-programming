#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
     std::vector<int> c,d;
      int a,b;
      cin>>a>>b;
      int mod,q=a;
      while(q!=0){
     	mod=q%2;
     	q=q/2;
      c.push_back(mod);
      }
      q=b;
      while(q!=0){
      	mod=q%2;
       	q=q/2;
      	d.push_back(mod);
      }  
    if(c.size()>d.size()){
    	int n=c.size()-d.size();
    	for(int i=0;i<n;i++)
    		d.push_back(0);
    }
    else if(d.size()>c.size()){
    	int n=d.size()-c.size();
    	for(int i=0;i<n;i++)
    		c.push_back(0);
    }
    reverse(c.begin(),c.end());
    reverse(d.begin(),d.end());
    
   
    int distance=0;
   bool start=false;
    for(int i=0;i<c.size();i++){
      if(c[i]!=d[i]){
        start=!start;
       }
       if(start)
       	distance++;
    }
    cout<<distance;
	return 0;
}
