#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif
 
    int n;
    cin>>n;
    string s1,s2;
    for(int i=0;i<n;i++){
       cin>>s1;
       cin>>s2;
       for(int j=0;s1[j]!='\0';j++){
            int a=(int) s1[j];
       	    int b=(int) s2[j];
            cout<<(a^b);
       }
    
    }

	return 0;
}