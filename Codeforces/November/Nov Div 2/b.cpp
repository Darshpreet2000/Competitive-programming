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
       ll a,b,c,d;
       cin>>a>>b>>c>>d;
       cout<<max(a+b,c+d)<<"\n";
    }
return 0;
}

