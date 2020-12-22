#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
      ll n,c0,c1,h;
      cin>>n>>c0>>c1>>h;
      string s;
      cin>>s;
      ll z=0,o=0;
      for(ll i=0;i<s.length();i++){
         if(s[i]=='0')
            z++;
         else
            o++;

      }
           ll to1=z*h;
           to1+=c1*n;
         ll to0=o*h;
           to0+=c0*n;
     // h less than c0
     ll originalcost=(c0*z+c1*o);
    if(h<c0&&c1<c0&&(to1<originalcost)){
            //change 0 to 1
           cout<<to1<<"\n";
      }
     // h less than c1
      else if(h<c1&&c0<c1&&(to0<originalcost)) {
           //change 1 to 0
           cout<<to0<<"\n";
      }
      else{
        cout<<originalcost<<"\n";
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


