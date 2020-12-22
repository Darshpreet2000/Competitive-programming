#include <iostream>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    int lps[b.length()];
    lps[0]=0;
    int i=1,j=0;
    while(i<b.length()){
        if(b[i]==b[j]){
            lps[i]=j+1;
            i++;
            j++;
        }
        else{
            if(j==0){
                lps[i]=0;
                i++;
            }
            else{
                j=lps[j-1];
            }
        }

    }
    j=0;
    i=0;
     while(i<a.length()){
         if(a[i]==b[j]){
             j++;
             i++;
         }
         else{
             if(j==0)
             i++;
             else
            j=lps[j-1];
         }

         if(j==b.length()){
             break;
         }
    }
   if(j==b.length())
       cout<<"True";
   else
       cout<<"False";
}
