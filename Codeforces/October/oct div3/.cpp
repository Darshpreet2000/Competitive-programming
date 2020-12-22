#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){

        ll num1=0;
        ll n;
        cin>>n;
        ll a[n+1];
        // get last pos of 1;
        ll last_pos_1;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                    last_pos_1=i;
                num1++;
            }
        }
        if(num1==1){
            cout<<0<<"\n";
        }
        else{
        ll num0=0;
            // count zeroes
            bool check=false;
            for(ll i=0;i<n;i++){
                if(a[i]==1&&check==false){
                    check=true;
                }
                if(a[i]==0&&check&&i<=last_pos_1)
                    num0++;
            }
          cout<<num0<<"\n";
        }
    }
return 0;
}
