#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T=1;
    //cin>>T;
    while(T--){
       string s;
       cin>>s;
       //check if palindrome
       ll i=0,j=s.length()-1;
       bool ispalin=true;
       while(i<j){
         if(s[i]==s[j]){
            i++;
            j--;
         }else{
           ispalin=false;
           break;
         }
       }
       if(ispalin){
        cout<<0<<"\n";
       }
       else{
           cout<<3<<"\n";
           cout<<"R "<<s.length()-1<<"\n";

           cout<<"L "<<s.length()<<"\n";

           cout<<"L "<<2<<"\n";
       }
    }
return 0;
}
