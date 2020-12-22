#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        char s[n+1];
        ll sum0=1;
        ll sum1=1;
        char prev;

        for(ll i=0;i<n;i++){
            cin>>s[i];
        }
        char zero='0';
        char one='1';
        prev=s[0];
        for(ll i=1;i<n;i++){
            if(s[i]==zero&&prev==zero){
                sum0++;
            }
            else if(s[i]==one&&prev==one){
                sum1++;
            }
            prev=s[i];
        }

      ll ans=max(sum0,sum1)-1;
      cout<<ans<<"\n";
    }
return 0;
}
