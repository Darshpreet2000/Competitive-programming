#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};
void cal(char s[],char e[],int i,int j){
   if(s[i]=='\0'){
    e[j]='\0';
    cout<<e<<"\n";
     return;
   }
   int digit=s[i]-'0';
   if(digit==0 or digit==1){
      cal(s,e,i+1,j);
   }
   for(int k=0;hashTable[digit][k]!='\0';k++){

      e[j]=hashTable[digit][k];
      cal(s,e,i+1,j+1);
   }

    return;
}
int main(){

    char s[100],e[100];
    cin>>s;
    cal(s,e,0,0);
return 0;
}
