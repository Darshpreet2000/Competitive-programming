#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll a,c;
       cin>>a>>c;
       ll x=a;
       ll t=a^a;
       ll y=c^a;
       cout<<(t+y)<<"\n";
    }
return 0;
}
