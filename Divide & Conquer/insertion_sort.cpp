#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
         int val=a[i];
         int hole=i;
         while(hole>0&&a[hole-1]>val){
            a[hole]=a[hole-1];

            hole--;
         }
         a[hole]=val;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
return 0;
}
