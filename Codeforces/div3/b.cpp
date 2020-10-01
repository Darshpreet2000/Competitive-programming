#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n,m;
       cin>>n>>m;
       bool flag=false;
           ll a,b,c,d;
           for(ll i=0;i<n;i++){
              cin>>a>>b>>c>>d;

              if(b==c)
                flag=true;

           }
                 if(m%2!=0)
            flag=false;

           if(flag)
            cout<<"YES"<<"\n";
           else
            cout<<"NO"<<"\n";
    }
return 0;
}
