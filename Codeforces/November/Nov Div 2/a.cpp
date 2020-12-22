#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T;
    cin>>T;
    while(T--){
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        reverse(b.begin(),b.end());
        bool flag=true;
        if((a[n-1]+b[n-1])>x){
            flag=false;
            cout<<"No"<<"\n";
        }
        else
        for(ll i=0;i<n;i++){
            if((a[i]+b[i])>x){
                cout<<"No"<<"\n";
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"Yes"<<"\n";
    }
return 0;
}

