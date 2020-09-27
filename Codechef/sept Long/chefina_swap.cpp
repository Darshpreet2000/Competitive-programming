#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        ll sum_of_n_num=(n)*(n+1)/2;
        if(sum_of_n_num%2==0){
            if(n%2!=0){

                cout<<n-(n+1)/2<<"\n";
            }
            else{
                cout<<n/2<<"\n";
            }
        }
        else{
            cout<<0<<"\n";
        }
    }
    return 0;
}
