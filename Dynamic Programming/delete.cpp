#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
	
	int n;
	cin>>n;
	for(int i=0;i<10;i++){
	n=i;
	cout<<"Simple "<<n<<" Square "<<n*n<<" Cube "<<n*n*n<<"\n";
   }
return 0;
}
