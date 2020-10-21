#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T;
    cin>>T;
    while(T--){
            ll n;
            cin>>n;
            ll a[n];
            ll sumi=0;
            bool checkIfHave0=false;
            for(ll i=0;i<n;i++){
                cin>>a[i];
                sumi+=a[i];

            }
            if(sumi==0){
                cout<<"NO"<<"\n";
            }
            else{
                if(sumi<0)
                sort(a,a+n);
                else
                sort(a,a+n,greater<ll>());
                cout<<"YES"<<"\n";
                for(ll i=0;i<n;i++)
                    cout<<a[i]<<" ";
            }


    }
return 0;
}
