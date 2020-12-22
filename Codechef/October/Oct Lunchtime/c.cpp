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
       ll n,q;
       cin>>n>>q;
        vector<ll> a(n+2,-1);
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        ll ans=0;
        for(ll i=1;i<=n;i++){
          ans+=(a[i]!=a[i-1]);
        }
        while(q--){

            ll x,y;
            cin>>x>>y;
           if(a[x]!=y){
                if(a[x-1]==a[x]&&a[x+1]==a[x]){
                         ans+=2;
                }
                else if(a[x-1]==a[x]&&a[x+1]!=a[x]){
                    ans+=1;
                    if(y == a[x+1]) ans --;
                }
                else if(a[x-1]!=a[x]&&a[x+1]==a[x]){
                    ans+=1;
                    if(y == a[x-1]) ans --;
                }
                else if(a[x-1]==y&&a[x+1]==y){
                    ans-=2;
                }
                else if(a[x-1]==y&&a[x+1]!=y){
                    ans-=1;
                }
                else if(a[x-1]!=y&&a[x+1]==y){
                    ans-=1;
                }
           }
           a[x]=y;
          cout<<ans<<"\n";
        }

    }
return 0;
}
