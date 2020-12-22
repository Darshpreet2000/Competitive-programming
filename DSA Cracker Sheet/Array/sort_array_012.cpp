#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
    ll z=0,o=0,t=0;
    ll n;
    cin>>n;
    ll inp;
    for(ll i=0;i<n;i++){
        cin>>inp;
        if(inp==0){
            z++;
        }
        else if(inp==1)
            o++;
        else
            t++;
    }
    for(ll i=0;i<n;i++){
        if(z!=0){
            cout<<0<<" ";
            z--;
        }
        else if(o!=0){
            cout<<1<<" ";
            o--;
        }
        else{
            cout<<2<<" ";
            t--;
        }

    }
cout<<"\n";
}
int main(){
    fast
    ll T;
    cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


