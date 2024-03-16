#include<iostream>
using namespace std;
class ListNode {
    public :
    int val;
     ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};
    void insertAtHead(ListNode*& head , int val){
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
    }
    void printLinkedlist(ListNode* head){
        while(head != NULL){
            cout<<head->val<<" ";
           head =  head->next;
        }
        cout<<endl;
    }
int main () {
    ListNode* head = NULL;
 //   ListNode* n = new ListNode(10);
   // cout<<n->val<<endl;
    //if(n->next == NULL) {
      //  cout<<"NO NEXT NODE"<<endl;
    insertAtHead(head , 50);
    insertAtHead(head , 40);
    insertAtHead(head , 30);
    insertAtHead(head , 20);
    insertAtHead(head , 10);
   // insertAtHead(head , 40);
   printLinkedlist(head);
    
    return 0;
}