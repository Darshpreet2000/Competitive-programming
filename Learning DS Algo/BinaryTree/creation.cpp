#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int d){
       data=d;
       left=NULL;
       right=NULL;
    }
};
node *buildTree(){
    int d;
    cin>>d;
    if(d==-1) return NULL;
    node * np=new node(d);
    np->left=buildTree();
    np->right=buildTree();
    return np;
}
void preorder(node *root){
    if(root==NULL) return;
   cout<<root->data<<" ";

   print(root->left);

     print(root->right);
    return;
}
void inorder(node *root){
    if(root==NULL) return;

   print(root->left);

   cout<<root->data<<" ";
     print(root->right);
    return;
}
void postorder(node *root){
    if(root==NULL) return;

   print(root->left);

     print(root->right);
   cout<<root->data<<" ";

    return;
}
int main() {
     node *root=buildTree();

     preorder(root);
     inorder(root);
     postorder(root);

}

