#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll T;
    cin>>T;
    while(T--){
        ll n,inp;
        cin>>n;
        ll a[100000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool isPossible=false;
        if(n==1)
            isPossible=true;
        for(ll i=0;i<n-1;i++){
            if(a[i]<=a[i+1])
                isPossible=true;
        }
       // ll exch=(n*(n-1)/2)-1;
       // cout<<cnt<<"\n";
        if(isPossible)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
return 0;
}
