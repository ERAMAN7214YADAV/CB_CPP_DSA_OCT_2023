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
        head = head->next;
    }
    cout<<endl;
}
void deleteAtHead(ListNode*& head){
    if(head == NULL)
    return;
    ListNode* temp = head;
    head = head->next;
    delete temp;
}
int main () {
    ListNode* head = NULL;
    insertAtHead(head , 50);
    insertAtHead(head , 40);
    insertAtHead(head , 30);
    insertAtHead(head , 20);
    insertAtHead(head , 10);
 //   insertAtHead(head , 1);
    printLinkedlist(head);
    deleteAtHead(head);
    printLinkedlist(head);
   // insertAtHead(head , val);
   return 0;
}