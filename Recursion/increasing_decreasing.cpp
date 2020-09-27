#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void incr(ll n){
    if(n==0)
        return;

    incr(n-1);
    cout<<n;

}
void decr(ll n){
    if(n==0)
        return;

     cout<<n;
    decr(n-1);

}
int main(){

    ll n;
    cin>>n;
    incr(n);
    cout<<"\n";
    decr(n);

return 0;
}
