#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void recur(int n){
  if(n==0)
    return;

    recur(n/10);

    int num=n%10;
    switch(num){
     case 0:
          cout<<"zero ";
           break;

     case 1:
          cout<<"one ";
           break;

     case 2:
          cout<<"two ";
           break;
     case 3:
          cout<<"three ";
           break;

     case 4:
          cout<<"four ";
           break;

     case 5:
          cout<<"five ";
           break;

     case 6:
          cout<<"six ";
           break;
     case 7:
          cout<<"seven ";
           break;

     case 8:
          cout<<"eight ";
           break;

     case 9:
          cout<<"nine ";
           break;
    }
}
int main(){

    int n;
    cin>>n;
    recur(n);

return 0;
}
