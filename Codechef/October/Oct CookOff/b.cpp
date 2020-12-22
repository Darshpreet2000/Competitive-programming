#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
      ll l,r;
      cin>>l>>r;
      if(r-l>l||(r%l)==0)
        cout<<-1<<"\n";
      else
        cout<<r<<"\n";
    }
return 0;
}
