#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
      ll x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      if(x1==x2&&y1==y2){
        cout<<0<<"\n";
      }
      else if(x1==y1&&x2==y2){
        cout<<(abs(x1-x2)+abs(y1-y2)+2)<<"\n";
      }
      else if(x1==x2 or y1==y2){
            ll ans;
        if(x1==x2){
             ans=abs(y1-y2);
        }
        else{
             ans=abs(x1-x2);
        }
        cout<<ans<<"\n";
      }
      else{
        ll h=abs(x1-x2);
        ll v=abs(y1-y2);
        cout<<(h+v+2)<<"\n";
      }
    }
return 0;
}
