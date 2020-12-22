#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void Solve(){
     ll n;
     cin>>n;
     ll cnt=0;
     for(ll i=4*n;i>=1;i--){
        if(i%2==0){
             cnt++;
            cout<<i<<" ";
        }
        if(cnt==n)
            break;
     }
       cout<<"\n";

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T;
    cin>>T;
    while(T--){
      Solve();
    }
return 0;
}

