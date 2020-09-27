#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void replace(char s[],int i){
//base case
    if(s[i]=='\0'||s[i+1]=='\0'){
        return;
    }
    if(s[i]=='p'&&s[i+1]=='i'){
          //start replacing

          int j=i+2;
          while(s[j]!='\0'){
            j++;
          }

       while(j>=i+2){
           s[j+2]=s[j];
           j--;
       }

       s[i]='3';
       s[i+1]='.';
       s[i+2]='1';
       s[i+3]='4';
     return replace(s,i+3);
    }
    else
     return replace(s,i+1);

}
int main(){

    char s[10000];
     cin>>s;
    replace(s,0);
    cout<<s;
return 0;
}
