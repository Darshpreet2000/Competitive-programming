#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n,k,x,y;
       cin>>n>>k>>x>>y;

       map<ll,ll> m;
       ll curr=x;
       m[curr]=1;
       bool flag=true;
       while(m[curr]<=1){
            curr=(curr+k)%n;
            m[curr]+=1;
            if(curr==y){
                flag=false;
                break;
            }
       }
       if(flag){
        cout<<"NO"<<"\n";
       }
       else{
        cout<<"YES"<<"\n";
       }
    }
return 0;
}
