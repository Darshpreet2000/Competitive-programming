#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
	
	long long int m,n,p,mat[10000][10000]={0},a,b;
	
	cin>>m>>n>>p;
	for(int i=1;i<=p;i++){
		cin>>a>>b;
       mat[a][b]=-1;
   }
   if(mat[1][1]==-1){
      cout<<0;
    	return 0;
   }
	for(int i=1;i<=m;i++){
        if(mat[i][1]==-1)
        	break;
		mat[i][1]=1;
	}
	for(int i=1;i<=n;i++){
		 if(mat[1][i]==-1)
		 break;	
        mat[1][i]=1;
	}


	for(int i=2;i<=m;i++){
		for(int j=2;j<=n;j++){
            if(mat[i][j]!=-1){
            	if(mat[i][j-1]==-1){
        mat[i][j]=(mat[i-1][j])%1000000007;
            	}
            	else if(mat[i-1][j]==-1){
         mat[i][j]=(mat[i][j-1])%1000000007;
            	}
            else{	
             mat[i][j]=(mat[i][j-1]+mat[i-1][j])%1000000007;
             }
            }
		}
	}
	
	cout<<(mat[m][n])%1000000007<<"\n";
	return 0;
}
