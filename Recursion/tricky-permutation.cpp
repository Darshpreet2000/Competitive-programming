#include<bits/stdc++.h>
using namespace std;
#define ll long long int
set<string> p;
void permute(char s[],string e,int i){

   if(s[i]=='\0'){
     e[i]='\0';
     p.insert(e);
     return;
   }
   for(int k=i;s[k]!='\0';k++){
      swap(s[k],s[i]);

      permute(s,e+s[i],i+1);
     swap(s[k],s[i]);
   }
   return;
}
int main(){

    ll T=1;
    while(T--){
        char s[100];
        string e;
        cin>>s;
        permute(s,e,0);
   for(auto it:p){
        cout<<it<<"\n";
      }
    }

return 0;
}
