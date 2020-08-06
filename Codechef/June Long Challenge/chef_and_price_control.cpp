
	#include <bits/stdc++.h>
	
	
	using namespace std;
	int main()
	{
		#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif
	
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			
			int n,k,num,si=0,sf=0;
			cin>>n>>k;
			for(int i=0;i<n;i++){
				cin>>num;
				si+=num;
				if(num>k){
					sf+=k;
				}
				else{
					sf+=num;
				}
			}
			cout<<si-sf<<"\n";
		}
		return 0;
	}
