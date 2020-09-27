#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n;
       cin>>n;
       ll ans=1;
       for(ll i=2;i*i<=n;i++){
          if(n%i==0){
                if(i*i!=n){

            ans+=i;
            ans+=n/i;
                }
                else{
                    ans+=i;
                }
          }

       }
       if(ans!=n||n==1)
        cout<<"NO"<<"\n";
       else
       cout<<"YES"<<"\n";
    }
return 0;
}
