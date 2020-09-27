#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n;
    cin>>n;
    ll count=0;
    ll j=2;
   while(count!=n){
    bool flag=true;
    for(ll i=2;i<=sqrt(j);i++){
        if(j%i==0){
                flag=false;
            break;
        }

    }
     if(flag){
        cout<<j<<"\n";
    count++;
    }
     j++;
   }


return 0;
}
