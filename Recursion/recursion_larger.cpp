#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void recur(string s,int i,string e,vector<string> &v){
    if(s[i]=='\0'){
            if(s>e)
        v.push_back(s);
    }

       for(int k=i;s[k]!='\0';k++){
           swap(s[i],s[k]);
           recur(s,i+1,e,v);
       }
}
int main(){

    ll T=1;
   //cin>>T;
    while(T--){
       string s;
       cin>>s;
       string e=s;
       vector<string> v;
       recur(s,0,e,v);

     sort(v.begin(),v.end());
       for(auto k:v)
        cout<<k<<"\n";

    }
return 0;
}
