#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll n=rand()%9+1;
       ll p=rand()%n+1,x=rand()%1000+1;
       ll k=rand()%n+1;

       cout<<n<<" "<<x<<" "<<p<<" "<<k<<"\n";
       for(int i=0;i<n;i++){
         cout<<rand()%10<<" ";
       }
       cout<<"\n";
    }
    int k;
    cin>>k;
return 0;
}
