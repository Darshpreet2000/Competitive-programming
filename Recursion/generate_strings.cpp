#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void generate(char s[],char e[],int i,int j){
     if(s[i]=='\0'){
        e[j]='\0';
       for(int i=0;e[i]!='\0';i++){
      cout<<e[i]<<", ";
       }
        cout<<"\n";
        return;
     }

     if(i==0){
        e[j]=s[i]-'0'+'A'-1;
     return  generate(s,e,i+1,j+1);
     }
     //two conditions
     //seperate
     e[j]=s[i]-'0'+'A'-1;
     generate(s,e,i+1,j+1);
     // add to previous
     ll digit=e[j-1]-'A'+1;
     if(digit<=2&&!(digit==2&&(s[i]-'0')>6)){
     digit*=10;
     digit+=(s[i]-'0');
     char ch=digit+'A'-1;
     e[j-1]=ch;
  //   cout<<ch<<"\n";
     generate(s,e,i+1,j);
    }
}
int main(){

  char s[100],e[100];
  cin>>s;
  generate(s,e,0,0);

return 0;
}
