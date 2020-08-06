#include <bits/stdc++.h>
using namespace std;
string find(string a,string b,int i,int j,string c){
	string d,e;
	if(i==a.length()||j==b.length()){
	
		return c;
	}
	if(a[i]==b[j]){
     c.push_back(a[i]);
    return find(a,b,i+1,j+1,c);
     //cout<<c<<"\n";
    }
   d=find(a,b,i+1,j,c);
  
   e=find(a,b,i,j+1,c);
  if(d.length()>e.length()){
  	return d;
  }
  return e;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
	string a,b,c;
	cin>>a>>b;
    cout<<find(a,b,0,0,c);
	return 0;
}

