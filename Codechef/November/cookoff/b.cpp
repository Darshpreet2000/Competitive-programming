#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
   string a,b;
   cin>>a>>b;
   if(a==b){
    cout<<0<<"\n";
   }
   else{
        ll count=0;
        bool cons=false;
        bool possible=true;
      for(ll i=0;i<a.length();i++){
         if(a[i]!=b[i]){
            count++;
             if(i<a.length()-1&&a[i+1]!=b[i+1]){
                possible=false;
             }
         }
      }
      if(count==1){
        cout<<1<<"\n";
      }
      else{
        if(possible)
           cout<<1<<"\n";
        else
            cout<<2<<"\n";
      }

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


