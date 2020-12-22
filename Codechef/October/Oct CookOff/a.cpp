#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       string s;
       ll n;
       cin>>n;
       cin>>s;
       bool present=false;
       char ch=s[n-1];
       for(ll i=0;i<n-1;i++){
         if(s[i]==ch){
            present=true;
            break;
         }
       }
       if(present)
        cout<<"YES"<<"\n";
       else
        cout<<"NO"<<"\n";
    }
return 0;
}
