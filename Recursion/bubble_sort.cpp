#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void bubble_sort(ll n,ll a[],ll i){
 if(i==n-1)
    return;
 bubble_sort(n,a,i+1);
  if(a[i]>a[i+1]){
    swap(a[i],a[i+1]);
    bubble_sort(n,a,i+1);
  }
  return;
}
int main(){

    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(n,a,0);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}
