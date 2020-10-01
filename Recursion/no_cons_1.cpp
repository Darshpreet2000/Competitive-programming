#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll count(ll n,char s[],ll i){
    if(i==n){
        s[i]='\0';
        return 1;
    }
    ll sum=0;
    if(i==0){
        s[i]='1';
       sum+= count(n,s,i+1);
    }

    if(i>0&&s[i-1]!='1'){
        s[i]='1';
       sum+= count(n,s,i+1);
    }
        s[i]='0';
       sum+= count(n,s,i+1);
    return sum;
}
int main(){

   ll t=1;
   cin>>t;
   ll a[100];
   a[0]=0;
      a[1]=2;

      a[2]=3;
   for(ll i=3;i<100;i++){
     a[i]=a[i-1]+a[i-2];
   }
   while(t--){
   ll n;
   cin>>n;
   char s[n];
   cout<<a[n]<<"\n";
   }

return 0;
}
