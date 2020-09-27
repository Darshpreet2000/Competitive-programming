#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool findv(char mat[10][10],int m,int n,int i,int j,bool out[10][10]){
      if(i==m&&j==n){
        for(int k=0;k<=m;k++){
            for(int l=0;l<=n;l++){
                cout<<out[k][l]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        return true;
     }

       if(i>m||j>n)
        return false;
     if(mat[i][j]=='X')
        return false;

   out[i][j]=1;
   bool right=findv(mat,m,n,i,j+1,out);

   bool down=findv(mat,m,n,i+1,j,out);

   out[i][j]=0;

   if(left||right)
    return true;


 return false;
}
int main(){

char mat[10][10]={"00X0",
                  "0000",
                  "0000",
                  "0000"};
    bool out[10][10]={0};
    findv(mat,3,3,0,0,out);
return 0;
}
