#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll partition(ll a[],ll beg,ll end){

     ll i=beg-1;
     ll j=beg;
     for(;j<=end-1;){
        if(a[j]<a[end]){
            i++;
            swap(a[i],a[j]);
        }
        j+=1;
     }
     i++;
     swap(a[i],a[end]);
     return i;
}
void quick(ll a[],ll beg,ll end){
    if(beg>=end)
        return;

    ll p =partition(a,beg,end);

    quick(a,beg,p-1);

    quick(a,p+1,end);
}
int main(){


    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

        quick(a,0,n-1);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
return 0;
}
