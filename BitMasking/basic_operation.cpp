#include <bits/stdc++.h>
using namespace std;

int getIth(int n,int pos){
    int num=n&(1<<pos);
    if(num>0)
      return 1;
    else
      return 0;   
}

int setBit(int n,int pos){
   //1011010
   //0000100
    int num=n|(1<<pos);
   return num;
}

int clearBit(int n,int pos){	
     //1011010
    //1110111 
   // ~1<<i
   int mask=1<<pos;
   mask=~mask;
   int num=n&mask;
 return num;
}

int clearRangeOfBits(int n,int pos){
   //From Last
   // Make mask
   int mask=~0;
   mask=mask<<pos;  
   int num=mask&n;
  
  return num;
}

int clearRangeOfBitsItoJ(int n,int i,int j){
    int one=~0;
    one=one<<j;
    int p=(pow(2,(i-1))-1);
    int mask=one|p;
    n=n&mask;
    return n;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif
    //Finding ith bit
    int n,i,j,mask;
    cin>>n;
    cin>>i;
    cin>>j;
    //11001101   1101
    //00000100   1100
    cout<<clearRangeOfBitsItoJ(n,i,j);
    return 0;
}
