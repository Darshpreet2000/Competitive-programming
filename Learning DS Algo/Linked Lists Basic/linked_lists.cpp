
#include<iostream>
using namespace std;
#define ll long long int
class node{
    public:
    int val;
    node*next=NULL;
    node(int val){
      this->val=val;
      next=NULL;
    }
};
int main(){

    int n;
    cin>>n;
    node *start;
    int inp;
    node *prev;
    for(int i=0;i<n;i++){
         cin>>inp;
         node *np=new node(inp);
         if(i==0){
            start=np;
            prev=start;
        }
        else{
        prev->next=np;
        prev=np;
        }
    }
    node * itr=start;
     while(itr!=NULL){
         cout<<itr->val<<" ";
         itr=itr->next;
     }
return 0;
}
