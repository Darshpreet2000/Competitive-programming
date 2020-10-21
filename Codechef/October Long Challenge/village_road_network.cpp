#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll x2,y2;
ll recur(ll x,ll y){
    if(x==x2&&y==y2){
        return 0;
    }

    ll cost,n,w,e,s;
    e=1+recur(x+2*y,y);
    w=1+recur(x-2*y,y);
    if((y+2*x)>0)
       n=1+recur(x,y+2*x);
    else{
       ll temp=-(y+2*x);
       n=1+recur(-x,temp);
    }
         if((y-2*x)>0)
      s=1+recur(x,y-2*x);
       else
     s=1+recur(-x,-(y-2*x));


  return cost=min(n,min(w,min(e,s)));
}
int main(){

    ll T;
    cin>>T;
    while(T--){
          ll x1,y1;
          cin>>x1>>y1>>x2>>y2;
          cout<<recur(x1,y1)<<"\n";
    }
return 0;
}

