#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
        ll A,B,C;
        cin>>A>>B>>C;

        if(A>B){
            swap(A,B);
        }
        if(B>C){
            swap(B,C);
        }
        cout<<B<<"\n";
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


