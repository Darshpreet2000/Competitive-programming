// Binary Search Tree
#include<iostream>
#include"Stack.h"
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
};

class Tree{
    public: 
    TreeNode *root;
    Tree(){
        TreeNode *newNode = new TreeNode;
        newNode->data =101;
        newNode->left = newNode->right =NULL;
        root = newNode;
    }
    Tree(int x){
        TreeNode *newNode = new TreeNode;
        newNode->data =x;
        newNode->left = newNode->right =NULL;
        root = newNode;
    }

    void insert(int x){
        TreeNode *p,*t;
        p=root;
        while(p){
            if(p->data < x){
                t=p;
                p=p->right;
            }else if(p->data > x)
            {
                t=p;
                p=p->left;
            }else
            {
                cout<<"The element already exist. \n";
                return;
            }
            
        }
        TreeNode *newNode = new TreeNode;
        newNode->data = x;
        newNode->left=newNode->right = NULL;
        if(t->data < x){
            t->right = newNode;
        } else
        {
            t->left = newNode;
        }
        
    }

    void deleteTree(){
        TreeNode *t = root;
        deleteNode(t);
    }
    void deleteNode(TreeNode *t){
        if(!t)return;
        deleteNode(t->left);
        deleteNode(t->right);
        cout<<"\nDeleting Node :"<<t->data<<endl;
        delete t;
    }
    
    void inOrderDisplay(){
        cout<<"\n Inorder Display: ";
        StackLinkedList <TreeNode> l;
        TreeNode *t = root;
        while ((t!=NULL) || (l.top !=NULL))
        {
            while (t)
            {
                l.push(t);
                t=t->left;
            }
            t= l.pop();
            cout<<t->data<<" ";
            t=t->right;
        }
        cout<<endl;
    }
// saveing bookmark
    void preOrderDisplay(){
        cout<<"\n PreOrder Display: ";
        StackLinkedList <TreeNode> l;       
        TreeNode *t = root;
        while ((t!=NULL) || (l.top !=NULL))
        {
            while (t)
            {
                l.push(t);
                cout<<t->data<<" ";
                t=t->left;
            }
            t= l.pop();
            t=t->right;
        }
        cout<<endl; 
    }

    void postOrderDisplayWithTwoStacks(){
        cout<<"\n PostOrder Display With Two Stacks: ";
        StackLinkedList <TreeNode> l1;
        StackLinkedList <TreeNode> l2;
        TreeNode *t = root;
        l1.push(t);
        while (!l1.isEmpty())
        {
            t= l1.pop();
            l2.push(t);
            if(t->left)
                l1.push(t->left);
            if(t->right)
                l1.push(t->right);
        }
        Node<TreeNode> *n = l2.top;
        while (n)
        {
            cout<<n->data->data<<" ";
            n=n->link;
        }
        cout<<endl;
    }

    void postOrderDisplaySingleStack(){
        cout<<"\n PostOrder Display With Single Stack: ";
        StackLinkedList <TreeNode> l;

        if(!root)
            return;
            
        TreeNode *t=root;
        do
        {
            while (t)
            {
                if(t->right)
                    l.push(t->right);
                l.push(t);
                t=t->left;
            }
            t=l.pop();
            if(t->right == l.top->data){
                l.pop();
                l.push(t);
                t=t->right;
            }else
            {
                cout<<t->data<<" ";
                t=NULL;
            }
        } while (!l.isEmpty());

        cout<<endl;
    }

};

int main(){
    Tree t(4);
    int A[10]={4,2,6,1,3,5,7};
    for(int i =0; i<7;i++){
        t.insert(A[i]);
    }

    // cout<<t.root->data<<endl;
    // cout<<t.root->left->data<<endl;
    // cout<<t.root->right->data<<endl;
    
    // cout<<t.root->left->left->data<<endl;
    // cout<<t.root->left->right->data<<endl;

    // cout<<t.root->right->left->data<<endl;
    // cout<<t.root->right->right->data<<endl;
    
    
    cout<<"-------------------\n";
    t.inOrderDisplay();
    cout<<"-------------------\n";
    t.preOrderDisplay();

    cout<<"-------------------\n";
    t.postOrderDisplayWithTwoStacks();
    cout<<"------------------gifgvinvfmvx----------------\n";
    cout<<"------------------gifgvinvfmvx----------------\n";
    cout<<"------------------gifgvinvfmvx----------------\n";
    cout<<"------------------gifgvinvfmvx----------------\n";
    cout<<"------------------gifgvinvfmvx----------------\n";
    cout<<"------------------gifgvinvfmvx----------------\n";
     t.postOrderDisplaySingleStack();
    cout<<"-------------------\n";



return(0);
}