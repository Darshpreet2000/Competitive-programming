#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll i=1,j;
        queue<ll> q;
        q.push(a[1]);
        ll d=0,x,cnt=1;
        while(!q.empty()){
          x=0;
        for(ll k =0;k<cnt;k++){
              q.pop();
              ll prev=-1;
           while(i<n){
            if(a[i]<prev)
                break;
            prev=a[i];
                q.push(a[i]);
              i++;
              x++;
            }
        }
        cnt=x;
        if(q.size())
          d++;
        }
        cout<<d<<"\n";
    }
return 0;
}
