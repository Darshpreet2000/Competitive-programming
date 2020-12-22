#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
   ll n;
   cin>>n;
    if(n<=9)
        cout<<n<<"\n";
    else{
            ll sum=0;
         ll i=9;
         vector<ll> digit;
         for(i=9;i>=1;i--){
            if((sum+i)<=n){
               sum+=i;
               digit.push_back(i);
            }
         }
         ll remain=n-sum;
         if(remain!=0){
            cout<<-1<<"\n";
         }
         else{
                reverse(digit.begin(),digit.end());
              for(auto i:digit)
                cout<<i;
              cout<<"\n";
         }
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


