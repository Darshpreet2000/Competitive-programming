#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll r,c;
       cin>>r>>c;
           if(r==1){
             cout<<"U";
             for(ll i=1;i<c;i++)
                cout<<"R";
           }
           else
            cout<<"L";
           cout<<"\n";
    }
return 0;
}
