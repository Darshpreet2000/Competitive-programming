#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
   ll x,y;
   cin>>x>>y;
   ll diff=abs(x-y);
   if(x==y)
    cout<<0<<"\n";
   else if(y>x){

      if(diff%2==0){
         if((diff/2)%2!=0)
            cout<<2<<"\n";
         else
            cout<<3<<"\n";
      }
      else
        cout<<1<<"\n";  //working
   }
   else{
      if(diff%2==0)
        cout<<1<<"\n"; //working
      else
        cout<<2<<"\n";//working
   }
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


