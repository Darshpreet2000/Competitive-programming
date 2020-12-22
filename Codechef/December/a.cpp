#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
 ll n,x;
 cin>>n>>x;

 ll a[n+1]={0};
 for(ll i=1;i<=n;i++) cin>>a[i];
 if(x>=n&&n!=2){
        ll xorCalculated=0;
    for(ll i=1;i<=n;i++){
        xorCalculated=xorCalculated^a[i];
            if(i!=n)
        cout<<0<<" ";
         else
            cout<<xorCalculated<<" ";
    }
 }
 else if(n==2){
        ll i=1,j=2;
        if(x!=0){
          if(x%2==0) x=2;
          else x=1;
        }
    while(x>0){
        ll p;
        if(a[i]==0) p=0;
        else
        p=log2(a[i]);
        ll num=pow(2,p);
        a[i]=a[i]^num;
        a[j]=a[j]^num;
        x--;
    }
  for(ll i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<"\n";
 }
 else{
 ll i=2;
    while(x>0&&i<=n){
        if(i>=n)
             break;

         if(a[i-1]!=0) i--;
         if(a[i]==0){
             i++;
             if(i>=n)
             break;
         }
      //   cout<<i<<"\n";
        ll p;
        if(a[i]==0) p=0;
        else
        p=log2(a[i]);
        ll num=pow(2,p);
        ll j=i+1;
        //keep track of last non zero index
        ll track;
        for(j=i+1;j<=n;j++){
           track=j;
           if(a[j]==num){
            break;
           }
         ll val=a[j]^num;
           if(val<a[j]){
            break;
           }
        }
        if(j<=n){
        a[i]=a[i]^num;
        a[j]=a[j]^num;

        x--;
        }
        else{
        a[track]=a[track]^num;
        a[i]=a[i]^num;

        x--;
        }
      i++;
    }
    for(ll i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<"\n";
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


