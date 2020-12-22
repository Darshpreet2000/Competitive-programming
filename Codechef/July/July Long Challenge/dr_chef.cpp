	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main()
	{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
	       ll n,x,num,vac,days=0;
	       std::vector<ll> v,copyVector;
	       cin>>n>>x;
           for(ll i=0;i<n;i++){
           	cin>>num;
           	v.push_back(num);
           }
           //ai=ai+1=ai+2
           //we can serve any of them
           //start from beginning
            vac=x;
            sort(v.begin(),v.end());
     ll k=0;
         while(accumulate(v.begin(),v.end(),0)!=0){
         	//equal
         	//just less than
         	// greater
        ll i,cur,prev;
        for(int j=n-1;j>=0;j--){
           cur=j;
           if(v[j]==0){
            break;
           }
            else if(v[j]==vac){
              i=j;
              break;
            }
            else if(v[j]<vac){
              i=j;
              break;
            }
            else if(j!=n-1){
               if(v[cur]>vac){
                i=cur;
               }
               else{
              i=prev;
              break;     
               }    
            }
            prev=cur;
        }
               ll corona=v[i];
               while(corona!=0){
                days++;
                 ll left,vacused;
                 if(vac>=corona){
                   left=0;
                   vacused=corona;   
               }
                else{
                   left = corona-vac;
                    vacused=vac;
                }
                corona=left*2;
                if(corona>v[i])
                	corona=v[i];
                vac=vacused*2;
               }
               v[i]=corona;
              k++;
            sort(v.begin(),v.end());
            
            } 
            cout<<days<<"\n";
  		}
		return 0;
}
