#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool can(string s1,string s2){
    if(s1==s2){
        return true;
    }
    if(s1.length()%2!=0||s2.length()%2!=0)
        return false;
        string a1=s1.substr(0, s1.length()/2),b1=s2.substr(0, s2.length()/2),a2=s1.substr(s1.length()/2),b2=s2.substr(s2.length()/2);

    bool val=(can(a1,b1)&&can(a2,b2))||(can(a1,b2)&&can(a2,b1));
    return val;
}
int main(){
ll n;
cin>>n;
   while(n--){
      string s1,s2;
      cin>>s1>>s2;
        if(can(s1,s2)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
   }

  return 0;
}
