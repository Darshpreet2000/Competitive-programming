
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve(ll a,ll b, ll x, ll y,ll n){

    //decrease a then decrease b
    if(n>=a-x){
            ll d=a-x;
        a-=d;

        n=n-d;

    } else{
       a-=n;
       n=0;
    }
    if(n>0){
        if(n>=b-y){
         ll d=b-y;

        b-=d;
        n-=d;
        }
        else{
            b-=n;
        }
    }

   //        cout<<" b is "<<b<<" "<<a<<"\n";
    return a*b;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
      ll a,b,x,y,n;
      cin>>a>>b>>x>>y>>n;
      cout<<min(solve(a,b,x,y,n),solve(b,a,y,x,n))<<"\n";
    }
}


