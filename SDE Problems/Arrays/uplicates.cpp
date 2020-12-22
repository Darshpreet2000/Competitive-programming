#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
    int findDuplicate(vector<int>& nums) {
        int sum_of_n=((nums.size())*(nums.size()+1));
        sum_of_n=sum_of_n/2;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int number= sum_of_n-sum;
        return number;
    }

void Solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    cout<<findDuplicate(v);
}
int main(){
    fast
    ll T=1;
    //cin>>T;
    while(T--){
      Solve();
    }
return 0;
}


