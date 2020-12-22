	#include <bits/stdc++.h>
	#define endl "\n"
	#define ll long long int	
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
	       ll cost=0,n,num,ip;
	       vector<ll> z,e,a,b,c,d;
	       unordered_map<ll,ll>arr,crr;
	       cin>>n;
	       for(int i=0;i<n;i++){
             cin>>num;
               e.push_back(num);
           }
	       	sort(e.begin(),e.end());
	       for(int i=0;i<n;i++){
              cin>>ip;
             z.push_back(ip);
           } 
           sort(z.begin(),z.end());
	     
           for(int i=0;i<n;i++){
	       		num=e[i];
         
              auto it=find(a.begin(),a.end(),num);          
              if(e[i]==z[i]){
               	continue;
               }
                else  if(it==a.end()){
            //     arr[num]++;

                a.push_back(num);
               }else{
               	 b.push_back(num);
              arr[num]++;
               }  
            
	       	num=z[i];
               it=find(c.begin(),c.end(),num);
               if(it==c.end()){
          //   crr[num]++;
               	 c.push_back(num);
               }
              else{
               crr[num]++;
                d.push_back(num);
              }
           }
               //Now b & d contains extra element
            if(b.size()!=d.size()){              
               cout<<"-1"<<"\n";
            }
            else if(b.empty()&&d.empty()&&!a.empty()&&!c.empty()){
            
            	sort(a.begin(),a.end());
            	bool Is=true;
                sort(c.begin(),c.end());
                for(ll i=0;i<n;i++){
                  if(a[i]!=c[i]){
                  	cout<<"-1"<<"\n";
                  	Is=false;
                  	break;
                  }	
                }
                if(Is==true)
                cout<<"0"<<"\n";     
            }
            else{
             
             bool toCheck=true;
               sort(b.begin(),b.end());
               sort(d.begin(),d.end());
           
               for(int i=0;i<b.size();i++){
                	if(b[i]!=d[i]){

                	//Insert if really needed
                   if(arr[d[i]]!=crr[d[i]]||arr[b[i]]!=crr[b[i]]){            
              //  	cout<<" Arr "<<d[i]<<" "<<arr[d[i]]<<"\n";
             //   	cout<<" Crr "<<d[i]<<" "<<crr[d[i]]<<"\n";
                	cost+=min(b[i],d[i]);
                    a.push_back(d[i]);
                    arr[d[i]]++;
                    c.push_back(b[i]);
                    crr[b[i]]++;
                   }
                   else{
                    arr[b[i]]++;
                    crr[d[i]]++;
                    a.push_back(b[i]);
                    c.push_back(d[i]);
                   }
                 }
               }     

               sort(a.begin(),a.end());
               sort(c.begin(),c.end());

               for(int i=0;i<a.size();i++){
                   if(a[i]!=c[i]){
                   	cout<<"-1"<<"\n";
                     toCheck=false;
                     break;
                   }
               }
               if(toCheck)
               	cout<<cost<<"\n";
	       }
		 
		}
	return 0;
}
