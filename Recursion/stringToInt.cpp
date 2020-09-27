#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int recur(string str,int n){
   if(n==0){
    return 0;
   }

   int sum=recur(str,n-1);

   char charAtI=str[n-1];
   int numAtI=charAtI-'0';

   sum*=10;
   sum+=numAtI;
   return sum;
}
int main(){

    string str;
    cin>>str;
    cout<<recur(str,str.length());
return 0;
}
