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
        bool isAll=true;
        ll maxE=-999999;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(isAll&&i>0){
                if(a[i]!=a[i-1])
                    isAll=false;
            }
            maxE=max(maxE,a[i]);

        }
        if(n==1||isAll){
            cout<<-1<<"\n";
        }
        else{
            bool wefound=false;
            for(ll i=0;i<n;i++){
                if(a[i]==maxE){
                    // check if i-1 or i+1 is less than this
                    if((i>0&&a[i-1]<maxE)||(i<n-1&&a[i+1]<maxE)){
                        wefound=true;
                        cout<<i+1<<"\n";
                        break;
                    }
                }
            }
            if(wefound==false)
                cout<<-1<<"\n";
        }
    }
return 0;
}
