#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(){
      ll n,k;
      cin>>n>>k;
      ll a[n+1];
      for(ll i=1;i<=n;i++) cin>>a[i];
      ll max_so_far=0;
      ll supply=k;
      ll count=0;
      ll left,right;
      left=1,right=1;
      ll l=1,r=1;
      while(left<=right&&right<=n){
         if(a[right]==1){
            if(right-left+1>max_so_far){
                max_so_far=max(max_so_far,right-left+1);
                 l=left;
                 r=right;
            }
                right++;
         }
         else if(a[right]==0){
            count++;
            while(count>k){
                if(a[left]==0){
                    count--;
                }
                left++;
             }
              if(right-left+1>max_so_far){
                max_so_far=max(max_so_far,right-left+1);
                 l=left;
                 r=right;
            }
           right++;
         }
      }
      cout<<max_so_far<<"\n";
      if(max_so_far==0)
        l=0,r=0;
      for(ll i=1;i<=n;i++){
        if(i>=l&&i<=r){
            cout<<1<<" ";
        }
        else
            cout<<a[i]<<" ";
      }

}
int main(){
    fast
    ll T=1;
   // cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


