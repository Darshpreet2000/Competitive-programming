#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll profit(ll w[],ll p[],ll c,ll len){

  if(len==-1 or c==0){
     return 0;
  }
  ll inc=0,exc=0;
  if(w[len]<=c){
     inc=p[len]+profit(w,p,c-w[len],len-1);
  }
  exc=profit(w,p,c,len-1);

 return max(inc,exc);
}
int main(){

    ll w[100],p[100];
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>w[i];
            cin>>p[i];
    }
    ll c;
    cin>>c;
    cout<<profit(w,p,c,n-1);
return 0;
}
