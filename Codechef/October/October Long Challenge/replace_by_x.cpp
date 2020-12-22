#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n,x,p,k;
       cin>>n>>x>>p>>k;
       vector<ll> v;
       ll inp;
       for(ll i=0;i<n;i++){
           cin>>inp;
           v.push_back(inp);
       }
       sort(v.begin(),v.end());

       //make x pth smallest & use kth smallest element
       ll ans;
       if((v[p-1]<x&&k>p)||(v[p-1]>x&&k<p)){
        ans=-1;
        }
       else if(v[p-1]==x)
        ans=0;
       else{
           if(k>p){
                    ll i=0;
                    for(i=0;i<n;i++){
                        if(v[i]>x)
                            break;
                    }
               ans=abs(p-(i+1))+1;
           }
           else if(k<p){
                    ll i=0;

                for(i=0;i<n;i++){
                        if(v[i]>=x)
                            break;
                    }
                if(i==n)
                    i-=1;
               if(v[i]==x){
                   ans=abs(p-(i+1));
               }
               else if(i+1>p&&v[i]>=x){
                ans=abs(p-(i+1));
               }
               else{
                ans=abs(p-(i+1))+1;
               }
          }
          else if(k==p){
                ll i=0;
                for(i=0;i<n;i++){
                        if(v[i]>=x)
                            break;
                    }
                if(i==n)
                    i-=1;
               if(v[i]==x){
                   ans=abs(p-(i+1));
               }
               else if(i+1>p&&v[i]>=x){

                   ans=abs(p-(i+1));
               }
               else {
                   ans=abs(p-(i+1))+1;
               }
          }
       }
      cout<<ans<<"\n";
     }
return 0;
}
