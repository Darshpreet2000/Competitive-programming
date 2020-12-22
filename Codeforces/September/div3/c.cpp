#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){

       ll n;
       cin>>n;
       ll nroot=sqrt(n);
       if(nroot*nroot>=n){
         cout<<(nroot-1+nroot-1)<<"\n";
       }
       else if((nroot+1)*nroot>=n){
         cout<<(nroot+nroot-1)<<"\n";
       }  else
         cout<<(nroot+nroot)<<"\n";


    }
return 0;
}
