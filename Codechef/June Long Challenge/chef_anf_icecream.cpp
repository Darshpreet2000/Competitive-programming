    #include <bits/stdc++.h>
	using namespace std;
	int main(){
		 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--){
	     	bool sold=true;
			int n,a[1000],b[1000],c5=0,c10=0,j=1;
			cin>>n;
            for(int i=0;i<n;i++){
            	b[i]=2;
            	cin>>a[i]; 
                               
           }

           for(int i=0;i<n;i++){
            	if(a[0]!=5){
            		j=0;
            		break;
            	}
            else{

              if(a[i]==5){
              	c5+=5;
              }
              else if(a[i]==10){
                   if(c5>=5){
                   	c5-=5;
                   	c10+=10;
                   }  
                   else{
                   	j=0;
                   	break;
                   }
              }
              else if(a[i]==15){
              	if(c10>=10){
              		c10-=10;
              	}
              	else if(c5>=10){
                     c5-=10;
              	}
              	else{
              		j=0;
              		break;
              	}
              }
           }	
        }
			cout<<(j==1?"YES":"NO")<<"\n";
		}
		return 0;
	}
