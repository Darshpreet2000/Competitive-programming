#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
class node{
    public:
     int val;
     node *next=NULL;
     node(int val){
       this->val=val;
     }
};
class Stack{

    node *headStack=NULL;
    public:
     void stackInsert(){
         int val;
         cout<<"Enter value to insert"<<endl;
         cin>>val;
         node *s=new node(val);
         s->next=headStack;
         headStack=s;
     }
     void stackRemove(){
          node * temp=headStack;
          headStack= headStack->next;
          delete(temp);
     }
     void stackPrint(){
          node * temp=headStack;
          while(temp!=NULL){
             cout<<temp->val<<" ";
             temp=temp->next;
          }
          cout<<"\n";
     }
};
class Queue{

    node *headQueue=NULL;
    public:
     void queueInsert(){
         int val;
         cout<<"Enter value to insert"<<endl;
         cin>>val;
         node *s=new node(val);
         node *temp=headQueue;
         if(headQueue==NULL){
           headQueue=s;
         }
         else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=s;
         }
     }
     void queueRemove(){
         if(headQueue==NULL)
         cout<<"UnderFlow"<<"\n";
         else
         headQueue=headQueue->next;
     }
     void queuePrint(){
          node * temp=headQueue;
          while(temp!=NULL){
              cout<<temp->val<<" ";
              temp=temp->next;
          }
          cout<<"\n";
     }
};
int main() {
    Stack stack;
    Queue queue;
    cout<<"*************** Welcome Darshpreet Singh *************** "<<endl;
    int ch=0;
    while(ch!=-1){
        cout<<"Enter options: "<<endl;
        cout<<"1. Insert Stack "<<endl;

        cout<<"2. Remove Stack "<<endl;

        cout<<"3. Insert Queue "<<endl;

        cout<<"4. Remove Queue "<<endl;
        cout<<"5. Stack Print "<<endl;

        cout<<"6. Queue Print "<<endl;

        cin>>ch;
        switch(ch){
           case 1: stack.stackInsert();
                   break;
           case 2: stack.stackRemove();
                   break;
           case 3: queue.queueInsert();
                   break;
           case 4: queue.queueRemove();
                   break;
           case 5: stack.stackPrint();
                   break;
           case 6: queue.queuePrint();
                   break;
           default:exit(0);
                   break;
        }

     char c;
     cout<<"Wish to continue (Enter y or Y) ?"<<endl;
     cin>>c;
     if(c=='y'||c=='Y')
     system("cls");
     else
        exit(0);
    }
    return 0;
}

