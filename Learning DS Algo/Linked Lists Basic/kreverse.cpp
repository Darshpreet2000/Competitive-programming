#include<iostream>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
    ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


    bool isPossibleToReverse(int copyk,ListNode*newHead){
            while(newHead!=NULL&&copyk>0){
                copyk-=1;
                newHead=newHead->next;
            }
        if(copyk==0)
        return true;
       return false;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int copyk=k;
         ListNode* firstp,*lastp;
         ListNode* headCopy=head;
         int itr=0;
        while(headCopy!=NULL){
            //first check if possible to reverse
            if(isPossibleToReverse(k,headCopy)){
                //reverse
                ListNode *first,*save,*prev=NULL;
                copyk=k;
                first=headCopy;
                while(copyk!=0){
                    save=headCopy->next;
                    headCopy->next=prev;
                    prev=headCopy;
                    headCopy=save;
                    copyk--;
                }
                lastp=prev;
                if(itr!=0)
                firstp->next=lastp;
         //       cout<<prev->val;
                firstp=first;
                if(itr==0){
                    head=prev;
                }
                itr++;
            }
            else{
       //             cout<<"W";
                //don't reverse
                if(itr!=0)
                firstp->next=headCopy;
                while(headCopy!=NULL)
                    headCopy=headCopy->next;
            }

        }

        return head;
    }
int main(){
    int n;
    cin>>n;
    int inp;
    ListNode *prev,*dummy=new ListNode(-1,NULL);
    prev=dummy;
    for(int i=0;i<n;i++){
        cin>>inp;
       ListNode* np=new ListNode(inp,NULL);
       prev->next=np;
       prev=np;
    }
    int k; cin>>k;
    ListNode*head=dummy->next;
    head=reverseKGroup(head,k);
    while(head!=NULL){
          cout<<head->val<<" ";
          head=head->next;
       }
  return 0;
}
