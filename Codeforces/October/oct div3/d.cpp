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
            bool isAll=true;
            for(ll i=0;i<n;i++){
                cin>>a[i];
                if(i>0&&isAll){
                    if(a[i-1]!=a[i])
                        isAll=false;
                }
            }
            if(isAll==true){
                cout<<"NO"<<"\n";
            }
            else{
                cout<<"YES"<<"\n";
                vector<pair<ll,ll>> v;
                ll c[n+1]={0};
                ll count=0;
                ll i=0;
                ll root=a[0];
                ll element;

                for(ll i=1;i<n;i++){
                    if(a[i]!=a[0]){
                            element=i;
                        break;
                    }
                }
                for(ll i=1;i<n;i++){

                          if(a[i]!=root){
                            // now connect them
                            v.push_back(make_pair(1,i+1));

                          }
                          else{
                            v.push_back(make_pair(element+1,i+1));
                          }

                }


                for(auto var:v){
                    cout<<var.first<<" "<<var.second<<"\n";
                }
            }

    }
return 0;
}
