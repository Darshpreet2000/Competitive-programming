#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n;
       cin>>n;
       bool flag=true;
       ll b[n+1],a[n+1];
       for(ll i=1;i<=n;i++){

       // check now
        cin>>b[i];
        a[i]=i;
        if(a[i]!=b[i])
            flag=false;
       }
       if(flag==false){
         for(ll i=n;i>=1;i--){
            if(a[i]!=b[i]){
              // make a[i] & a[b[i]]= b[i]
               if(b[i]<=n&&b[i]>=1){
                if(__gcd(a[i],a[b[i]])!=b[i]){
                    flag=false;
                    break;
                }
                else{
                    a[i]=b[i];
                    a[b[i]]=b[i];
                    flag=true;
                }
            }

           }

         }
       }
       if(flag)
        cout<<"YES"<<"\n";
       else
        cout<<"NO"<<"\n";
    }
return 0;
}
