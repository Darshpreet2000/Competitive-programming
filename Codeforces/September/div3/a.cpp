#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
            float n,x;
    cin>>n>>x;
          if(n==1||n==2){
            cout<<1<<"\n";
          }else{
              n-=2;
              float div=n/x;
              int approx=ceil(div);
              approx+=1;
              cout<<approx<<"\n";
            }
          }

return 0;
}
