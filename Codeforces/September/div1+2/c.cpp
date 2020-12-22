#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       string s;
       cin>>s;
       for(ll i=0;i<s.length();i++){
         if(i>0&&s[i]=='B'){
            s.erase(i-1,2);
            i=i-2;
         }
       }
       cout<<s.length()<<"\n";
    }
return 0;
}
