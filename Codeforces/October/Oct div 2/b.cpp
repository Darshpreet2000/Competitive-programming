#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
      ll n;
      cin>>n;
      ll i,j;
      if(n%2==0){
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j||(i+j)==n-1)
                cout<<1<<" ";
             else
                cout<<0<<" ";
        }
            cout<<"\n";
      }
      }
      else{

      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(i==0&&j==n/2){
                    cout<<6<<" ";
                }
                else if(i==n-1&&j==n/2){
                    cout<<6<<" ";
                }
                else if((i==0&&j==n-1)||(i==n-1&&j==0)){
                    cout<<6<<" ";
                }
                else if((i==n/2&&j==0)||(i==n/2&&j==n-1)){
                    cout<<6<<" ";
                }
           else if(i==j||(i+j)==n-1)
                cout<<1<<" ";
             else
                cout<<0<<" ";
        }
            cout<<"\n";
      }

      }

    }
return 0;
}
