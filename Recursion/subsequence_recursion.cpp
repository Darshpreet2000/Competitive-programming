#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void subsequence(char s[],char e[],int i,int j){

    if(s[i]=='\0'){
        e[j]='\0';
        cout<<e<<"\n";
        return;
    }
    e[j]=s[i];

   subsequence(s,e,i+1,j+1);

   subsequence(s,e,i+1,j);
  return;
}
int main(){

    char s[100],e[100];
    cin>>s;
    subsequence(s,e,0,0);

return 0;
}
