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
	         int k,val,other=10,mat[8][8];
	         cin>>k;
	         int i,j;
	         if(k<=8)
	         	val=1;
	         else if(k>8&&k<=16){
	         	val=2;
	         	other=8-(8-(k-8))-1;
	         }
	         else if(k>16&&k<=24){
	         	val=3;
	         	other=8-(8-(k-16))-1;      	
	         }
	          else if(k>24&&k<=32){
	         	val=4;
	         	other=8-(8-(k-24))-1;      	
	         }
	          else if(k>32&&k<=40){
	         	val=5;
	         	other=8-(8-(k-32))-1;      	
	         }
	          else if(k>40&&k<=48){
	         	val=6;
	         	other=8-(8-(k-40))-1;      	
	         }
	          else if(k>48&&k<=56){
	         	val=7;
	         	other=8-(8-(k-48))-1;      	
	         }
	          else if(k>56&&k<=64){
	         	val=8;
	         	other=8-(8-(k-56))-1;      	
	         }
           for(i=0;i<8;i++){
           	cout<<"\n";
           	for(j=0;j<8;j++){
                if(i==0&&j==0){
                	cout<<"O";
                }
              else if((i==0&&j==k)||(i==val&&j==0)||(i==val)||(j>other&&i==val-1)){
               	cout<<"X";
               }
           	  else{
                cout<<".";
           	  }
           	 }
           }            
		}
		return 0;
	}
