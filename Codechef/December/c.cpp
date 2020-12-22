#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){

    ll x,y,n,k;
    cin>>x>>y>>k>>n;
    ll gap=abs(x-y);
    x=0;
    y=gap;
    while(x<y&&y>=0&&x<=n){
        x+=k;
        y-=k;
    }
    if(x==y)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";

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


