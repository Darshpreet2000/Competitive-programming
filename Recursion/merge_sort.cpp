#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void merge(ll beg,ll end,ll a[]){
    ll mid=(beg+end)/2;
    ll i=beg;
    ll j=mid+1,k=0;
    ll temp[end+1];
    while(i<=mid and j<=end){
      if(a[i]<a[j])
        temp[k++]=a[i++];
      else
        temp[k++]=a[j++];
    }
    // Now copy all remaining elements
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=end){
        temp[k++]=a[j++];
    }
    //copy temp in a[]
    k=beg;
    i=0;
    int num=end-beg+1;
    for(k=beg;k<=end;k++){
       a[k]=temp[i++];
    }
    return;
}
void merge_sort(ll beg,ll end,ll a[]){

    if(beg>=end){
        return;
    }

    ll mid=(beg+end)/2;

    merge_sort(beg,mid,a);
    merge_sort(mid+1,end,a);

     merge(beg,end,a);
  return;
}
int main(){

    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    merge_sort(0,n-1,a);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
return 0;
}
