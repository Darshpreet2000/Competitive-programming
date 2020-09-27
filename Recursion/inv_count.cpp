#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll merg(ll beg,ll end,ll a[]){
  ll i=beg;
  ll mid=(beg+end)/2;
  ll j=mid+1;
  sort(a+beg,a+mid);
  sort(a+mid+1,a+end);
  ll count=0;
  while(i<=mid&&j<=end){
    if(a[i]>a[j]){
        count+=mid-i+1;
        j++;
    }
    else{
        i++;
    }
  }
  return count;
}
ll inv_count(ll a[],ll beg,ll end){
   if(beg>=end)
    return 0;

   ll mid=(beg+end)/2;
  ll left= inv_count(a,beg,mid);

  ll right= inv_count(a,mid+1,end);

  ll current=merg(beg,end,a);

  return left+right+current;
}
int main(){

   ll n;
   cin>>n;
   ll a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   cout<<inv_count(a,0,n-1);
return 0;
}
