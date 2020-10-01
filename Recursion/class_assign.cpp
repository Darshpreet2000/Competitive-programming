#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll count(ll n,char a[], ll i){
    if(i==n){
        a[i]='\0';
        return 1;
    }
    ll ans=0;
    if(i>0&&a[i-1]!='b'){
        a[i]='b';
    ans+=count(n,a,i+1);
    }
    if(i==0){
            a[i]='b';

    ans+=count(n,a,i+1);
    }
        a[i]='a';
    ans+=count(n,a,i+1);
   return ans;
}
int main(){

    ll T,i=1;
    cin>>T;
    while(T--){
      ll n;
      cin>>n;
      char a[n];
      cout<<"#"<<i<<" : "<<count(n,a,0)<<"\n";
      i++;
    }
return 0;
}
