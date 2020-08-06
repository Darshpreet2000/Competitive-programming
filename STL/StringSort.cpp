#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

bool customCompare(string a,string b){
     if(a.find(b)!=-1)
     	return a.length()>b.length();
     else if(b.find(a)!=-1)
     	return a.length()>b.length();
     else
     	return a<b;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    string s;
     vector<string> v;
     for(int i=0;i<n;i++){
     	cin>>s;
     	v.push_back(s);
     }    
     sort(v.begin(),v.end(),customCompare);
     for(string i:v){
     	cout<<i<<"";
     }
	return 0;
}
