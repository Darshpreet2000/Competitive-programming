#include <iostream>
using namespace std;
int createHashValue(string str,int q){
    int hash=0;
     for(int i=0;i<str.length();i++){
          hash+=(str[i]*pow(q,i));
     }
     return hash;
}
int reCalculateHash(string s,int oldIndex,int newIndex,int oldHash,int patLen){
    oldHash-=s[oldIndex];
    oldHash/=q;
    oldHash+=s[newIndex]*pow(q,patLen-1);
    return oldHash;
}
bool checkEqual(string s1,string s2,int start1,int end1,int start2,int end2){
       if(end1-start1!=end2-start2)
         return false;
         while(start1<=end1){
             if(s1[start1]!=s2[start2])
              return false;
             start1++
             start2++;
         }
        return true;
}
int main() {
    string t="abcdefghijk";
    string p="fgh";
    int patHash=createHashValue(p,3);
    int textHash=createHashValue(t,3);
    for(int i=0i<=t.length()-p.length();i++){
        if(patHash==textHash && checkEqual(t,p,i,i+pat.length()-1,0,p.length()-1)){
              cout<<i<<endl;
              return 0;
        }
        if(i<str.length()-pat.length()){
            textHash=reCalculateHash(t,i,i+pat.length(),textHash,p.length());
        }
    }
    return 0;
}

