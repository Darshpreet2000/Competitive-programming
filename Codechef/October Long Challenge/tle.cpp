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
       cout<<"Output is -> ";
       //make x pth smallest & use kth smallest element
       if((v[p-1]<x&&k>p)||(v[p-1]>x&&k<p)){
        cout<<"-1"<<"\n";
       }
       else if(v[p-1]==x)
        cout<<0<<"\n";
       else{
           ll gap=0;
           if(k>p){
                    ll i=0;
                    for(i=0;i<n;i++){
                        if(v[i]>x)
                            break;
                    }

               ll ans=abs(p-(i+1))+1;
                cout<<ans<<"\n";
           }

           else{
               ll gap=0;
                while(v[p-1]!=x){
                   v[k-1]=x;
                   sort(v.begin(),v.end());
                   gap++;
                }
                cout<<gap<<"\n";
        }
       }
     }
return 0;
}

