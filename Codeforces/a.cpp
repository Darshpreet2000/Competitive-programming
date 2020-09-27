#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
      ll a,b,k,steps=0;
      cin>>a>>b;
      if(b>a){
        ll remainder=(b-a)%10;
        ll quotient=(b-a)/10;
        steps+=quotient;
        if(remainder!=0)
            steps++;
      }
      else if(a>b){
        ll remainder=(a-b)%10;
        ll quotient=(a-b)/10;
        steps+=quotient;
        if(remainder!=0)
            steps++;
      }

      cout<<steps<<"\n";
    }
}


