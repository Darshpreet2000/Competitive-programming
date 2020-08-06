#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
   string s,a;
getline(cin, s);


getline(cin, a);

   long long int p=0,l=INT_MAX,beg,end; 
   for(int i=0;i<s.length();i++){
   	    if(s[i]==' '){
           string sub=s.substr(p,i);
          cout<<sub<<" ";

        if(sub.find(a)!=std::string::npos){
               if(l>i-p){
               	 l=i-p;
                 beg=p;
                 end=i; 
                 cout<<beg;
                 cout<<end;
               }              
          }
          p=i;
       }  	    
   }
   //cout<<s.substr(beg,end)<<"\n";
    
	return 0;
}
