#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    ll a[n],item;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>item;
    ll beg=0,end=n-1,mid;

      while(beg<=end){
           mid=(beg+end)/2;
        if(a[mid]==item){
            cout<<mid;
            break;
        }
       else if(a[mid]>=a[0]){
          if(a[mid]>item&&item>=a[0])
           end=mid-1;
          else if(a[mid]>item&&item<a[0])
            beg=mid+1;
        else{
            beg=mid+1;
        // cout<<""<<beg<<" "<<end;
          }
        }
        else if(a[mid]<=a[n-1]){
           if(item>a[mid]&&item<=a[n-1])
             beg=mid+1;
           else if(item>a[mid])
            end=mid-1;
            else
                beg=mid+1;
        }
    }
  return 0;
}
