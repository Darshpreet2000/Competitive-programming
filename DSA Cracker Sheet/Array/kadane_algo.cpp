#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
 ll n;
 cin>>n;
 ll a[n+1];
 for(ll i=0;i<n;i++)
    cin>>a[i];
    ll max_so_far=INT_MIN;
    ll sum=0;
   for(ll i=0;i<n;i++){
        sum+=a[i];
        if(sum>max_so_far)
            max_so_far=sum;
        if(sum<0)
            sum=0;
    }
  cout<<max_so_far<<"\n";

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


