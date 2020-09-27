#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mul(ll m,ll n){
   // add m n times
   if(n==0)
   return 0;

   return m+mul(m,n-1);

}
int main(){

    ll n,m,val=0;
    cin>>n>>m;
    cout<<mul(m,n);

return 0;
}
