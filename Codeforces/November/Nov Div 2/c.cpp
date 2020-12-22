#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T;
    cin>>T;
    while(T--){
       ll a,b;
       cin>>a>>b;
       if(a%b!=0)
        cout<<a<<"\n";
        else if(a==b&&a%2==0)
            cout<<a/2<<"\n";
       else{
        // find divisors of a which are not divisble by b
        ll ans=0;
        for(ll i=sqrt(a);i>=1;i--){
            if(a%i==0){
                ans=i;
                ll other=a/i;
                if(other%b!=0){
                    ans=other;
                    break;
                }
            }
        }
        cout<<ans<<"\n";
       }
    }
return 0;
}

