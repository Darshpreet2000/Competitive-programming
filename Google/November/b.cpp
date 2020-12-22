#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e18
void Solve(ll t){
   ll l,r;
   cin>>l>>r;
   ll count=0;
   for(ll i=l;i<=r;i++){
       ll digits=floor(log10(i)+1);
       //now start extracting
       ll num=i;
       if(num!=0){
           if(digits%2==0){
              bool k=0;
                while(num){
                    ll d=num%10;
                    if(d%2==0&&k==1||d%2!=0&&k==0){
                        break;
                    }
                    num=num/10;
                    k=!k;
                }
                if(num==0){
                    count++;
                }
           }
           else{
                bool k=1;
                while(num){
                    ll d=num%10;
                    if(d%2==0&&k==1||d%2!=0&&k==0){
                        break;
                    }
                    num=num/10;
                    k=!k;
                }
                if(num==0){

                    count++;
                }
           }
      }
   }
   cout<<"Case #"<<t<<": "<<count<<"\n";

}
int main(){
    fast
    ll count=0;
    ll T;
    cin>>T;
    while(T--){
      Solve(++count);
    }
return 0;
}


