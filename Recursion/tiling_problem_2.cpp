#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
ll a[1000000];
ll recur(ll n,ll m){
    if(n<=0)
        return 0;
         if(a[n]!=-1)
        return a[n];

    if(n<m)
        return 1;

    if(n==m)
        return 2;
    ll h=0,v=0;
    v=recur(n-1,m)%M;
    if(n>=m)
    h=recur(n-m,m)%M;
    return a[n]=(h+v)%M;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<=n;i++){
        a[i]=-1;
    }
    cout<<recur(n,m)<<"\n";
    }
return 0;
}
