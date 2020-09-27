#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isSorted(ll n,ll a[]){
  if(n==0||n==1)
    return true;


    if(a[n]>=a[n-1])
        return isSorted(n-1,a);

    else
     return false;
}
int main(){

    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

     if(isSorted(n-1,a))
            cout<<"Yes";
     else
        cout<<"No";

return 0;
}
