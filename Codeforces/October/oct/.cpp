#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll T;
    cin>>T;
    while(T--){
      ll n;
      cin>>n;
      char s[n+1][n+1];
      for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            cin>>s[i][j];
        }
      }
      //check
      //1,2 2,1  and n,n-1 n-1,n
      ll f=s[n][n-1]-'0'+s[n-1][n]-'0';
      ll st=s[1][2]-'0'+s[2][1]-'0';
      // no
      if(st==0&&f==2||(st==2&&f==0)){
          cout<<0<<"\n";
      }
      else{
        if((st==0&&f==0)||(st==2&&f==2)){
          cout<<2<<"\n";
          cout<<1<<" "<<2<<"\n";
          cout<<2<<" "<<1<<"\n";
        }
        else{
           // st or f is 1
           if(st==1&&f!=1){
               if(f==0){

                     cout<<1<<"\n";
                    // make to 1
                 if(s[1][2]-'0'!=1){

                    cout<<1<<" "<<2<<"\n";
                 }else{
                    cout<<2<<" "<<1<<"\n";
                 }
               }
               else if(f==2){
                    // make 0

                     cout<<1<<"\n";
                 if(s[1][2]-'0'!=0){
                    cout<<1<<" "<<2<<"\n";
                 }else{
                    cout<<2<<" "<<1<<"\n";
                 }
               }
           }
           else if(f==1&&st!=1){
              if(st==0){
                    cout<<1<<"\n";
                    // make to 1
                 if(s[n-1][n]-'0'!=1){

                    cout<<n-1<<" "<<n<<"\n";
                 }else{

                    cout<<n<<" "<<n-1<<"\n";
                 }
               }
               else if(st==2){
                    cout<<1<<"\n";
                    // make to 1
                 if(s[1][2]-'0'!=1){

                    cout<<n-1<<" "<<n<<"\n";

                 }else{
                    cout<<n-1<<" "<<n<<"\n";

                 }
               }
           }
           else if(st==1&&f==1){
                cout<<2<<"\n";
                  if(s[n-1][n]-'0'!=0){
                   cout<<n-1<<" "<<n<<"\n";
                  }else{

                   cout<<n<<" "<<n-1<<"\n";
                  }

                  if(s[1][2]-'0'!=1){
                   cout<<1<<" "<<2<<"\n";
                  }else{

                   cout<<2<<" "<<1<<"\n";
                  }
           }
        }
      }

    }
return 0;
}
