#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll binary(ll a[],ll beg,ll end,ll key){
  if(beg>end)
    return -1;
  ll mid=(beg+end)/2;
 if(a[mid]==key)
    return mid;

   if(key<=mid){
    end=mid-1;
   return binary(a,beg,end,key);
   }
   else{
     beg=mid+1;
   return binary(a,beg,end,key);
   }
}
int main(){

    ll n;
    cin>>n;
    ll a[n],key;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    cout<<binary(a,0,n-1,key);
return 0;
}
