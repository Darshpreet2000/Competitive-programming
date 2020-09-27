#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll b[1000];
void merge(ll *a,ll s,ll e){
    ll mid=(s+e)/2;
   ll temp[100],i=s,j=(s+e)/2+1,k=s;
   while(i<=mid&&j<=e){
       if(a[i]<a[j]){
         temp[k]=a[i];
         k++;
         i++;
       }
       else{
         temp[k]=a[j];
         k++;
         j++;
       }

   }
   while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }

 for(int i=s;i<=e;i++){
    a[i]=temp[i];
 }
}
void merge_sort(ll s, ll e,ll a[]){
 if(s>=e){
    return;
 }
    ll mid=(s+e)/2;
    merge_sort(s,mid,a);
    merge_sort(mid+1,e,a);
     merge(a,s,e);
}
int main(){

    ll n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge_sort(0,n-1,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}
