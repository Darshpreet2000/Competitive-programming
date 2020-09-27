#include<bits/stdc++.h>
using namespace std;
#define ll int

void generate(char s[],ll n,ll i,ll o,ll c){
      if(c==n){
        //print
        s[i]='\0';
        cout<<s;
        cout<<"\n";
        return;
      }
      if(c<o){
        s[i]=')';
        generate(s,n,i+1,o,c+1);
      }

      if(o<n){
        s[i]='(';
        generate(s,n,i+1,o+1,c);
      }



    return;
}
int main(){

       ll n;

       char out[1000000];
       cin>>n;
       cout<<"O of "<<"\n";
       generate(out,n,0,0,0);


return 0;
}
