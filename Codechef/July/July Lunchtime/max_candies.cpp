
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
	ll giveRes(ll n,ll m,ll a,ll b){
   	ll greaterR=0,smallerR=0,resG=0,res=0,resS=0,factor=0;
		     	if(n%2==0)
                 greaterR=n/2;
                else
                 greaterR=(n+1)/2;
                smallerR=n-greaterR;
                resG+=a*greaterR;
                resG+=b*smallerR;
                if(m%2==0){
                	factor=m/2;
                	resG*=(m/2);
                }
                else{
                	factor=(m+1/2);
                   resG*=(m+1)/2;
                }
                resS+=b*greaterR;
                resS+=a*smallerR;
               resS*=factor;
 
        return resS+resG;
	}
	int main()
	{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif

		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
         ll n,m,x,y;
         ll a,b;
         cin>>n>>m>>x>>y;
         //calculate 2 values to place 
           if(y>x){
             a=x;
             b=y-x>y?x:y-x;
          
	       if(a==b){
	       	cout<<(n*m*a)<<"\n";
	       }
	       else{
	       	ll res=0;
	         	res+=giveRes(n,m,a,b);
            cout<<res<<"\n";
	       }   
           }
         else{  
          if(y%2==0){
              a=b=y/2;
          }			
          else{
          	a=(y+1)/2;  //a will be greater
          	b=y-a;
          }
	       if(a==b){
	       	cout<<(n*m*a)<<"\n";
	       }
	       else{
	       	ll res=0;
	         	res+=giveRes(n,m,a,b);
            cout<<res<<"\n";
	       }
		}
	}
		return 0;
	}
