#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        if(nums.size()>=4)
        for(int i=0;i<nums.size()-3;i++){
          for(int j=i+1;j<nums.size()-2;j++){
               for(int k=j+1;k<nums.size()-1;k++){
                   int remain=target-(nums[i]+nums[j]+nums[k]);
                   bool found=false;
                   int beg=k+1;
                   int end=nums.size()-1;
                   int indx=0;
                   while(beg<=end){
                       int mid=(beg+end)/2;
                       if(nums[mid]==remain){
                           found=true;
                           indx=mid;
                           break;
                       }
                       if(nums[mid]>remain){
                           end=mid-1;
                       }
                       else{
                           beg=mid+1;
                       }
                   }
                   if(found){
                            vector<int> x;
                             x.push_back(nums[i]);
                             x.push_back(nums[j]);
                             x.push_back(nums[k]);
                             x.push_back(nums[indx]);
                             v.push_back(x);
                         }
               }
            }
          }
        return v;
    }
void Solve(){
     ll n;
     cin>>n;
     ll t;
     cin>>t;
     vector<ll> v;
     for(ll i=0;i<n;i++){
            ll inp;
     cin>>inp;
        v.push_back(inp);
     }

     fourSum(v,t);
}
int main(){
    fast
    ll T=1;
//    cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


