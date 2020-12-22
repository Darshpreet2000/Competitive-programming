#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll n;
   cin>>n;
   vector<ll> x,y;
   ll a,c;
   for(ll i=0;i<n;i++){
       cin>>a>>c;
       x.push_back(a);
       y.push_back(c);
   }

   sort(x.begin(),x.end());
   sort(y.begin(),y.end());

   ll diffx=x[0]-1,diffy=y[0]-1;
   for(ll i=1;i<n;i++){
      diffx=max(abs(x[i-1]+1-x[i]),diffx);
      diffy=max(abs(y[i-1]+1-y[i]),diffy);
   }
   cout<<diffx*diffy<<"\n";

return 0;
}
