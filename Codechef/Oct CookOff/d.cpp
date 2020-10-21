#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
       ll d;
       cin>>d;
       if(d<=(100000-2)){
        cout<<2<<"\n";
        cout<<d+2<<" "<<d+1<<"\n";
       }
       else{
         int remainder=(d%(100000-2));
         int q=(d/(100000-2));
         vector<ll> v;
         d=100000-2;
         while(q!=0){
            v.push_back(d+2);

            v.push_back(d+1);


            v.push_back(1);
            q--;
         }
         if(remainder>0){
             v.push_back(remainder+2);

             v.push_back(remainder+1);
         }
         cout<<v.size()<<"\n";
         for(auto in:v){
            cout<<in<<" ";
         }
         cout<<"\n";
       }
    }
return 0;
}
