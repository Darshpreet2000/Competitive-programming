#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void permute(ll s[],vector<ll> e,int i,int n){

   if(i==n){
        for(i=0;i<n;i++)
        cout<<e[i]<<" ";
        cout<<"\n";
     return;
   }
   for(int k=i;k<n;k++){
		if(i== k or s[k]!=s[i]){
       swap(s[k],s[i]);
       e.push_back(s[i]);
       permute(s,e,i+1,n);
         swap(s[k],s[i]);
     }
   }
   return;
}
int main(){

    ll T=1;
    while(T--){
        ll a[1000];
        vector<ll> e;
        ll n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];

        permute(a,e,0,n);

    }

return 0;
}

