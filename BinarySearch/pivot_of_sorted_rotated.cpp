#include<iostream>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll beg=0,end=n-1;
    while(beg<end){
       ll mid=(beg+end)/2;
        if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]){
                //pivot found
                 cout<<mid;
                 break;
        }
        else if(a[mid]<=a[n-1]){
            end=mid-1;
        }
        else if(a[mid]>a[n-1])
            beg=mid+1;
    }

}
