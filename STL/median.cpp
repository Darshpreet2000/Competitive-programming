#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
	int n,num;
	cin>>n;
	std::vector<int> v;
	for(int i=0;i<n*2;i++){
		cin>>num;
		v.push_back(num);
	}
     
sort(v.begin(),v.end());
if(v.size()%2==0)
	cout<<v[n-1];
else
	cout<<v[(n*2+1)/2];
	return 0;

}