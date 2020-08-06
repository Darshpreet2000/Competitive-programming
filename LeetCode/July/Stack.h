//Template Stack for user defined datatypes  through pointers
#include<iostream>
using namespace std;

template <class T>
class Node{
    public:
    T *data;
    Node<T> *link;
};

template <class T>
class StackLinkedList
{   public:
    Node<T> *top = NULL;
    StackLinkedList(){
        top =NULL;
    }
    ~StackLinkedList(){
        while(top !=NULL){
            Node<T> *t = this->top;
            top = top->link;
            delete t;
        }
        cout<<"\nThe stack is deleted."<<endl;
    }
    int isFull(){
        return(0);
    };
    int isEmpty(){
        if(top == NULL)
            return(1);
        return(0);
    }
    T peek(int pos){
        Node<T> *t= top;
        while(pos > 1){
            pos--;
            t= t->link;
        }
        return(t->data);
    }
    int push(T *x){
        if(isFull())
        {
            cout<<"Overflow, No space for new element."<<endl;
            return(0);
        }
        else
        {
            Node<T> *newNode = new Node<T>;
            newNode->data = x;
            newNode->link = top;
            top = newNode;
            return(1);
        }
    }
    T* pop(){
        if(this->top == NULL)
        {
            cout<<"Underflow, Cannot Pop."<<endl;
            return(0);
        }
        else
        {
            Node<T> *t = this->top;
            T *x = t->data;
            this->top = this->top->link;
            delete t;
            return(x);
        }
    }
    void display(){
        if(this->top == NULL){
            cout<<"the stack is empty."<<endl;
        } else
        {   Node<T> *t = this->top;
            int pos=1;
            while (t != NULL)
            {   cout<<pos<<" : "<<*(t->data)<<endl;
                t=t->link;
                pos++;
            } 
        }
        cout<<"------------------"<<endl;
    }
};