#include<bits/stdc++.h>
using namespace std;
#define ll long long int
set<string> u;
void permute(string s,int i){
   if(s[i]=='\0'){
    u.insert(s);
    return;
   }

   for(int k=i;k<s.length();k++){
       swap(s[i],s[k]);
       permute(s,i+1);
      swap(s[i],s[k]);
   }
}
int main(){

  string s;
  cin>>s;
 permute(s,0);
 for(auto var:u){
    cout<<var<<"\n";
 }
return 0;
}
