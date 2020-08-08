#include <bits/stdc++.h>
using namespace std;
template <typename T>

class node{  
    public:
    T data;
    node *next=NULL;
  
  
   node(T data=0,node *next=NULL){
   	   this->data=data;
   	   this->next=next;
   }
   node* insert(T data, node* prev){
   	   node<T>* n = new node<T>(data);
   	 if(prev!=NULL)
   	   prev->next=n;
   	   return n;
   }
   deleteNodePos(node* start,int pos){
   	   node* prev;
   	   node*b=start;
     
   	   while(pos){
           prev=b;
            b=b->next;
   	    	pos--;
   	   }
   	   prev->next=b->next;
   } 
};

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/Competitive programming/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("E:/Competitive programming/output.txt", "w", stdout);
    #endif
    int n;
    int value;
    cout<<"Enter size of list\n";
    cin>>n;
    cout<<"Enter values\n";
    node<int> *prev=NULL;
    node<int> *start;
    node<int> obj;
    for(int i=0;i<n;i++){
    	cin>>value;
      prev= obj.insert(value,prev);
      if(i==0)
      start=prev; 
    }   
    obj.deleteNodePos(start,1);
     node<int>* curr=start;
   while(curr!=NULL){
    	cout<<curr->data;
    	curr=curr->next;
    }
	return 0;
}
