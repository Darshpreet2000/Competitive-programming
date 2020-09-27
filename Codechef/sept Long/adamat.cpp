#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll T;
   cin>>T;
   while(T--){
     ll n,no_of_incorrect=0,incorrectL=5,correctL;
     cin>>n;
     ll a[n+1][n+1],count=0;
     bool iscorrect=true;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
           if(i==1){
             if(a[i][j]!=(i-1)*n+j){

                if(!iscorrect){


                }
                else{
                 iscorrect=!iscorrect;
                 if(j==2)
                    count++;
                 else
                   count+=2;
                   iscorrect=false;
                }
               no_of_incorrect++;

             }
             else{
                if(!iscorrect)
                    iscorrect=!iscorrect;
                if(j<incorrectL)
                    correctL=j;
             }
           }
        }
     }
     if(no_of_incorrect==0)
        cout<<0<<"\n";
     else{
        cout<<count<<"\n";
     }
   }

return 0;
}
