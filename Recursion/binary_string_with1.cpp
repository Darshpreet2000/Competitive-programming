#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll comp(char s[],ll i,ll n){
    if(i==n){
        s[i]='\0';
        return 1;
    }

    ll cal=0;
    if(i>0&&s[i-1]!='1'){
        s[i]='1';

    cal+=comp(s,i+1,n);
    }
    if(i==0){
        s[i]='1';
    cal+=comp(s,i+1,n);

    }


    s[i]='0';
    cal+=comp(s,i+1,n);

   return cal;
}
int main(){

    ll n;
    cin>>n;
    char s[100];
    cout<<comp(s,0,n)<<"\n";
return 0;
}
