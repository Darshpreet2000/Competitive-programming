#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void generate(int n,char s[],int open,int close,int l){

    if(l==2*n){
        s[l]='\0';
        cout<<s<<"\n";
    }

    if(open<n){
      s[l]='(';
      generate(n,s,open+1,close,l+1);
    }
    if(close<open){
        s[l]=')';

    generate(n,s,open,close+1,l+1);

    }
}

int main(){

    ll n;
    char s[100];
    cin>>n;
    generate(n,s,0,0,0);

return 0;
}
