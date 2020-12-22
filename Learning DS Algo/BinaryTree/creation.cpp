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
       right=NULL;np->
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
void print(node *root){
    if(root==NULL) return;
   cout<<root->data<<" ";

   print(root->left);

     print(root->right);
    return;
}
int main() {
     node *root=buildTree();

     print(root);

}

